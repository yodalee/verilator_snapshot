// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1223__Vfuncout;
    __Vfunc_aes_square_gf2p2__1223__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1223__g;
    __Vfunc_aes_square_gf2p2__1223__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1223__d;
    __Vfunc_aes_square_gf2p2__1223__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1227__Vfuncout;
    __Vfunc_aes_square_gf2p2__1227__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1227__g;
    __Vfunc_aes_square_gf2p2__1227__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1227__d;
    __Vfunc_aes_square_gf2p2__1227__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1230__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1230__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1230__gamma;
    __Vfunc_aes_mul_gf2p4__1230__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1230__delta;
    __Vfunc_aes_mul_gf2p4__1230__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1230__a;
    __Vfunc_aes_mul_gf2p4__1230__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1230__b;
    __Vfunc_aes_mul_gf2p4__1230__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1230__c;
    __Vfunc_aes_mul_gf2p4__1230__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1231__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1231__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1231__g;
    __Vfunc_aes_mul_gf2p2__1231__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1231__d;
    __Vfunc_aes_mul_gf2p2__1231__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1231__f;
    __Vfunc_aes_mul_gf2p2__1231__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1231__a;
    __Vfunc_aes_mul_gf2p2__1231__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1231__b;
    __Vfunc_aes_mul_gf2p2__1231__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1231__c;
    __Vfunc_aes_mul_gf2p2__1231__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1232__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1232__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1232__g;
    __Vfunc_aes_mul_gf2p2__1232__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1232__d;
    __Vfunc_aes_mul_gf2p2__1232__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1232__f;
    __Vfunc_aes_mul_gf2p2__1232__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1232__a;
    __Vfunc_aes_mul_gf2p2__1232__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1232__b;
    __Vfunc_aes_mul_gf2p2__1232__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1232__c;
    __Vfunc_aes_mul_gf2p2__1232__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1233__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1233__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1233__g;
    __Vfunc_aes_mul_gf2p2__1233__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1233__d;
    __Vfunc_aes_mul_gf2p2__1233__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1233__f;
    __Vfunc_aes_mul_gf2p2__1233__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1233__a;
    __Vfunc_aes_mul_gf2p2__1233__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1233__b;
    __Vfunc_aes_mul_gf2p2__1233__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1233__c;
    __Vfunc_aes_mul_gf2p2__1233__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1236__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1236__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1236__gamma;
    __Vfunc_aes_mul_gf2p4__1236__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1236__delta;
    __Vfunc_aes_mul_gf2p4__1236__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1236__a;
    __Vfunc_aes_mul_gf2p4__1236__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1236__b;
    __Vfunc_aes_mul_gf2p4__1236__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1236__c;
    __Vfunc_aes_mul_gf2p4__1236__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1237__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1237__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1237__g;
    __Vfunc_aes_mul_gf2p2__1237__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1237__d;
    __Vfunc_aes_mul_gf2p2__1237__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1237__f;
    __Vfunc_aes_mul_gf2p2__1237__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1237__a;
    __Vfunc_aes_mul_gf2p2__1237__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1237__b;
    __Vfunc_aes_mul_gf2p2__1237__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1237__c;
    __Vfunc_aes_mul_gf2p2__1237__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1238__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1238__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1238__g;
    __Vfunc_aes_mul_gf2p2__1238__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1238__d;
    __Vfunc_aes_mul_gf2p2__1238__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1238__f;
    __Vfunc_aes_mul_gf2p2__1238__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1238__a;
    __Vfunc_aes_mul_gf2p2__1238__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1238__b;
    __Vfunc_aes_mul_gf2p2__1238__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1238__c;
    __Vfunc_aes_mul_gf2p2__1238__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1239__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1239__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1239__g;
    __Vfunc_aes_mul_gf2p2__1239__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1239__d;
    __Vfunc_aes_mul_gf2p2__1239__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1239__f;
    __Vfunc_aes_mul_gf2p2__1239__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1239__a;
    __Vfunc_aes_mul_gf2p2__1239__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1239__b;
    __Vfunc_aes_mul_gf2p2__1239__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1239__c;
    __Vfunc_aes_mul_gf2p2__1239__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1242__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1242__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1242__gamma;
    __Vfunc_aes_mul_gf2p4__1242__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1242__delta;
    __Vfunc_aes_mul_gf2p4__1242__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1242__a;
    __Vfunc_aes_mul_gf2p4__1242__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1242__b;
    __Vfunc_aes_mul_gf2p4__1242__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1242__c;
    __Vfunc_aes_mul_gf2p4__1242__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1243__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__g;
    __Vfunc_aes_mul_gf2p2__1243__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__d;
    __Vfunc_aes_mul_gf2p2__1243__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1243__f;
    __Vfunc_aes_mul_gf2p2__1243__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1243__a;
    __Vfunc_aes_mul_gf2p2__1243__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1243__b;
    __Vfunc_aes_mul_gf2p2__1243__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1243__c;
    __Vfunc_aes_mul_gf2p2__1243__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1244__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__g;
    __Vfunc_aes_mul_gf2p2__1244__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__d;
    __Vfunc_aes_mul_gf2p2__1244__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1244__f;
    __Vfunc_aes_mul_gf2p2__1244__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1244__a;
    __Vfunc_aes_mul_gf2p2__1244__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1244__b;
    __Vfunc_aes_mul_gf2p2__1244__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1244__c;
    __Vfunc_aes_mul_gf2p2__1244__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1245__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__g;
    __Vfunc_aes_mul_gf2p2__1245__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__d;
    __Vfunc_aes_mul_gf2p2__1245__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1245__f;
    __Vfunc_aes_mul_gf2p2__1245__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1245__a;
    __Vfunc_aes_mul_gf2p2__1245__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1245__b;
    __Vfunc_aes_mul_gf2p2__1245__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1245__c;
    __Vfunc_aes_mul_gf2p2__1245__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1248__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1248__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1248__gamma;
    __Vfunc_aes_mul_gf2p4__1248__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1248__delta;
    __Vfunc_aes_mul_gf2p4__1248__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1248__a;
    __Vfunc_aes_mul_gf2p4__1248__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1248__b;
    __Vfunc_aes_mul_gf2p4__1248__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1248__c;
    __Vfunc_aes_mul_gf2p4__1248__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1249__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__g;
    __Vfunc_aes_mul_gf2p2__1249__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__d;
    __Vfunc_aes_mul_gf2p2__1249__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1249__f;
    __Vfunc_aes_mul_gf2p2__1249__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1249__a;
    __Vfunc_aes_mul_gf2p2__1249__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1249__b;
    __Vfunc_aes_mul_gf2p2__1249__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1249__c;
    __Vfunc_aes_mul_gf2p2__1249__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1250__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__g;
    __Vfunc_aes_mul_gf2p2__1250__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__d;
    __Vfunc_aes_mul_gf2p2__1250__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1250__f;
    __Vfunc_aes_mul_gf2p2__1250__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1250__a;
    __Vfunc_aes_mul_gf2p2__1250__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1250__b;
    __Vfunc_aes_mul_gf2p2__1250__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1250__c;
    __Vfunc_aes_mul_gf2p2__1250__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1251__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__g;
    __Vfunc_aes_mul_gf2p2__1251__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__d;
    __Vfunc_aes_mul_gf2p2__1251__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1251__f;
    __Vfunc_aes_mul_gf2p2__1251__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1251__a;
    __Vfunc_aes_mul_gf2p2__1251__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1251__b;
    __Vfunc_aes_mul_gf2p2__1251__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1251__c;
    __Vfunc_aes_mul_gf2p2__1251__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1254__g;
    __Vfunc_aes_scale_omega2_gf2p2__1254__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1254__d;
    __Vfunc_aes_scale_omega2_gf2p2__1254__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1255__Vfuncout;
    __Vfunc_aes_square_gf2p2__1255__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1255__g;
    __Vfunc_aes_square_gf2p2__1255__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1255__d;
    __Vfunc_aes_square_gf2p2__1255__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1256__g;
    __Vfunc_aes_scale_omega2_gf2p2__1256__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1256__d;
    __Vfunc_aes_scale_omega2_gf2p2__1256__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1257__Vfuncout;
    __Vfunc_aes_square_gf2p2__1257__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1257__g;
    __Vfunc_aes_square_gf2p2__1257__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1257__d;
    __Vfunc_aes_square_gf2p2__1257__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1258__Vfuncout;
    __Vfunc_aes_square_gf2p2__1258__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1258__g;
    __Vfunc_aes_square_gf2p2__1258__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1258__d;
    __Vfunc_aes_square_gf2p2__1258__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1259__Vfuncout;
    __Vfunc_aes_square_gf2p2__1259__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1259__g;
    __Vfunc_aes_square_gf2p2__1259__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1259__d;
    __Vfunc_aes_square_gf2p2__1259__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1260__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1260__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1260__g;
    __Vfunc_aes_mul_gf2p2__1260__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1260__d;
    __Vfunc_aes_mul_gf2p2__1260__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1260__f;
    __Vfunc_aes_mul_gf2p2__1260__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1260__a;
    __Vfunc_aes_mul_gf2p2__1260__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1260__b;
    __Vfunc_aes_mul_gf2p2__1260__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1260__c;
    __Vfunc_aes_mul_gf2p2__1260__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1261__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1261__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1261__g;
    __Vfunc_aes_mul_gf2p2__1261__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1261__d;
    __Vfunc_aes_mul_gf2p2__1261__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1261__f;
    __Vfunc_aes_mul_gf2p2__1261__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1261__a;
    __Vfunc_aes_mul_gf2p2__1261__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1261__b;
    __Vfunc_aes_mul_gf2p2__1261__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1261__c;
    __Vfunc_aes_mul_gf2p2__1261__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1262__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__g;
    __Vfunc_aes_mul_gf2p2__1262__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__d;
    __Vfunc_aes_mul_gf2p2__1262__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1262__f;
    __Vfunc_aes_mul_gf2p2__1262__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1262__a;
    __Vfunc_aes_mul_gf2p2__1262__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1262__b;
    __Vfunc_aes_mul_gf2p2__1262__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1262__c;
    __Vfunc_aes_mul_gf2p2__1262__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1263__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__g;
    __Vfunc_aes_mul_gf2p2__1263__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__d;
    __Vfunc_aes_mul_gf2p2__1263__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1263__f;
    __Vfunc_aes_mul_gf2p2__1263__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1263__a;
    __Vfunc_aes_mul_gf2p2__1263__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1263__b;
    __Vfunc_aes_mul_gf2p2__1263__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1263__c;
    __Vfunc_aes_mul_gf2p2__1263__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1264__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1264__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1264__g;
    __Vfunc_aes_mul_gf2p2__1264__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1264__d;
    __Vfunc_aes_mul_gf2p2__1264__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1264__f;
    __Vfunc_aes_mul_gf2p2__1264__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1264__a;
    __Vfunc_aes_mul_gf2p2__1264__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1264__b;
    __Vfunc_aes_mul_gf2p2__1264__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1264__c;
    __Vfunc_aes_mul_gf2p2__1264__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1265__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1265__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1265__g;
    __Vfunc_aes_mul_gf2p2__1265__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1265__d;
    __Vfunc_aes_mul_gf2p2__1265__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1265__f;
    __Vfunc_aes_mul_gf2p2__1265__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1265__a;
    __Vfunc_aes_mul_gf2p2__1265__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1265__b;
    __Vfunc_aes_mul_gf2p2__1265__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1265__c;
    __Vfunc_aes_mul_gf2p2__1265__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1266__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__g;
    __Vfunc_aes_mul_gf2p2__1266__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__d;
    __Vfunc_aes_mul_gf2p2__1266__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1266__f;
    __Vfunc_aes_mul_gf2p2__1266__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1266__a;
    __Vfunc_aes_mul_gf2p2__1266__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1266__b;
    __Vfunc_aes_mul_gf2p2__1266__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1266__c;
    __Vfunc_aes_mul_gf2p2__1266__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1267__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__g;
    __Vfunc_aes_mul_gf2p2__1267__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__d;
    __Vfunc_aes_mul_gf2p2__1267__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1267__f;
    __Vfunc_aes_mul_gf2p2__1267__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1267__a;
    __Vfunc_aes_mul_gf2p2__1267__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1267__b;
    __Vfunc_aes_mul_gf2p2__1267__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1267__c;
    __Vfunc_aes_mul_gf2p2__1267__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1268__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1268__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1268__g;
    __Vfunc_aes_mul_gf2p2__1268__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1268__d;
    __Vfunc_aes_mul_gf2p2__1268__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1268__f;
    __Vfunc_aes_mul_gf2p2__1268__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1268__a;
    __Vfunc_aes_mul_gf2p2__1268__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1268__b;
    __Vfunc_aes_mul_gf2p2__1268__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1268__c;
    __Vfunc_aes_mul_gf2p2__1268__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1269__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1269__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1269__g;
    __Vfunc_aes_mul_gf2p2__1269__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1269__d;
    __Vfunc_aes_mul_gf2p2__1269__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1269__f;
    __Vfunc_aes_mul_gf2p2__1269__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1269__a;
    __Vfunc_aes_mul_gf2p2__1269__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1269__b;
    __Vfunc_aes_mul_gf2p2__1269__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1269__c;
    __Vfunc_aes_mul_gf2p2__1269__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1270__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__g;
    __Vfunc_aes_mul_gf2p2__1270__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__d;
    __Vfunc_aes_mul_gf2p2__1270__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1270__f;
    __Vfunc_aes_mul_gf2p2__1270__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1270__a;
    __Vfunc_aes_mul_gf2p2__1270__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1270__b;
    __Vfunc_aes_mul_gf2p2__1270__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1270__c;
    __Vfunc_aes_mul_gf2p2__1270__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1271__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__g;
    __Vfunc_aes_mul_gf2p2__1271__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__d;
    __Vfunc_aes_mul_gf2p2__1271__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1271__f;
    __Vfunc_aes_mul_gf2p2__1271__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1271__a;
    __Vfunc_aes_mul_gf2p2__1271__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1271__b;
    __Vfunc_aes_mul_gf2p2__1271__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1271__c;
    __Vfunc_aes_mul_gf2p2__1271__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1272__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1272__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1272__gamma;
    __Vfunc_aes_mul_gf2p4__1272__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1272__delta;
    __Vfunc_aes_mul_gf2p4__1272__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1272__a;
    __Vfunc_aes_mul_gf2p4__1272__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1272__b;
    __Vfunc_aes_mul_gf2p4__1272__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1272__c;
    __Vfunc_aes_mul_gf2p4__1272__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1273__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1273__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1273__g;
    __Vfunc_aes_mul_gf2p2__1273__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1273__d;
    __Vfunc_aes_mul_gf2p2__1273__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1273__f;
    __Vfunc_aes_mul_gf2p2__1273__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1273__a;
    __Vfunc_aes_mul_gf2p2__1273__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1273__b;
    __Vfunc_aes_mul_gf2p2__1273__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1273__c;
    __Vfunc_aes_mul_gf2p2__1273__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1274__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1274__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1274__g;
    __Vfunc_aes_mul_gf2p2__1274__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1274__d;
    __Vfunc_aes_mul_gf2p2__1274__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1274__f;
    __Vfunc_aes_mul_gf2p2__1274__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1274__a;
    __Vfunc_aes_mul_gf2p2__1274__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1274__b;
    __Vfunc_aes_mul_gf2p2__1274__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1274__c;
    __Vfunc_aes_mul_gf2p2__1274__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1275__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1275__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1275__g;
    __Vfunc_aes_mul_gf2p2__1275__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1275__d;
    __Vfunc_aes_mul_gf2p2__1275__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1275__f;
    __Vfunc_aes_mul_gf2p2__1275__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1275__a;
    __Vfunc_aes_mul_gf2p2__1275__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1275__b;
    __Vfunc_aes_mul_gf2p2__1275__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1275__c;
    __Vfunc_aes_mul_gf2p2__1275__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1278__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1278__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1278__gamma;
    __Vfunc_aes_mul_gf2p4__1278__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1278__delta;
    __Vfunc_aes_mul_gf2p4__1278__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1278__a;
    __Vfunc_aes_mul_gf2p4__1278__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1278__b;
    __Vfunc_aes_mul_gf2p4__1278__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1278__c;
    __Vfunc_aes_mul_gf2p4__1278__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1279__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__g;
    __Vfunc_aes_mul_gf2p2__1279__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__d;
    __Vfunc_aes_mul_gf2p2__1279__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1279__f;
    __Vfunc_aes_mul_gf2p2__1279__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1279__a;
    __Vfunc_aes_mul_gf2p2__1279__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1279__b;
    __Vfunc_aes_mul_gf2p2__1279__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1279__c;
    __Vfunc_aes_mul_gf2p2__1279__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1280__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__g;
    __Vfunc_aes_mul_gf2p2__1280__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__d;
    __Vfunc_aes_mul_gf2p2__1280__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1280__f;
    __Vfunc_aes_mul_gf2p2__1280__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1280__a;
    __Vfunc_aes_mul_gf2p2__1280__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1280__b;
    __Vfunc_aes_mul_gf2p2__1280__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1280__c;
    __Vfunc_aes_mul_gf2p2__1280__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1281__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__g;
    __Vfunc_aes_mul_gf2p2__1281__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__d;
    __Vfunc_aes_mul_gf2p2__1281__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1281__f;
    __Vfunc_aes_mul_gf2p2__1281__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1281__a;
    __Vfunc_aes_mul_gf2p2__1281__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1281__b;
    __Vfunc_aes_mul_gf2p2__1281__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1281__c;
    __Vfunc_aes_mul_gf2p2__1281__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1284__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1284__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1284__gamma;
    __Vfunc_aes_mul_gf2p4__1284__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1284__delta;
    __Vfunc_aes_mul_gf2p4__1284__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1284__a;
    __Vfunc_aes_mul_gf2p4__1284__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1284__b;
    __Vfunc_aes_mul_gf2p4__1284__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1284__c;
    __Vfunc_aes_mul_gf2p4__1284__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1285__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__g;
    __Vfunc_aes_mul_gf2p2__1285__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__d;
    __Vfunc_aes_mul_gf2p2__1285__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1285__f;
    __Vfunc_aes_mul_gf2p2__1285__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1285__a;
    __Vfunc_aes_mul_gf2p2__1285__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1285__b;
    __Vfunc_aes_mul_gf2p2__1285__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1285__c;
    __Vfunc_aes_mul_gf2p2__1285__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1286__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__g;
    __Vfunc_aes_mul_gf2p2__1286__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__d;
    __Vfunc_aes_mul_gf2p2__1286__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1286__f;
    __Vfunc_aes_mul_gf2p2__1286__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1286__a;
    __Vfunc_aes_mul_gf2p2__1286__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1286__b;
    __Vfunc_aes_mul_gf2p2__1286__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1286__c;
    __Vfunc_aes_mul_gf2p2__1286__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1287__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__g;
    __Vfunc_aes_mul_gf2p2__1287__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__d;
    __Vfunc_aes_mul_gf2p2__1287__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1287__f;
    __Vfunc_aes_mul_gf2p2__1287__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1287__a;
    __Vfunc_aes_mul_gf2p2__1287__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1287__b;
    __Vfunc_aes_mul_gf2p2__1287__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1287__c;
    __Vfunc_aes_mul_gf2p2__1287__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1290__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1290__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1290__gamma;
    __Vfunc_aes_mul_gf2p4__1290__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1290__delta;
    __Vfunc_aes_mul_gf2p4__1290__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1290__a;
    __Vfunc_aes_mul_gf2p4__1290__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1290__b;
    __Vfunc_aes_mul_gf2p4__1290__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1290__c;
    __Vfunc_aes_mul_gf2p4__1290__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1291__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1291__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1291__g;
    __Vfunc_aes_mul_gf2p2__1291__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1291__d;
    __Vfunc_aes_mul_gf2p2__1291__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1291__f;
    __Vfunc_aes_mul_gf2p2__1291__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1291__a;
    __Vfunc_aes_mul_gf2p2__1291__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1291__b;
    __Vfunc_aes_mul_gf2p2__1291__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1291__c;
    __Vfunc_aes_mul_gf2p2__1291__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1292__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1292__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1292__g;
    __Vfunc_aes_mul_gf2p2__1292__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1292__d;
    __Vfunc_aes_mul_gf2p2__1292__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1292__f;
    __Vfunc_aes_mul_gf2p2__1292__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1292__a;
    __Vfunc_aes_mul_gf2p2__1292__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1292__b;
    __Vfunc_aes_mul_gf2p2__1292__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1292__c;
    __Vfunc_aes_mul_gf2p2__1292__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1293__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1293__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1293__g;
    __Vfunc_aes_mul_gf2p2__1293__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1293__d;
    __Vfunc_aes_mul_gf2p2__1293__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1293__f;
    __Vfunc_aes_mul_gf2p2__1293__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1293__a;
    __Vfunc_aes_mul_gf2p2__1293__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1293__b;
    __Vfunc_aes_mul_gf2p2__1293__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1293__c;
    __Vfunc_aes_mul_gf2p2__1293__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1296__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1296__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1296__gamma;
    __Vfunc_aes_mul_gf2p4__1296__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1296__delta;
    __Vfunc_aes_mul_gf2p4__1296__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1296__a;
    __Vfunc_aes_mul_gf2p4__1296__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1296__b;
    __Vfunc_aes_mul_gf2p4__1296__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1296__c;
    __Vfunc_aes_mul_gf2p4__1296__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1297__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1297__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1297__g;
    __Vfunc_aes_mul_gf2p2__1297__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1297__d;
    __Vfunc_aes_mul_gf2p2__1297__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1297__f;
    __Vfunc_aes_mul_gf2p2__1297__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1297__a;
    __Vfunc_aes_mul_gf2p2__1297__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1297__b;
    __Vfunc_aes_mul_gf2p2__1297__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1297__c;
    __Vfunc_aes_mul_gf2p2__1297__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1298__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1298__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1298__g;
    __Vfunc_aes_mul_gf2p2__1298__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1298__d;
    __Vfunc_aes_mul_gf2p2__1298__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1298__f;
    __Vfunc_aes_mul_gf2p2__1298__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1298__a;
    __Vfunc_aes_mul_gf2p2__1298__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1298__b;
    __Vfunc_aes_mul_gf2p2__1298__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1298__c;
    __Vfunc_aes_mul_gf2p2__1298__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1299__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1299__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1299__g;
    __Vfunc_aes_mul_gf2p2__1299__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1299__d;
    __Vfunc_aes_mul_gf2p2__1299__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1299__f;
    __Vfunc_aes_mul_gf2p2__1299__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1299__a;
    __Vfunc_aes_mul_gf2p2__1299__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1299__b;
    __Vfunc_aes_mul_gf2p2__1299__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1299__c;
    __Vfunc_aes_mul_gf2p2__1299__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1302__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1302__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1302__gamma;
    __Vfunc_aes_mul_gf2p4__1302__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1302__delta;
    __Vfunc_aes_mul_gf2p4__1302__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1302__a;
    __Vfunc_aes_mul_gf2p4__1302__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1302__b;
    __Vfunc_aes_mul_gf2p4__1302__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1302__c;
    __Vfunc_aes_mul_gf2p4__1302__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1303__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__g;
    __Vfunc_aes_mul_gf2p2__1303__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__d;
    __Vfunc_aes_mul_gf2p2__1303__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1303__f;
    __Vfunc_aes_mul_gf2p2__1303__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1303__a;
    __Vfunc_aes_mul_gf2p2__1303__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1303__b;
    __Vfunc_aes_mul_gf2p2__1303__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1303__c;
    __Vfunc_aes_mul_gf2p2__1303__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1304__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__g;
    __Vfunc_aes_mul_gf2p2__1304__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__d;
    __Vfunc_aes_mul_gf2p2__1304__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1304__f;
    __Vfunc_aes_mul_gf2p2__1304__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1304__a;
    __Vfunc_aes_mul_gf2p2__1304__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1304__b;
    __Vfunc_aes_mul_gf2p2__1304__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1304__c;
    __Vfunc_aes_mul_gf2p2__1304__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1305__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__g;
    __Vfunc_aes_mul_gf2p2__1305__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__d;
    __Vfunc_aes_mul_gf2p2__1305__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1305__f;
    __Vfunc_aes_mul_gf2p2__1305__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1305__a;
    __Vfunc_aes_mul_gf2p2__1305__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1305__b;
    __Vfunc_aes_mul_gf2p2__1305__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1305__c;
    __Vfunc_aes_mul_gf2p2__1305__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1308__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1308__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1308__gamma;
    __Vfunc_aes_mul_gf2p4__1308__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1308__delta;
    __Vfunc_aes_mul_gf2p4__1308__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1308__a;
    __Vfunc_aes_mul_gf2p4__1308__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1308__b;
    __Vfunc_aes_mul_gf2p4__1308__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1308__c;
    __Vfunc_aes_mul_gf2p4__1308__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1309__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__g;
    __Vfunc_aes_mul_gf2p2__1309__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__d;
    __Vfunc_aes_mul_gf2p2__1309__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__f;
    __Vfunc_aes_mul_gf2p2__1309__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1309__a;
    __Vfunc_aes_mul_gf2p2__1309__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1309__b;
    __Vfunc_aes_mul_gf2p2__1309__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1309__c;
    __Vfunc_aes_mul_gf2p2__1309__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1310__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__g;
    __Vfunc_aes_mul_gf2p2__1310__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__d;
    __Vfunc_aes_mul_gf2p2__1310__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__f;
    __Vfunc_aes_mul_gf2p2__1310__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1310__a;
    __Vfunc_aes_mul_gf2p2__1310__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1310__b;
    __Vfunc_aes_mul_gf2p2__1310__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1310__c;
    __Vfunc_aes_mul_gf2p2__1310__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1311__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__g;
    __Vfunc_aes_mul_gf2p2__1311__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__d;
    __Vfunc_aes_mul_gf2p2__1311__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__f;
    __Vfunc_aes_mul_gf2p2__1311__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1311__a;
    __Vfunc_aes_mul_gf2p2__1311__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1311__b;
    __Vfunc_aes_mul_gf2p2__1311__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1311__c;
    __Vfunc_aes_mul_gf2p2__1311__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1314__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1314__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1314__gamma;
    __Vfunc_aes_mul_gf2p4__1314__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1314__delta;
    __Vfunc_aes_mul_gf2p4__1314__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1314__a;
    __Vfunc_aes_mul_gf2p4__1314__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1314__b;
    __Vfunc_aes_mul_gf2p4__1314__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1314__c;
    __Vfunc_aes_mul_gf2p4__1314__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1315__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1315__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1315__g;
    __Vfunc_aes_mul_gf2p2__1315__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1315__d;
    __Vfunc_aes_mul_gf2p2__1315__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1315__f;
    __Vfunc_aes_mul_gf2p2__1315__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1315__a;
    __Vfunc_aes_mul_gf2p2__1315__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1315__b;
    __Vfunc_aes_mul_gf2p2__1315__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1315__c;
    __Vfunc_aes_mul_gf2p2__1315__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1316__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1316__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1316__g;
    __Vfunc_aes_mul_gf2p2__1316__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1316__d;
    __Vfunc_aes_mul_gf2p2__1316__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1316__f;
    __Vfunc_aes_mul_gf2p2__1316__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1316__a;
    __Vfunc_aes_mul_gf2p2__1316__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1316__b;
    __Vfunc_aes_mul_gf2p2__1316__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1316__c;
    __Vfunc_aes_mul_gf2p2__1316__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1317__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1317__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1317__g;
    __Vfunc_aes_mul_gf2p2__1317__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1317__d;
    __Vfunc_aes_mul_gf2p2__1317__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1317__f;
    __Vfunc_aes_mul_gf2p2__1317__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1317__a;
    __Vfunc_aes_mul_gf2p2__1317__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1317__b;
    __Vfunc_aes_mul_gf2p2__1317__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1317__c;
    __Vfunc_aes_mul_gf2p2__1317__c = 0;
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
    __Vfunc_aes_mul_gf2p2__1264__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__419__03a392__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1264__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1264__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1264__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1264__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1264__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1264__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1264__d)));
    __Vfunc_aes_mul_gf2p2__1264__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1264__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1264__d)));
    __Vfunc_aes_mul_gf2p2__1264__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1264__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1264__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1264__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1264__b)));
    __Vfunc_aes_mul_gf2p2__1264__Vfuncout = __Vfunc_aes_mul_gf2p2__1264__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1264__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1265__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__419__03a392__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1265__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1265__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1265__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1265__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1265__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1265__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1265__d)));
    __Vfunc_aes_mul_gf2p2__1265__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1265__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1265__d)));
    __Vfunc_aes_mul_gf2p2__1265__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1265__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1265__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1265__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1265__b)));
    __Vfunc_aes_mul_gf2p2__1265__Vfuncout = __Vfunc_aes_mul_gf2p2__1265__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1265__Vfuncout;
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
                vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [0U][3U] >> 0x00000010U));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1210__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1210__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1210__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1210__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1210__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][3U] 
                                                    << 0x00000010U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][3U] 
                                                      >> 0x00000010U))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1211__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1211__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1211__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1211__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1211__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][3U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1212__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1212__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1212__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1212__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1212__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [1U][3U] >> 0x00000010U));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1213__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1213__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1213__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1213__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1213__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][3U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1214__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1214__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1214__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1214__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1214__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][3U] 
                                          >> 0x00000010U));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1215__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1215__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1215__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1215__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1215__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__1262__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1262__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1262__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1262__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1262__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1262__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1262__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1262__d)));
    __Vfunc_aes_mul_gf2p2__1262__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1262__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1262__d)));
    __Vfunc_aes_mul_gf2p2__1262__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1262__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1262__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1262__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1262__b)));
    __Vfunc_aes_mul_gf2p2__1262__Vfuncout = __Vfunc_aes_mul_gf2p2__1262__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1262__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1263__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1263__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1263__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1263__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1263__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1263__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1263__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1263__d)));
    __Vfunc_aes_mul_gf2p2__1263__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1263__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1263__d)));
    __Vfunc_aes_mul_gf2p2__1263__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1263__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1263__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1263__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1263__b)));
    __Vfunc_aes_mul_gf2p2__1263__Vfuncout = __Vfunc_aes_mul_gf2p2__1263__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1263__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1242__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__1242__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 673339850480107242ull);
    __Vfunc_aes_mul_gf2p2__1243__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1242__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1243__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1242__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1243__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1243__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1243__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1243__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1243__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1243__d)));
    __Vfunc_aes_mul_gf2p2__1243__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1243__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1243__d)));
    __Vfunc_aes_mul_gf2p2__1243__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1243__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1243__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1243__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1243__b)));
    __Vfunc_aes_mul_gf2p2__1243__Vfuncout = __Vfunc_aes_mul_gf2p2__1243__f;
    __Vfunc_aes_mul_gf2p4__1242__a = __Vfunc_aes_mul_gf2p2__1243__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1244__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1242__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1242__delta)));
    __Vfunc_aes_mul_gf2p2__1244__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1242__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1242__gamma)));
    __Vfunc_aes_mul_gf2p2__1244__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1244__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1244__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1244__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1244__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1244__d)));
    __Vfunc_aes_mul_gf2p2__1244__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1244__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1244__d)));
    __Vfunc_aes_mul_gf2p2__1244__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1244__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1244__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1244__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1244__b)));
    __Vfunc_aes_mul_gf2p2__1244__Vfuncout = __Vfunc_aes_mul_gf2p2__1244__f;
    __Vfunc_aes_mul_gf2p4__1242__b = __Vfunc_aes_mul_gf2p2__1244__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1245__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1242__delta));
    __Vfunc_aes_mul_gf2p2__1245__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1242__gamma));
    __Vfunc_aes_mul_gf2p2__1245__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1245__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1245__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1245__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1245__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1245__d)));
    __Vfunc_aes_mul_gf2p2__1245__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1245__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1245__d)));
    __Vfunc_aes_mul_gf2p2__1245__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1245__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1245__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1245__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1245__b)));
    __Vfunc_aes_mul_gf2p2__1245__Vfuncout = __Vfunc_aes_mul_gf2p2__1245__f;
    __Vfunc_aes_mul_gf2p4__1242__c = __Vfunc_aes_mul_gf2p2__1245__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1242__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1242__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1246__g 
                        = __Vfunc_aes_mul_gf2p4__1242__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1246__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1246__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1246__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1246__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1246__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1246__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1242__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1242__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1247__g 
                        = __Vfunc_aes_mul_gf2p4__1242__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1247__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1247__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1247__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1247__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1247__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1247__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1242__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1242__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1242__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1248__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__1248__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16597604040498264040ull);
    __Vfunc_aes_mul_gf2p2__1249__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1248__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1249__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1248__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1249__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1249__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1249__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1249__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1249__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1249__d)));
    __Vfunc_aes_mul_gf2p2__1249__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1249__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1249__d)));
    __Vfunc_aes_mul_gf2p2__1249__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1249__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1249__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1249__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1249__b)));
    __Vfunc_aes_mul_gf2p2__1249__Vfuncout = __Vfunc_aes_mul_gf2p2__1249__f;
    __Vfunc_aes_mul_gf2p4__1248__a = __Vfunc_aes_mul_gf2p2__1249__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1250__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1248__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1248__delta)));
    __Vfunc_aes_mul_gf2p2__1250__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1248__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1248__gamma)));
    __Vfunc_aes_mul_gf2p2__1250__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1250__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1250__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1250__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1250__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1250__d)));
    __Vfunc_aes_mul_gf2p2__1250__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1250__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1250__d)));
    __Vfunc_aes_mul_gf2p2__1250__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1250__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1250__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1250__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1250__b)));
    __Vfunc_aes_mul_gf2p2__1250__Vfuncout = __Vfunc_aes_mul_gf2p2__1250__f;
    __Vfunc_aes_mul_gf2p4__1248__b = __Vfunc_aes_mul_gf2p2__1250__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1251__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1248__delta));
    __Vfunc_aes_mul_gf2p2__1251__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1248__gamma));
    __Vfunc_aes_mul_gf2p2__1251__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1251__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1251__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1251__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1251__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1251__d)));
    __Vfunc_aes_mul_gf2p2__1251__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1251__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1251__d)));
    __Vfunc_aes_mul_gf2p2__1251__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1251__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1251__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1251__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1251__b)));
    __Vfunc_aes_mul_gf2p2__1251__Vfuncout = __Vfunc_aes_mul_gf2p2__1251__f;
    __Vfunc_aes_mul_gf2p4__1248__c = __Vfunc_aes_mul_gf2p2__1251__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1248__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1248__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1252__g 
                        = __Vfunc_aes_mul_gf2p4__1248__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1252__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1252__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1252__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1252__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1252__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1252__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1248__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1248__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1253__g 
                        = __Vfunc_aes_mul_gf2p4__1248__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1253__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1253__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1253__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1253__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1253__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1253__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1248__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1248__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1248__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1266__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1266__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1266__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1266__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1266__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1266__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1266__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1266__d)));
    __Vfunc_aes_mul_gf2p2__1266__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1266__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1266__d)));
    __Vfunc_aes_mul_gf2p2__1266__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1266__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1266__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1266__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1266__b)));
    __Vfunc_aes_mul_gf2p2__1266__Vfuncout = __Vfunc_aes_mul_gf2p2__1266__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1266__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1267__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1267__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1267__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1267__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1267__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1267__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1267__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1267__d)));
    __Vfunc_aes_mul_gf2p2__1267__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1267__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1267__d)));
    __Vfunc_aes_mul_gf2p2__1267__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1267__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1267__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1267__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1267__b)));
    __Vfunc_aes_mul_gf2p2__1267__Vfuncout = __Vfunc_aes_mul_gf2p2__1267__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1267__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1270__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1270__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1270__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1270__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1270__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1270__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1270__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1270__d)));
    __Vfunc_aes_mul_gf2p2__1270__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1270__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1270__d)));
    __Vfunc_aes_mul_gf2p2__1270__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1270__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1270__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1270__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1270__b)));
    __Vfunc_aes_mul_gf2p2__1270__Vfuncout = __Vfunc_aes_mul_gf2p2__1270__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1270__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1271__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1271__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1271__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1271__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1271__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1271__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1271__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1271__d)));
    __Vfunc_aes_mul_gf2p2__1271__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1271__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1271__d)));
    __Vfunc_aes_mul_gf2p2__1271__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1271__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1271__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1271__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1271__b)));
    __Vfunc_aes_mul_gf2p2__1271__Vfuncout = __Vfunc_aes_mul_gf2p2__1271__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1271__Vfuncout;
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1216__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1216__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1216__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1216__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1216__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1217__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1217__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1217__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1217__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1217__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1218__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1218__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1218__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__1218__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1218__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1219__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1219__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1219__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1219__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1219__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1220__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1220__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1220__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1220__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1220__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1221__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1221__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1221__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1221__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1221__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma)));
    __Vfunc_aes_square_gf2p2__1223__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1222__gamma));
    __Vfunc_aes_square_gf2p2__1223__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1223__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1223__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1223__Vfuncout = __Vfunc_aes_square_gf2p2__1223__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b = __Vfunc_aes_square_gf2p2__1223__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1224__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1224__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1224__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1224__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1224__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1224__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1224__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1225__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1225__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1225__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1225__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1225__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1225__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1225__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1222__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1230__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__419__03a392__KET__);
    __Vfunc_aes_mul_gf2p4__1230__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1230__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12956073075434960352ull);
    __Vfunc_aes_mul_gf2p2__1231__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1230__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1231__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1230__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1231__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1231__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1231__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1231__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1231__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1231__d)));
    __Vfunc_aes_mul_gf2p2__1231__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1231__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1231__d)));
    __Vfunc_aes_mul_gf2p2__1231__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1231__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1231__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1231__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1231__b)));
    __Vfunc_aes_mul_gf2p2__1231__Vfuncout = __Vfunc_aes_mul_gf2p2__1231__f;
    __Vfunc_aes_mul_gf2p4__1230__a = __Vfunc_aes_mul_gf2p2__1231__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1232__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1230__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1230__delta)));
    __Vfunc_aes_mul_gf2p2__1232__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1230__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1230__gamma)));
    __Vfunc_aes_mul_gf2p2__1232__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1232__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1232__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1232__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1232__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1232__d)));
    __Vfunc_aes_mul_gf2p2__1232__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1232__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1232__d)));
    __Vfunc_aes_mul_gf2p2__1232__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1232__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1232__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1232__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1232__b)));
    __Vfunc_aes_mul_gf2p2__1232__Vfuncout = __Vfunc_aes_mul_gf2p2__1232__f;
    __Vfunc_aes_mul_gf2p4__1230__b = __Vfunc_aes_mul_gf2p2__1232__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1233__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1230__delta));
    __Vfunc_aes_mul_gf2p2__1233__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1230__gamma));
    __Vfunc_aes_mul_gf2p2__1233__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1233__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1233__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1233__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1233__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1233__d)));
    __Vfunc_aes_mul_gf2p2__1233__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1233__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1233__d)));
    __Vfunc_aes_mul_gf2p2__1233__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1233__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1233__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1233__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1233__b)));
    __Vfunc_aes_mul_gf2p2__1233__Vfuncout = __Vfunc_aes_mul_gf2p2__1233__f;
    __Vfunc_aes_mul_gf2p4__1230__c = __Vfunc_aes_mul_gf2p2__1233__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1230__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1230__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1234__g 
                        = __Vfunc_aes_mul_gf2p4__1230__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1234__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1234__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1234__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1234__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1234__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1234__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1230__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1230__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1235__g 
                        = __Vfunc_aes_mul_gf2p4__1230__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1235__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1235__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1235__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1235__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1235__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1235__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1230__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1230__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__1230__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma)));
    __Vfunc_aes_square_gf2p2__1227__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1226__gamma));
    __Vfunc_aes_square_gf2p2__1227__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1227__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1227__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1227__Vfuncout = __Vfunc_aes_square_gf2p2__1227__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b = __Vfunc_aes_square_gf2p2__1227__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1228__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1228__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1228__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1228__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1228__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1228__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1228__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1229__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1229__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1229__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1229__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1229__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1229__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1229__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1226__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1236__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__419__03a392__KET__);
    __Vfunc_aes_mul_gf2p4__1236__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1236__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14951679249971758526ull);
    __Vfunc_aes_mul_gf2p2__1237__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1236__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1237__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1236__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1237__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1237__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1237__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1237__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1237__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1237__d)));
    __Vfunc_aes_mul_gf2p2__1237__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1237__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1237__d)));
    __Vfunc_aes_mul_gf2p2__1237__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1237__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1237__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1237__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1237__b)));
    __Vfunc_aes_mul_gf2p2__1237__Vfuncout = __Vfunc_aes_mul_gf2p2__1237__f;
    __Vfunc_aes_mul_gf2p4__1236__a = __Vfunc_aes_mul_gf2p2__1237__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1238__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1236__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1236__delta)));
    __Vfunc_aes_mul_gf2p2__1238__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1236__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1236__gamma)));
    __Vfunc_aes_mul_gf2p2__1238__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1238__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1238__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1238__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1238__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1238__d)));
    __Vfunc_aes_mul_gf2p2__1238__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1238__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1238__d)));
    __Vfunc_aes_mul_gf2p2__1238__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1238__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1238__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1238__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1238__b)));
    __Vfunc_aes_mul_gf2p2__1238__Vfuncout = __Vfunc_aes_mul_gf2p2__1238__f;
    __Vfunc_aes_mul_gf2p4__1236__b = __Vfunc_aes_mul_gf2p2__1238__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1239__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1236__delta));
    __Vfunc_aes_mul_gf2p2__1239__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1236__gamma));
    __Vfunc_aes_mul_gf2p2__1239__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1239__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1239__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1239__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1239__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1239__d)));
    __Vfunc_aes_mul_gf2p2__1239__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1239__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1239__d)));
    __Vfunc_aes_mul_gf2p2__1239__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1239__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1239__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1239__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1239__b)));
    __Vfunc_aes_mul_gf2p2__1239__Vfuncout = __Vfunc_aes_mul_gf2p2__1239__f;
    __Vfunc_aes_mul_gf2p4__1236__c = __Vfunc_aes_mul_gf2p2__1239__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1236__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1236__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1240__g 
                        = __Vfunc_aes_mul_gf2p4__1236__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1240__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1240__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1240__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1240__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1240__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1240__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1236__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1236__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1241__g 
                        = __Vfunc_aes_mul_gf2p4__1236__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1241__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1241__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1241__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1241__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1241__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1241__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1236__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1236__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__1236__Vfuncout;
    __Vfunc_aes_square_gf2p2__1258__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__1258__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1258__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1258__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1258__Vfuncout = __Vfunc_aes_square_gf2p2__1258__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1258__Vfuncout;
    __Vfunc_aes_square_gf2p2__1259__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1259__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1259__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1259__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1259__Vfuncout = __Vfunc_aes_square_gf2p2__1259__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1259__Vfuncout;
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
    __Vfunc_aes_mul_gf2p2__1268__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__419__03a392__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1268__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__1268__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1268__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1268__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1268__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1268__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1268__d)));
    __Vfunc_aes_mul_gf2p2__1268__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1268__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1268__d)));
    __Vfunc_aes_mul_gf2p2__1268__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1268__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1268__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1268__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1268__b)));
    __Vfunc_aes_mul_gf2p2__1268__Vfuncout = __Vfunc_aes_mul_gf2p2__1268__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1268__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1269__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__419__03a392__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1269__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__1269__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1269__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1269__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1269__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1269__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1269__d)));
    __Vfunc_aes_mul_gf2p2__1269__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1269__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1269__d)));
    __Vfunc_aes_mul_gf2p2__1269__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1269__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1269__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1269__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1269__b)));
    __Vfunc_aes_mul_gf2p2__1269__Vfuncout = __Vfunc_aes_mul_gf2p2__1269__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1269__Vfuncout;
    __Vfunc_aes_square_gf2p2__1255__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__1255__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1255__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1255__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1255__Vfuncout = __Vfunc_aes_square_gf2p2__1255__d;
    __Vfunc_aes_scale_omega2_gf2p2__1254__g = __Vfunc_aes_square_gf2p2__1255__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1254__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1254__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1254__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1254__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1254__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1260__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__419__03a392__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1260__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1260__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1260__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1260__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1260__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1260__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1260__d)));
    __Vfunc_aes_mul_gf2p2__1260__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1260__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1260__d)));
    __Vfunc_aes_mul_gf2p2__1260__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1260__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1260__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1260__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1260__b)));
    __Vfunc_aes_mul_gf2p2__1260__Vfuncout = __Vfunc_aes_mul_gf2p2__1260__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1260__Vfuncout;
    __Vfunc_aes_square_gf2p2__1257__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__1257__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1257__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1257__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1257__Vfuncout = __Vfunc_aes_square_gf2p2__1257__d;
    __Vfunc_aes_scale_omega2_gf2p2__1256__g = __Vfunc_aes_square_gf2p2__1257__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1256__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1256__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1256__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1256__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1256__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1261__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__419__03a392__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1261__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1261__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1261__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1261__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1261__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1261__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1261__d)));
    __Vfunc_aes_mul_gf2p2__1261__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1261__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1261__d)));
    __Vfunc_aes_mul_gf2p2__1261__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1261__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1261__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1261__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1261__b)));
    __Vfunc_aes_mul_gf2p2__1261__Vfuncout = __Vfunc_aes_mul_gf2p2__1261__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1261__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1272__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__1272__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1272__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 166837685272533111ull);
    __Vfunc_aes_mul_gf2p2__1273__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1272__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1273__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1272__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1273__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1273__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1273__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1273__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1273__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1273__d)));
    __Vfunc_aes_mul_gf2p2__1273__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1273__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1273__d)));
    __Vfunc_aes_mul_gf2p2__1273__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1273__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1273__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1273__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1273__b)));
    __Vfunc_aes_mul_gf2p2__1273__Vfuncout = __Vfunc_aes_mul_gf2p2__1273__f;
    __Vfunc_aes_mul_gf2p4__1272__a = __Vfunc_aes_mul_gf2p2__1273__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1274__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1272__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1272__delta)));
    __Vfunc_aes_mul_gf2p2__1274__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1272__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1272__gamma)));
    __Vfunc_aes_mul_gf2p2__1274__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1274__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1274__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1274__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1274__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1274__d)));
    __Vfunc_aes_mul_gf2p2__1274__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1274__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1274__d)));
    __Vfunc_aes_mul_gf2p2__1274__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1274__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1274__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1274__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1274__b)));
    __Vfunc_aes_mul_gf2p2__1274__Vfuncout = __Vfunc_aes_mul_gf2p2__1274__f;
    __Vfunc_aes_mul_gf2p4__1272__b = __Vfunc_aes_mul_gf2p2__1274__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1275__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1272__delta));
    __Vfunc_aes_mul_gf2p2__1275__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1272__gamma));
    __Vfunc_aes_mul_gf2p2__1275__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1275__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1275__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1275__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1275__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1275__d)));
    __Vfunc_aes_mul_gf2p2__1275__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1275__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1275__d)));
    __Vfunc_aes_mul_gf2p2__1275__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1275__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1275__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1275__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1275__b)));
    __Vfunc_aes_mul_gf2p2__1275__Vfuncout = __Vfunc_aes_mul_gf2p2__1275__f;
    __Vfunc_aes_mul_gf2p4__1272__c = __Vfunc_aes_mul_gf2p2__1275__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1272__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1272__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1276__g 
                        = __Vfunc_aes_mul_gf2p4__1272__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1276__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1276__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1276__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1276__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1276__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1276__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1272__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1272__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1277__g 
                        = __Vfunc_aes_mul_gf2p4__1272__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1277__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1277__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1277__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1277__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1277__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1277__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1272__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1272__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1272__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1290__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__1290__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1290__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14834023080961833505ull);
    __Vfunc_aes_mul_gf2p2__1291__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1290__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1291__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1290__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1291__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1291__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1291__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1291__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1291__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1291__d)));
    __Vfunc_aes_mul_gf2p2__1291__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1291__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1291__d)));
    __Vfunc_aes_mul_gf2p2__1291__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1291__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1291__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1291__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1291__b)));
    __Vfunc_aes_mul_gf2p2__1291__Vfuncout = __Vfunc_aes_mul_gf2p2__1291__f;
    __Vfunc_aes_mul_gf2p4__1290__a = __Vfunc_aes_mul_gf2p2__1291__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1292__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1290__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1290__delta)));
    __Vfunc_aes_mul_gf2p2__1292__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1290__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1290__gamma)));
    __Vfunc_aes_mul_gf2p2__1292__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1292__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1292__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1292__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1292__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1292__d)));
    __Vfunc_aes_mul_gf2p2__1292__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1292__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1292__d)));
    __Vfunc_aes_mul_gf2p2__1292__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1292__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1292__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1292__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1292__b)));
    __Vfunc_aes_mul_gf2p2__1292__Vfuncout = __Vfunc_aes_mul_gf2p2__1292__f;
    __Vfunc_aes_mul_gf2p4__1290__b = __Vfunc_aes_mul_gf2p2__1292__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1293__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1290__delta));
    __Vfunc_aes_mul_gf2p2__1293__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1290__gamma));
    __Vfunc_aes_mul_gf2p2__1293__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1293__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1293__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1293__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1293__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1293__d)));
    __Vfunc_aes_mul_gf2p2__1293__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1293__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1293__d)));
    __Vfunc_aes_mul_gf2p2__1293__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1293__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1293__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1293__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1293__b)));
    __Vfunc_aes_mul_gf2p2__1293__Vfuncout = __Vfunc_aes_mul_gf2p2__1293__f;
    __Vfunc_aes_mul_gf2p4__1290__c = __Vfunc_aes_mul_gf2p2__1293__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1290__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1290__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1294__g 
                        = __Vfunc_aes_mul_gf2p4__1290__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1294__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1294__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1294__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1294__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1294__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1294__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1290__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1290__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1295__g 
                        = __Vfunc_aes_mul_gf2p4__1290__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1295__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1295__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1295__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1295__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1295__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1295__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1290__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1290__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1290__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1296__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__1296__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9813389051709178982ull);
    __Vfunc_aes_mul_gf2p2__1297__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1296__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1297__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1296__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1297__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1297__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1297__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1297__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1297__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1297__d)));
    __Vfunc_aes_mul_gf2p2__1297__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1297__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1297__d)));
    __Vfunc_aes_mul_gf2p2__1297__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1297__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1297__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1297__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1297__b)));
    __Vfunc_aes_mul_gf2p2__1297__Vfuncout = __Vfunc_aes_mul_gf2p2__1297__f;
    __Vfunc_aes_mul_gf2p4__1296__a = __Vfunc_aes_mul_gf2p2__1297__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1298__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1296__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1296__delta)));
    __Vfunc_aes_mul_gf2p2__1298__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1296__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1296__gamma)));
    __Vfunc_aes_mul_gf2p2__1298__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1298__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1298__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1298__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1298__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1298__d)));
    __Vfunc_aes_mul_gf2p2__1298__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1298__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1298__d)));
    __Vfunc_aes_mul_gf2p2__1298__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1298__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1298__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1298__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1298__b)));
    __Vfunc_aes_mul_gf2p2__1298__Vfuncout = __Vfunc_aes_mul_gf2p2__1298__f;
    __Vfunc_aes_mul_gf2p4__1296__b = __Vfunc_aes_mul_gf2p2__1298__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1299__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1296__delta));
    __Vfunc_aes_mul_gf2p2__1299__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1296__gamma));
    __Vfunc_aes_mul_gf2p2__1299__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1299__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1299__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1299__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1299__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1299__d)));
    __Vfunc_aes_mul_gf2p2__1299__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1299__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1299__d)));
    __Vfunc_aes_mul_gf2p2__1299__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1299__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1299__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1299__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1299__b)));
    __Vfunc_aes_mul_gf2p2__1299__Vfuncout = __Vfunc_aes_mul_gf2p2__1299__f;
    __Vfunc_aes_mul_gf2p4__1296__c = __Vfunc_aes_mul_gf2p2__1299__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1296__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1296__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1300__g 
                        = __Vfunc_aes_mul_gf2p4__1296__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1300__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1300__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1300__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1300__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1300__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1300__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1296__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1296__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1301__g 
                        = __Vfunc_aes_mul_gf2p4__1296__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1301__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1301__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1301__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1301__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1301__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1301__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1296__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1296__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1296__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1308__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1308__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7039745952747063164ull);
    __Vfunc_aes_mul_gf2p2__1309__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1308__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1309__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1308__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1309__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1309__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1309__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1309__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1309__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1309__d)));
    __Vfunc_aes_mul_gf2p2__1309__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1309__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1309__d)));
    __Vfunc_aes_mul_gf2p2__1309__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1309__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1309__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1309__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1309__b)));
    __Vfunc_aes_mul_gf2p2__1309__Vfuncout = __Vfunc_aes_mul_gf2p2__1309__f;
    __Vfunc_aes_mul_gf2p4__1308__a = __Vfunc_aes_mul_gf2p2__1309__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1310__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1308__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1308__delta)));
    __Vfunc_aes_mul_gf2p2__1310__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1308__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1308__gamma)));
    __Vfunc_aes_mul_gf2p2__1310__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1310__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1310__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1310__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1310__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1310__d)));
    __Vfunc_aes_mul_gf2p2__1310__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1310__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1310__d)));
    __Vfunc_aes_mul_gf2p2__1310__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1310__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1310__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1310__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1310__b)));
    __Vfunc_aes_mul_gf2p2__1310__Vfuncout = __Vfunc_aes_mul_gf2p2__1310__f;
    __Vfunc_aes_mul_gf2p4__1308__b = __Vfunc_aes_mul_gf2p2__1310__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1311__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1308__delta));
    __Vfunc_aes_mul_gf2p2__1311__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1308__gamma));
    __Vfunc_aes_mul_gf2p2__1311__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1311__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1311__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1311__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1311__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1311__d)));
    __Vfunc_aes_mul_gf2p2__1311__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1311__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1311__d)));
    __Vfunc_aes_mul_gf2p2__1311__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1311__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1311__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1311__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1311__b)));
    __Vfunc_aes_mul_gf2p2__1311__Vfuncout = __Vfunc_aes_mul_gf2p2__1311__f;
    __Vfunc_aes_mul_gf2p4__1308__c = __Vfunc_aes_mul_gf2p2__1311__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1308__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1308__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1312__g 
                        = __Vfunc_aes_mul_gf2p4__1308__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1312__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1312__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1312__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1312__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1312__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1312__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1308__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1308__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1313__g 
                        = __Vfunc_aes_mul_gf2p4__1308__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1313__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1313__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1313__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1313__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1313__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1313__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1308__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1308__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1308__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1278__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1278__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8540267401579525975ull);
    __Vfunc_aes_mul_gf2p2__1279__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1278__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1279__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1278__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1279__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1279__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1279__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1279__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1279__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1279__d)));
    __Vfunc_aes_mul_gf2p2__1279__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1279__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1279__d)));
    __Vfunc_aes_mul_gf2p2__1279__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1279__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1279__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1279__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1279__b)));
    __Vfunc_aes_mul_gf2p2__1279__Vfuncout = __Vfunc_aes_mul_gf2p2__1279__f;
    __Vfunc_aes_mul_gf2p4__1278__a = __Vfunc_aes_mul_gf2p2__1279__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1280__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1278__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1278__delta)));
    __Vfunc_aes_mul_gf2p2__1280__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1278__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1278__gamma)));
    __Vfunc_aes_mul_gf2p2__1280__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1280__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1280__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1280__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1280__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1280__d)));
    __Vfunc_aes_mul_gf2p2__1280__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1280__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1280__d)));
    __Vfunc_aes_mul_gf2p2__1280__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1280__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1280__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1280__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1280__b)));
    __Vfunc_aes_mul_gf2p2__1280__Vfuncout = __Vfunc_aes_mul_gf2p2__1280__f;
    __Vfunc_aes_mul_gf2p4__1278__b = __Vfunc_aes_mul_gf2p2__1280__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1281__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1278__delta));
    __Vfunc_aes_mul_gf2p2__1281__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1278__gamma));
    __Vfunc_aes_mul_gf2p2__1281__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1281__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1281__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1281__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1281__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1281__d)));
    __Vfunc_aes_mul_gf2p2__1281__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1281__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1281__d)));
    __Vfunc_aes_mul_gf2p2__1281__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1281__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1281__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1281__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1281__b)));
    __Vfunc_aes_mul_gf2p2__1281__Vfuncout = __Vfunc_aes_mul_gf2p2__1281__f;
    __Vfunc_aes_mul_gf2p4__1278__c = __Vfunc_aes_mul_gf2p2__1281__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1278__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1278__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1282__g 
                        = __Vfunc_aes_mul_gf2p4__1278__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1282__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1282__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1282__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1282__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1282__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1282__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1278__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1278__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1283__g 
                        = __Vfunc_aes_mul_gf2p4__1278__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1283__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1283__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1283__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1283__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1283__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1283__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1278__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1278__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1278__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1284__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1284__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14421647757669510805ull);
    __Vfunc_aes_mul_gf2p2__1285__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1284__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1285__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1284__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1285__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1285__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1285__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1285__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1285__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1285__d)));
    __Vfunc_aes_mul_gf2p2__1285__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1285__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1285__d)));
    __Vfunc_aes_mul_gf2p2__1285__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1285__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1285__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1285__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1285__b)));
    __Vfunc_aes_mul_gf2p2__1285__Vfuncout = __Vfunc_aes_mul_gf2p2__1285__f;
    __Vfunc_aes_mul_gf2p4__1284__a = __Vfunc_aes_mul_gf2p2__1285__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1286__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1284__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1284__delta)));
    __Vfunc_aes_mul_gf2p2__1286__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1284__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1284__gamma)));
    __Vfunc_aes_mul_gf2p2__1286__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1286__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1286__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1286__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1286__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1286__d)));
    __Vfunc_aes_mul_gf2p2__1286__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1286__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1286__d)));
    __Vfunc_aes_mul_gf2p2__1286__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1286__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1286__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1286__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1286__b)));
    __Vfunc_aes_mul_gf2p2__1286__Vfuncout = __Vfunc_aes_mul_gf2p2__1286__f;
    __Vfunc_aes_mul_gf2p4__1284__b = __Vfunc_aes_mul_gf2p2__1286__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1287__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1284__delta));
    __Vfunc_aes_mul_gf2p2__1287__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1284__gamma));
    __Vfunc_aes_mul_gf2p2__1287__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1287__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1287__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1287__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1287__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1287__d)));
    __Vfunc_aes_mul_gf2p2__1287__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1287__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1287__d)));
    __Vfunc_aes_mul_gf2p2__1287__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1287__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1287__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1287__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1287__b)));
    __Vfunc_aes_mul_gf2p2__1287__Vfuncout = __Vfunc_aes_mul_gf2p2__1287__f;
    __Vfunc_aes_mul_gf2p4__1284__c = __Vfunc_aes_mul_gf2p2__1287__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1284__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1284__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1288__g 
                        = __Vfunc_aes_mul_gf2p4__1284__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1288__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1288__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1288__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1288__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1288__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1288__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1284__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1284__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1289__g 
                        = __Vfunc_aes_mul_gf2p4__1284__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1289__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1289__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1289__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1289__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1289__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1289__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1284__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1284__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1284__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1302__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1302__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 737868609599040730ull);
    __Vfunc_aes_mul_gf2p2__1303__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1302__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1303__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1302__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1303__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1303__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1303__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1303__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1303__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1303__d)));
    __Vfunc_aes_mul_gf2p2__1303__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1303__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1303__d)));
    __Vfunc_aes_mul_gf2p2__1303__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1303__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1303__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1303__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1303__b)));
    __Vfunc_aes_mul_gf2p2__1303__Vfuncout = __Vfunc_aes_mul_gf2p2__1303__f;
    __Vfunc_aes_mul_gf2p4__1302__a = __Vfunc_aes_mul_gf2p2__1303__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1304__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1302__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1302__delta)));
    __Vfunc_aes_mul_gf2p2__1304__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1302__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1302__gamma)));
    __Vfunc_aes_mul_gf2p2__1304__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1304__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1304__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1304__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1304__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1304__d)));
    __Vfunc_aes_mul_gf2p2__1304__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1304__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1304__d)));
    __Vfunc_aes_mul_gf2p2__1304__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1304__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1304__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1304__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1304__b)));
    __Vfunc_aes_mul_gf2p2__1304__Vfuncout = __Vfunc_aes_mul_gf2p2__1304__f;
    __Vfunc_aes_mul_gf2p4__1302__b = __Vfunc_aes_mul_gf2p2__1304__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1305__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1302__delta));
    __Vfunc_aes_mul_gf2p2__1305__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1302__gamma));
    __Vfunc_aes_mul_gf2p2__1305__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1305__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1305__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1305__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1305__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1305__d)));
    __Vfunc_aes_mul_gf2p2__1305__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1305__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1305__d)));
    __Vfunc_aes_mul_gf2p2__1305__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1305__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1305__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1305__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1305__b)));
    __Vfunc_aes_mul_gf2p2__1305__Vfuncout = __Vfunc_aes_mul_gf2p2__1305__f;
    __Vfunc_aes_mul_gf2p4__1302__c = __Vfunc_aes_mul_gf2p2__1305__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1302__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1302__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1306__g 
                        = __Vfunc_aes_mul_gf2p4__1302__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1306__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1306__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1306__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1306__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1306__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1306__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1302__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1302__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1307__g 
                        = __Vfunc_aes_mul_gf2p4__1302__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1307__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1307__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1307__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1307__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1307__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1307__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1302__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1302__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1302__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1314__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1314__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1314__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4336692787445501507ull);
    __Vfunc_aes_mul_gf2p2__1315__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1314__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1315__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1314__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1315__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1315__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1315__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1315__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1315__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1315__d)));
    __Vfunc_aes_mul_gf2p2__1315__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1315__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1315__d)));
    __Vfunc_aes_mul_gf2p2__1315__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1315__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1315__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1315__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1315__b)));
    __Vfunc_aes_mul_gf2p2__1315__Vfuncout = __Vfunc_aes_mul_gf2p2__1315__f;
    __Vfunc_aes_mul_gf2p4__1314__a = __Vfunc_aes_mul_gf2p2__1315__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1316__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1314__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1314__delta)));
    __Vfunc_aes_mul_gf2p2__1316__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1314__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1314__gamma)));
    __Vfunc_aes_mul_gf2p2__1316__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1316__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1316__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1316__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1316__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1316__d)));
    __Vfunc_aes_mul_gf2p2__1316__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1316__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1316__d)));
    __Vfunc_aes_mul_gf2p2__1316__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1316__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1316__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1316__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1316__b)));
    __Vfunc_aes_mul_gf2p2__1316__Vfuncout = __Vfunc_aes_mul_gf2p2__1316__f;
    __Vfunc_aes_mul_gf2p4__1314__b = __Vfunc_aes_mul_gf2p2__1316__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1317__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1314__delta));
    __Vfunc_aes_mul_gf2p2__1317__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1314__gamma));
    __Vfunc_aes_mul_gf2p2__1317__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1317__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1317__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1317__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1317__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1317__d)));
    __Vfunc_aes_mul_gf2p2__1317__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1317__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1317__d)));
    __Vfunc_aes_mul_gf2p2__1317__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1317__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1317__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1317__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1317__b)));
    __Vfunc_aes_mul_gf2p2__1317__Vfuncout = __Vfunc_aes_mul_gf2p2__1317__f;
    __Vfunc_aes_mul_gf2p4__1314__c = __Vfunc_aes_mul_gf2p2__1317__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1314__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1314__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1318__g 
                        = __Vfunc_aes_mul_gf2p4__1314__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1318__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1318__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1318__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1318__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1318__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1318__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1314__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1314__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1319__g 
                        = __Vfunc_aes_mul_gf2p4__1314__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1319__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1319__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1319__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1319__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1319__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1319__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1314__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1314__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1314__Vfuncout;
}

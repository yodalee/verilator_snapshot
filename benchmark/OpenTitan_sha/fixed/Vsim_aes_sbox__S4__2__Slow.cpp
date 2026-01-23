// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__233__Vfuncout;
    __Vfunc_aes_square_gf2p2__233__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__233__g;
    __Vfunc_aes_square_gf2p2__233__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__233__d;
    __Vfunc_aes_square_gf2p2__233__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__237__Vfuncout;
    __Vfunc_aes_square_gf2p2__237__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__237__g;
    __Vfunc_aes_square_gf2p2__237__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__237__d;
    __Vfunc_aes_square_gf2p2__237__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__240__Vfuncout;
    __Vfunc_aes_mul_gf2p4__240__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__240__gamma;
    __Vfunc_aes_mul_gf2p4__240__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__240__delta;
    __Vfunc_aes_mul_gf2p4__240__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__240__a;
    __Vfunc_aes_mul_gf2p4__240__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__240__b;
    __Vfunc_aes_mul_gf2p4__240__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__240__c;
    __Vfunc_aes_mul_gf2p4__240__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__241__Vfuncout;
    __Vfunc_aes_mul_gf2p2__241__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__241__g;
    __Vfunc_aes_mul_gf2p2__241__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__241__d;
    __Vfunc_aes_mul_gf2p2__241__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__241__f;
    __Vfunc_aes_mul_gf2p2__241__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__241__a;
    __Vfunc_aes_mul_gf2p2__241__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__241__b;
    __Vfunc_aes_mul_gf2p2__241__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__241__c;
    __Vfunc_aes_mul_gf2p2__241__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__242__Vfuncout;
    __Vfunc_aes_mul_gf2p2__242__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__242__g;
    __Vfunc_aes_mul_gf2p2__242__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__242__d;
    __Vfunc_aes_mul_gf2p2__242__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__242__f;
    __Vfunc_aes_mul_gf2p2__242__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__242__a;
    __Vfunc_aes_mul_gf2p2__242__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__242__b;
    __Vfunc_aes_mul_gf2p2__242__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__242__c;
    __Vfunc_aes_mul_gf2p2__242__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__243__Vfuncout;
    __Vfunc_aes_mul_gf2p2__243__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__243__g;
    __Vfunc_aes_mul_gf2p2__243__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__243__d;
    __Vfunc_aes_mul_gf2p2__243__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__243__f;
    __Vfunc_aes_mul_gf2p2__243__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__243__a;
    __Vfunc_aes_mul_gf2p2__243__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__243__b;
    __Vfunc_aes_mul_gf2p2__243__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__243__c;
    __Vfunc_aes_mul_gf2p2__243__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__246__Vfuncout;
    __Vfunc_aes_mul_gf2p4__246__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__246__gamma;
    __Vfunc_aes_mul_gf2p4__246__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__246__delta;
    __Vfunc_aes_mul_gf2p4__246__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__246__a;
    __Vfunc_aes_mul_gf2p4__246__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__246__b;
    __Vfunc_aes_mul_gf2p4__246__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__246__c;
    __Vfunc_aes_mul_gf2p4__246__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__247__Vfuncout;
    __Vfunc_aes_mul_gf2p2__247__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__247__g;
    __Vfunc_aes_mul_gf2p2__247__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__247__d;
    __Vfunc_aes_mul_gf2p2__247__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__247__f;
    __Vfunc_aes_mul_gf2p2__247__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__247__a;
    __Vfunc_aes_mul_gf2p2__247__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__247__b;
    __Vfunc_aes_mul_gf2p2__247__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__247__c;
    __Vfunc_aes_mul_gf2p2__247__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__248__Vfuncout;
    __Vfunc_aes_mul_gf2p2__248__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__248__g;
    __Vfunc_aes_mul_gf2p2__248__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__248__d;
    __Vfunc_aes_mul_gf2p2__248__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__248__f;
    __Vfunc_aes_mul_gf2p2__248__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__248__a;
    __Vfunc_aes_mul_gf2p2__248__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__248__b;
    __Vfunc_aes_mul_gf2p2__248__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__248__c;
    __Vfunc_aes_mul_gf2p2__248__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__249__Vfuncout;
    __Vfunc_aes_mul_gf2p2__249__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__249__g;
    __Vfunc_aes_mul_gf2p2__249__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__249__d;
    __Vfunc_aes_mul_gf2p2__249__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__249__f;
    __Vfunc_aes_mul_gf2p2__249__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__249__a;
    __Vfunc_aes_mul_gf2p2__249__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__249__b;
    __Vfunc_aes_mul_gf2p2__249__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__249__c;
    __Vfunc_aes_mul_gf2p2__249__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__252__Vfuncout;
    __Vfunc_aes_mul_gf2p4__252__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__252__gamma;
    __Vfunc_aes_mul_gf2p4__252__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__252__delta;
    __Vfunc_aes_mul_gf2p4__252__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__252__a;
    __Vfunc_aes_mul_gf2p4__252__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__252__b;
    __Vfunc_aes_mul_gf2p4__252__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__252__c;
    __Vfunc_aes_mul_gf2p4__252__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__253__Vfuncout;
    __Vfunc_aes_mul_gf2p2__253__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__253__g;
    __Vfunc_aes_mul_gf2p2__253__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__253__d;
    __Vfunc_aes_mul_gf2p2__253__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__253__f;
    __Vfunc_aes_mul_gf2p2__253__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__253__a;
    __Vfunc_aes_mul_gf2p2__253__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__253__b;
    __Vfunc_aes_mul_gf2p2__253__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__253__c;
    __Vfunc_aes_mul_gf2p2__253__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__254__Vfuncout;
    __Vfunc_aes_mul_gf2p2__254__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__254__g;
    __Vfunc_aes_mul_gf2p2__254__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__254__d;
    __Vfunc_aes_mul_gf2p2__254__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__254__f;
    __Vfunc_aes_mul_gf2p2__254__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__254__a;
    __Vfunc_aes_mul_gf2p2__254__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__254__b;
    __Vfunc_aes_mul_gf2p2__254__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__254__c;
    __Vfunc_aes_mul_gf2p2__254__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__255__Vfuncout;
    __Vfunc_aes_mul_gf2p2__255__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__255__g;
    __Vfunc_aes_mul_gf2p2__255__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__255__d;
    __Vfunc_aes_mul_gf2p2__255__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__255__f;
    __Vfunc_aes_mul_gf2p2__255__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__255__a;
    __Vfunc_aes_mul_gf2p2__255__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__255__b;
    __Vfunc_aes_mul_gf2p2__255__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__255__c;
    __Vfunc_aes_mul_gf2p2__255__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__258__Vfuncout;
    __Vfunc_aes_mul_gf2p4__258__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__258__gamma;
    __Vfunc_aes_mul_gf2p4__258__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__258__delta;
    __Vfunc_aes_mul_gf2p4__258__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__258__a;
    __Vfunc_aes_mul_gf2p4__258__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__258__b;
    __Vfunc_aes_mul_gf2p4__258__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__258__c;
    __Vfunc_aes_mul_gf2p4__258__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__259__Vfuncout;
    __Vfunc_aes_mul_gf2p2__259__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__259__g;
    __Vfunc_aes_mul_gf2p2__259__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__259__d;
    __Vfunc_aes_mul_gf2p2__259__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__259__f;
    __Vfunc_aes_mul_gf2p2__259__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__259__a;
    __Vfunc_aes_mul_gf2p2__259__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__259__b;
    __Vfunc_aes_mul_gf2p2__259__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__259__c;
    __Vfunc_aes_mul_gf2p2__259__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__260__Vfuncout;
    __Vfunc_aes_mul_gf2p2__260__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__260__g;
    __Vfunc_aes_mul_gf2p2__260__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__260__d;
    __Vfunc_aes_mul_gf2p2__260__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__260__f;
    __Vfunc_aes_mul_gf2p2__260__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__260__a;
    __Vfunc_aes_mul_gf2p2__260__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__260__b;
    __Vfunc_aes_mul_gf2p2__260__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__260__c;
    __Vfunc_aes_mul_gf2p2__260__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__261__Vfuncout;
    __Vfunc_aes_mul_gf2p2__261__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__261__g;
    __Vfunc_aes_mul_gf2p2__261__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__261__d;
    __Vfunc_aes_mul_gf2p2__261__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__261__f;
    __Vfunc_aes_mul_gf2p2__261__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__261__a;
    __Vfunc_aes_mul_gf2p2__261__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__261__b;
    __Vfunc_aes_mul_gf2p2__261__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__261__c;
    __Vfunc_aes_mul_gf2p2__261__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__264__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__264__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__264__g;
    __Vfunc_aes_scale_omega2_gf2p2__264__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__264__d;
    __Vfunc_aes_scale_omega2_gf2p2__264__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__265__Vfuncout;
    __Vfunc_aes_square_gf2p2__265__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__265__g;
    __Vfunc_aes_square_gf2p2__265__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__265__d;
    __Vfunc_aes_square_gf2p2__265__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__266__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__266__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__266__g;
    __Vfunc_aes_scale_omega2_gf2p2__266__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__266__d;
    __Vfunc_aes_scale_omega2_gf2p2__266__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__267__Vfuncout;
    __Vfunc_aes_square_gf2p2__267__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__267__g;
    __Vfunc_aes_square_gf2p2__267__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__267__d;
    __Vfunc_aes_square_gf2p2__267__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__268__Vfuncout;
    __Vfunc_aes_square_gf2p2__268__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__268__g;
    __Vfunc_aes_square_gf2p2__268__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__268__d;
    __Vfunc_aes_square_gf2p2__268__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__269__Vfuncout;
    __Vfunc_aes_square_gf2p2__269__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__269__g;
    __Vfunc_aes_square_gf2p2__269__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__269__d;
    __Vfunc_aes_square_gf2p2__269__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__270__Vfuncout;
    __Vfunc_aes_mul_gf2p2__270__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__270__g;
    __Vfunc_aes_mul_gf2p2__270__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__270__d;
    __Vfunc_aes_mul_gf2p2__270__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__270__f;
    __Vfunc_aes_mul_gf2p2__270__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__270__a;
    __Vfunc_aes_mul_gf2p2__270__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__270__b;
    __Vfunc_aes_mul_gf2p2__270__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__270__c;
    __Vfunc_aes_mul_gf2p2__270__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__271__Vfuncout;
    __Vfunc_aes_mul_gf2p2__271__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__271__g;
    __Vfunc_aes_mul_gf2p2__271__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__271__d;
    __Vfunc_aes_mul_gf2p2__271__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__271__f;
    __Vfunc_aes_mul_gf2p2__271__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__271__a;
    __Vfunc_aes_mul_gf2p2__271__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__271__b;
    __Vfunc_aes_mul_gf2p2__271__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__271__c;
    __Vfunc_aes_mul_gf2p2__271__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__272__Vfuncout;
    __Vfunc_aes_mul_gf2p2__272__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__272__g;
    __Vfunc_aes_mul_gf2p2__272__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__272__d;
    __Vfunc_aes_mul_gf2p2__272__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__272__f;
    __Vfunc_aes_mul_gf2p2__272__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__272__a;
    __Vfunc_aes_mul_gf2p2__272__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__272__b;
    __Vfunc_aes_mul_gf2p2__272__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__272__c;
    __Vfunc_aes_mul_gf2p2__272__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__273__Vfuncout;
    __Vfunc_aes_mul_gf2p2__273__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__273__g;
    __Vfunc_aes_mul_gf2p2__273__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__273__d;
    __Vfunc_aes_mul_gf2p2__273__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__273__f;
    __Vfunc_aes_mul_gf2p2__273__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__273__a;
    __Vfunc_aes_mul_gf2p2__273__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__273__b;
    __Vfunc_aes_mul_gf2p2__273__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__273__c;
    __Vfunc_aes_mul_gf2p2__273__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__274__Vfuncout;
    __Vfunc_aes_mul_gf2p2__274__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__274__g;
    __Vfunc_aes_mul_gf2p2__274__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__274__d;
    __Vfunc_aes_mul_gf2p2__274__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__274__f;
    __Vfunc_aes_mul_gf2p2__274__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__274__a;
    __Vfunc_aes_mul_gf2p2__274__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__274__b;
    __Vfunc_aes_mul_gf2p2__274__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__274__c;
    __Vfunc_aes_mul_gf2p2__274__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__275__Vfuncout;
    __Vfunc_aes_mul_gf2p2__275__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__275__g;
    __Vfunc_aes_mul_gf2p2__275__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__275__d;
    __Vfunc_aes_mul_gf2p2__275__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__275__f;
    __Vfunc_aes_mul_gf2p2__275__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__275__a;
    __Vfunc_aes_mul_gf2p2__275__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__275__b;
    __Vfunc_aes_mul_gf2p2__275__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__275__c;
    __Vfunc_aes_mul_gf2p2__275__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__276__Vfuncout;
    __Vfunc_aes_mul_gf2p2__276__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__276__g;
    __Vfunc_aes_mul_gf2p2__276__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__276__d;
    __Vfunc_aes_mul_gf2p2__276__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__276__f;
    __Vfunc_aes_mul_gf2p2__276__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__276__a;
    __Vfunc_aes_mul_gf2p2__276__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__276__b;
    __Vfunc_aes_mul_gf2p2__276__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__276__c;
    __Vfunc_aes_mul_gf2p2__276__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__277__Vfuncout;
    __Vfunc_aes_mul_gf2p2__277__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__277__g;
    __Vfunc_aes_mul_gf2p2__277__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__277__d;
    __Vfunc_aes_mul_gf2p2__277__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__277__f;
    __Vfunc_aes_mul_gf2p2__277__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__277__a;
    __Vfunc_aes_mul_gf2p2__277__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__277__b;
    __Vfunc_aes_mul_gf2p2__277__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__277__c;
    __Vfunc_aes_mul_gf2p2__277__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__278__Vfuncout;
    __Vfunc_aes_mul_gf2p2__278__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__278__g;
    __Vfunc_aes_mul_gf2p2__278__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__278__d;
    __Vfunc_aes_mul_gf2p2__278__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__278__f;
    __Vfunc_aes_mul_gf2p2__278__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__278__a;
    __Vfunc_aes_mul_gf2p2__278__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__278__b;
    __Vfunc_aes_mul_gf2p2__278__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__278__c;
    __Vfunc_aes_mul_gf2p2__278__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__279__Vfuncout;
    __Vfunc_aes_mul_gf2p2__279__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__279__g;
    __Vfunc_aes_mul_gf2p2__279__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__279__d;
    __Vfunc_aes_mul_gf2p2__279__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__279__f;
    __Vfunc_aes_mul_gf2p2__279__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__279__a;
    __Vfunc_aes_mul_gf2p2__279__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__279__b;
    __Vfunc_aes_mul_gf2p2__279__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__279__c;
    __Vfunc_aes_mul_gf2p2__279__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__280__Vfuncout;
    __Vfunc_aes_mul_gf2p2__280__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__280__g;
    __Vfunc_aes_mul_gf2p2__280__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__280__d;
    __Vfunc_aes_mul_gf2p2__280__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__280__f;
    __Vfunc_aes_mul_gf2p2__280__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__280__a;
    __Vfunc_aes_mul_gf2p2__280__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__280__b;
    __Vfunc_aes_mul_gf2p2__280__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__280__c;
    __Vfunc_aes_mul_gf2p2__280__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__281__Vfuncout;
    __Vfunc_aes_mul_gf2p2__281__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__281__g;
    __Vfunc_aes_mul_gf2p2__281__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__281__d;
    __Vfunc_aes_mul_gf2p2__281__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__281__f;
    __Vfunc_aes_mul_gf2p2__281__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__281__a;
    __Vfunc_aes_mul_gf2p2__281__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__281__b;
    __Vfunc_aes_mul_gf2p2__281__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__281__c;
    __Vfunc_aes_mul_gf2p2__281__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__282__Vfuncout;
    __Vfunc_aes_mul_gf2p4__282__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__282__gamma;
    __Vfunc_aes_mul_gf2p4__282__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__282__delta;
    __Vfunc_aes_mul_gf2p4__282__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__282__a;
    __Vfunc_aes_mul_gf2p4__282__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__282__b;
    __Vfunc_aes_mul_gf2p4__282__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__282__c;
    __Vfunc_aes_mul_gf2p4__282__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__283__Vfuncout;
    __Vfunc_aes_mul_gf2p2__283__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__283__g;
    __Vfunc_aes_mul_gf2p2__283__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__283__d;
    __Vfunc_aes_mul_gf2p2__283__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__283__f;
    __Vfunc_aes_mul_gf2p2__283__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__283__a;
    __Vfunc_aes_mul_gf2p2__283__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__283__b;
    __Vfunc_aes_mul_gf2p2__283__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__283__c;
    __Vfunc_aes_mul_gf2p2__283__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__284__Vfuncout;
    __Vfunc_aes_mul_gf2p2__284__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__284__g;
    __Vfunc_aes_mul_gf2p2__284__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__284__d;
    __Vfunc_aes_mul_gf2p2__284__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__284__f;
    __Vfunc_aes_mul_gf2p2__284__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__284__a;
    __Vfunc_aes_mul_gf2p2__284__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__284__b;
    __Vfunc_aes_mul_gf2p2__284__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__284__c;
    __Vfunc_aes_mul_gf2p2__284__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__285__Vfuncout;
    __Vfunc_aes_mul_gf2p2__285__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__285__g;
    __Vfunc_aes_mul_gf2p2__285__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__285__d;
    __Vfunc_aes_mul_gf2p2__285__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__285__f;
    __Vfunc_aes_mul_gf2p2__285__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__285__a;
    __Vfunc_aes_mul_gf2p2__285__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__285__b;
    __Vfunc_aes_mul_gf2p2__285__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__285__c;
    __Vfunc_aes_mul_gf2p2__285__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__288__Vfuncout;
    __Vfunc_aes_mul_gf2p4__288__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__288__gamma;
    __Vfunc_aes_mul_gf2p4__288__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__288__delta;
    __Vfunc_aes_mul_gf2p4__288__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__288__a;
    __Vfunc_aes_mul_gf2p4__288__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__288__b;
    __Vfunc_aes_mul_gf2p4__288__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__288__c;
    __Vfunc_aes_mul_gf2p4__288__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__289__Vfuncout;
    __Vfunc_aes_mul_gf2p2__289__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__289__g;
    __Vfunc_aes_mul_gf2p2__289__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__289__d;
    __Vfunc_aes_mul_gf2p2__289__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__289__f;
    __Vfunc_aes_mul_gf2p2__289__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__289__a;
    __Vfunc_aes_mul_gf2p2__289__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__289__b;
    __Vfunc_aes_mul_gf2p2__289__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__289__c;
    __Vfunc_aes_mul_gf2p2__289__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__290__Vfuncout;
    __Vfunc_aes_mul_gf2p2__290__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__290__g;
    __Vfunc_aes_mul_gf2p2__290__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__290__d;
    __Vfunc_aes_mul_gf2p2__290__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__290__f;
    __Vfunc_aes_mul_gf2p2__290__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__290__a;
    __Vfunc_aes_mul_gf2p2__290__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__290__b;
    __Vfunc_aes_mul_gf2p2__290__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__290__c;
    __Vfunc_aes_mul_gf2p2__290__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__291__Vfuncout;
    __Vfunc_aes_mul_gf2p2__291__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__291__g;
    __Vfunc_aes_mul_gf2p2__291__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__291__d;
    __Vfunc_aes_mul_gf2p2__291__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__291__f;
    __Vfunc_aes_mul_gf2p2__291__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__291__a;
    __Vfunc_aes_mul_gf2p2__291__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__291__b;
    __Vfunc_aes_mul_gf2p2__291__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__291__c;
    __Vfunc_aes_mul_gf2p2__291__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__294__Vfuncout;
    __Vfunc_aes_mul_gf2p4__294__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__294__gamma;
    __Vfunc_aes_mul_gf2p4__294__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__294__delta;
    __Vfunc_aes_mul_gf2p4__294__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__294__a;
    __Vfunc_aes_mul_gf2p4__294__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__294__b;
    __Vfunc_aes_mul_gf2p4__294__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__294__c;
    __Vfunc_aes_mul_gf2p4__294__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__295__Vfuncout;
    __Vfunc_aes_mul_gf2p2__295__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__295__g;
    __Vfunc_aes_mul_gf2p2__295__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__295__d;
    __Vfunc_aes_mul_gf2p2__295__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__295__f;
    __Vfunc_aes_mul_gf2p2__295__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__295__a;
    __Vfunc_aes_mul_gf2p2__295__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__295__b;
    __Vfunc_aes_mul_gf2p2__295__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__295__c;
    __Vfunc_aes_mul_gf2p2__295__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__296__Vfuncout;
    __Vfunc_aes_mul_gf2p2__296__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__296__g;
    __Vfunc_aes_mul_gf2p2__296__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__296__d;
    __Vfunc_aes_mul_gf2p2__296__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__296__f;
    __Vfunc_aes_mul_gf2p2__296__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__296__a;
    __Vfunc_aes_mul_gf2p2__296__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__296__b;
    __Vfunc_aes_mul_gf2p2__296__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__296__c;
    __Vfunc_aes_mul_gf2p2__296__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__297__Vfuncout;
    __Vfunc_aes_mul_gf2p2__297__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__297__g;
    __Vfunc_aes_mul_gf2p2__297__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__297__d;
    __Vfunc_aes_mul_gf2p2__297__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__297__f;
    __Vfunc_aes_mul_gf2p2__297__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__297__a;
    __Vfunc_aes_mul_gf2p2__297__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__297__b;
    __Vfunc_aes_mul_gf2p2__297__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__297__c;
    __Vfunc_aes_mul_gf2p2__297__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__300__Vfuncout;
    __Vfunc_aes_mul_gf2p4__300__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__300__gamma;
    __Vfunc_aes_mul_gf2p4__300__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__300__delta;
    __Vfunc_aes_mul_gf2p4__300__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__300__a;
    __Vfunc_aes_mul_gf2p4__300__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__300__b;
    __Vfunc_aes_mul_gf2p4__300__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__300__c;
    __Vfunc_aes_mul_gf2p4__300__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__301__Vfuncout;
    __Vfunc_aes_mul_gf2p2__301__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__301__g;
    __Vfunc_aes_mul_gf2p2__301__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__301__d;
    __Vfunc_aes_mul_gf2p2__301__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__301__f;
    __Vfunc_aes_mul_gf2p2__301__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__301__a;
    __Vfunc_aes_mul_gf2p2__301__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__301__b;
    __Vfunc_aes_mul_gf2p2__301__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__301__c;
    __Vfunc_aes_mul_gf2p2__301__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__302__Vfuncout;
    __Vfunc_aes_mul_gf2p2__302__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__302__g;
    __Vfunc_aes_mul_gf2p2__302__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__302__d;
    __Vfunc_aes_mul_gf2p2__302__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__302__f;
    __Vfunc_aes_mul_gf2p2__302__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__302__a;
    __Vfunc_aes_mul_gf2p2__302__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__302__b;
    __Vfunc_aes_mul_gf2p2__302__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__302__c;
    __Vfunc_aes_mul_gf2p2__302__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__303__Vfuncout;
    __Vfunc_aes_mul_gf2p2__303__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__303__g;
    __Vfunc_aes_mul_gf2p2__303__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__303__d;
    __Vfunc_aes_mul_gf2p2__303__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__303__f;
    __Vfunc_aes_mul_gf2p2__303__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__303__a;
    __Vfunc_aes_mul_gf2p2__303__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__303__b;
    __Vfunc_aes_mul_gf2p2__303__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__303__c;
    __Vfunc_aes_mul_gf2p2__303__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__306__Vfuncout;
    __Vfunc_aes_mul_gf2p4__306__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__306__gamma;
    __Vfunc_aes_mul_gf2p4__306__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__306__delta;
    __Vfunc_aes_mul_gf2p4__306__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__306__a;
    __Vfunc_aes_mul_gf2p4__306__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__306__b;
    __Vfunc_aes_mul_gf2p4__306__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__306__c;
    __Vfunc_aes_mul_gf2p4__306__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__307__Vfuncout;
    __Vfunc_aes_mul_gf2p2__307__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__307__g;
    __Vfunc_aes_mul_gf2p2__307__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__307__d;
    __Vfunc_aes_mul_gf2p2__307__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__307__f;
    __Vfunc_aes_mul_gf2p2__307__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__307__a;
    __Vfunc_aes_mul_gf2p2__307__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__307__b;
    __Vfunc_aes_mul_gf2p2__307__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__307__c;
    __Vfunc_aes_mul_gf2p2__307__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__308__Vfuncout;
    __Vfunc_aes_mul_gf2p2__308__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__308__g;
    __Vfunc_aes_mul_gf2p2__308__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__308__d;
    __Vfunc_aes_mul_gf2p2__308__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__308__f;
    __Vfunc_aes_mul_gf2p2__308__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__308__a;
    __Vfunc_aes_mul_gf2p2__308__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__308__b;
    __Vfunc_aes_mul_gf2p2__308__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__308__c;
    __Vfunc_aes_mul_gf2p2__308__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__309__Vfuncout;
    __Vfunc_aes_mul_gf2p2__309__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__309__g;
    __Vfunc_aes_mul_gf2p2__309__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__309__d;
    __Vfunc_aes_mul_gf2p2__309__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__309__f;
    __Vfunc_aes_mul_gf2p2__309__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__309__a;
    __Vfunc_aes_mul_gf2p2__309__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__309__b;
    __Vfunc_aes_mul_gf2p2__309__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__309__c;
    __Vfunc_aes_mul_gf2p2__309__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__312__Vfuncout;
    __Vfunc_aes_mul_gf2p4__312__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__312__gamma;
    __Vfunc_aes_mul_gf2p4__312__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__312__delta;
    __Vfunc_aes_mul_gf2p4__312__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__312__a;
    __Vfunc_aes_mul_gf2p4__312__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__312__b;
    __Vfunc_aes_mul_gf2p4__312__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__312__c;
    __Vfunc_aes_mul_gf2p4__312__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__313__Vfuncout;
    __Vfunc_aes_mul_gf2p2__313__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__313__g;
    __Vfunc_aes_mul_gf2p2__313__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__313__d;
    __Vfunc_aes_mul_gf2p2__313__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__313__f;
    __Vfunc_aes_mul_gf2p2__313__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__313__a;
    __Vfunc_aes_mul_gf2p2__313__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__313__b;
    __Vfunc_aes_mul_gf2p2__313__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__313__c;
    __Vfunc_aes_mul_gf2p2__313__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__314__Vfuncout;
    __Vfunc_aes_mul_gf2p2__314__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__314__g;
    __Vfunc_aes_mul_gf2p2__314__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__314__d;
    __Vfunc_aes_mul_gf2p2__314__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__314__f;
    __Vfunc_aes_mul_gf2p2__314__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__314__a;
    __Vfunc_aes_mul_gf2p2__314__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__314__b;
    __Vfunc_aes_mul_gf2p2__314__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__314__c;
    __Vfunc_aes_mul_gf2p2__314__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__315__Vfuncout;
    __Vfunc_aes_mul_gf2p2__315__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__315__g;
    __Vfunc_aes_mul_gf2p2__315__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__315__d;
    __Vfunc_aes_mul_gf2p2__315__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__315__f;
    __Vfunc_aes_mul_gf2p2__315__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__315__a;
    __Vfunc_aes_mul_gf2p2__315__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__315__b;
    __Vfunc_aes_mul_gf2p2__315__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__315__c;
    __Vfunc_aes_mul_gf2p2__315__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__318__Vfuncout;
    __Vfunc_aes_mul_gf2p4__318__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__318__gamma;
    __Vfunc_aes_mul_gf2p4__318__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__318__delta;
    __Vfunc_aes_mul_gf2p4__318__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__318__a;
    __Vfunc_aes_mul_gf2p4__318__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__318__b;
    __Vfunc_aes_mul_gf2p4__318__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__318__c;
    __Vfunc_aes_mul_gf2p4__318__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__Vfuncout;
    __Vfunc_aes_mul_gf2p2__319__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__g;
    __Vfunc_aes_mul_gf2p2__319__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__d;
    __Vfunc_aes_mul_gf2p2__319__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__f;
    __Vfunc_aes_mul_gf2p2__319__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__319__a;
    __Vfunc_aes_mul_gf2p2__319__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__319__b;
    __Vfunc_aes_mul_gf2p2__319__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__319__c;
    __Vfunc_aes_mul_gf2p2__319__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__Vfuncout;
    __Vfunc_aes_mul_gf2p2__320__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__g;
    __Vfunc_aes_mul_gf2p2__320__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__d;
    __Vfunc_aes_mul_gf2p2__320__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__f;
    __Vfunc_aes_mul_gf2p2__320__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__320__a;
    __Vfunc_aes_mul_gf2p2__320__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__320__b;
    __Vfunc_aes_mul_gf2p2__320__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__320__c;
    __Vfunc_aes_mul_gf2p2__320__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__Vfuncout;
    __Vfunc_aes_mul_gf2p2__321__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__g;
    __Vfunc_aes_mul_gf2p2__321__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__d;
    __Vfunc_aes_mul_gf2p2__321__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__f;
    __Vfunc_aes_mul_gf2p2__321__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__321__a;
    __Vfunc_aes_mul_gf2p2__321__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__321__b;
    __Vfunc_aes_mul_gf2p2__321__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__321__c;
    __Vfunc_aes_mul_gf2p2__321__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__324__Vfuncout;
    __Vfunc_aes_mul_gf2p4__324__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__324__gamma;
    __Vfunc_aes_mul_gf2p4__324__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__324__delta;
    __Vfunc_aes_mul_gf2p4__324__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__324__a;
    __Vfunc_aes_mul_gf2p4__324__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__324__b;
    __Vfunc_aes_mul_gf2p4__324__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__324__c;
    __Vfunc_aes_mul_gf2p4__324__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__325__Vfuncout;
    __Vfunc_aes_mul_gf2p2__325__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__325__g;
    __Vfunc_aes_mul_gf2p2__325__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__325__d;
    __Vfunc_aes_mul_gf2p2__325__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__325__f;
    __Vfunc_aes_mul_gf2p2__325__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__325__a;
    __Vfunc_aes_mul_gf2p2__325__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__325__b;
    __Vfunc_aes_mul_gf2p2__325__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__325__c;
    __Vfunc_aes_mul_gf2p2__325__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__326__Vfuncout;
    __Vfunc_aes_mul_gf2p2__326__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__326__g;
    __Vfunc_aes_mul_gf2p2__326__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__326__d;
    __Vfunc_aes_mul_gf2p2__326__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__326__f;
    __Vfunc_aes_mul_gf2p2__326__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__326__a;
    __Vfunc_aes_mul_gf2p2__326__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__326__b;
    __Vfunc_aes_mul_gf2p2__326__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__326__c;
    __Vfunc_aes_mul_gf2p2__326__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__327__Vfuncout;
    __Vfunc_aes_mul_gf2p2__327__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__327__g;
    __Vfunc_aes_mul_gf2p2__327__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__327__d;
    __Vfunc_aes_mul_gf2p2__327__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__327__f;
    __Vfunc_aes_mul_gf2p2__327__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__327__a;
    __Vfunc_aes_mul_gf2p2__327__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__327__b;
    __Vfunc_aes_mul_gf2p2__327__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__327__c;
    __Vfunc_aes_mul_gf2p2__327__c = 0;
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
    __Vfunc_aes_mul_gf2p2__274__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__251__03a224__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__274__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__274__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__274__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__274__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__274__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__274__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__274__d)));
    __Vfunc_aes_mul_gf2p2__274__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__274__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__274__d)));
    __Vfunc_aes_mul_gf2p2__274__f = ((((IData)(__Vfunc_aes_mul_gf2p2__274__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__274__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__274__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__274__b)));
    __Vfunc_aes_mul_gf2p2__274__Vfuncout = __Vfunc_aes_mul_gf2p2__274__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__274__Vfuncout;
    __Vfunc_aes_mul_gf2p2__275__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__251__03a224__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__275__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__275__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__275__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__275__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__275__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__275__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__275__d)));
    __Vfunc_aes_mul_gf2p2__275__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__275__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__275__d)));
    __Vfunc_aes_mul_gf2p2__275__f = ((((IData)(__Vfunc_aes_mul_gf2p2__275__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__275__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__275__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__275__b)));
    __Vfunc_aes_mul_gf2p2__275__Vfuncout = __Vfunc_aes_mul_gf2p2__275__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__275__Vfuncout;
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
                vlSelfRef.__Vfunc_aes_mvm__220__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__220__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__220__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__220__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__220__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__220__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__220__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__220__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__220__vec_b 
                    = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [0U][2U]);
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__220__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__220__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__220__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__220__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__220__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_b 
                        = (0x000000ffU & (0x63U ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][2U]));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__221__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__221__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__221__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__221__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__221__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [0U][2U]);
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__222__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__222__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__222__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__222__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__222__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__223__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__223__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__223__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__223__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__223__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__223__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__223__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__223__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__223__vec_b 
                    = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [1U][2U]);
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__223__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__223__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__223__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__223__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__223__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][2U]);
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__224__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__224__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__224__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__224__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__224__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][2U]);
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__225__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__225__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__225__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__225__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__225__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__272__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__272__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__272__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__272__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__272__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__272__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__272__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__272__d)));
    __Vfunc_aes_mul_gf2p2__272__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__272__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__272__d)));
    __Vfunc_aes_mul_gf2p2__272__f = ((((IData)(__Vfunc_aes_mul_gf2p2__272__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__272__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__272__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__272__b)));
    __Vfunc_aes_mul_gf2p2__272__Vfuncout = __Vfunc_aes_mul_gf2p2__272__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__272__Vfuncout;
    __Vfunc_aes_mul_gf2p2__273__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__273__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__273__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__273__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__273__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__273__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__273__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__273__d)));
    __Vfunc_aes_mul_gf2p2__273__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__273__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__273__d)));
    __Vfunc_aes_mul_gf2p2__273__f = ((((IData)(__Vfunc_aes_mul_gf2p2__273__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__273__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__273__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__273__b)));
    __Vfunc_aes_mul_gf2p2__273__Vfuncout = __Vfunc_aes_mul_gf2p2__273__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__273__Vfuncout;
    __Vfunc_aes_mul_gf2p4__252__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__252__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__252__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13026377195111690517ull);
    __Vfunc_aes_mul_gf2p2__253__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__252__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__253__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__252__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__253__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__253__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__253__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__253__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__253__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__253__d)));
    __Vfunc_aes_mul_gf2p2__253__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__253__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__253__d)));
    __Vfunc_aes_mul_gf2p2__253__f = ((((IData)(__Vfunc_aes_mul_gf2p2__253__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__253__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__253__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__253__b)));
    __Vfunc_aes_mul_gf2p2__253__Vfuncout = __Vfunc_aes_mul_gf2p2__253__f;
    __Vfunc_aes_mul_gf2p4__252__a = __Vfunc_aes_mul_gf2p2__253__Vfuncout;
    __Vfunc_aes_mul_gf2p2__254__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__252__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__252__delta)));
    __Vfunc_aes_mul_gf2p2__254__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__252__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__252__gamma)));
    __Vfunc_aes_mul_gf2p2__254__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__254__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__254__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__254__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__254__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__254__d)));
    __Vfunc_aes_mul_gf2p2__254__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__254__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__254__d)));
    __Vfunc_aes_mul_gf2p2__254__f = ((((IData)(__Vfunc_aes_mul_gf2p2__254__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__254__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__254__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__254__b)));
    __Vfunc_aes_mul_gf2p2__254__Vfuncout = __Vfunc_aes_mul_gf2p2__254__f;
    __Vfunc_aes_mul_gf2p4__252__b = __Vfunc_aes_mul_gf2p2__254__Vfuncout;
    __Vfunc_aes_mul_gf2p2__255__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__252__delta));
    __Vfunc_aes_mul_gf2p2__255__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__252__gamma));
    __Vfunc_aes_mul_gf2p2__255__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__255__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__255__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__255__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__255__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__255__d)));
    __Vfunc_aes_mul_gf2p2__255__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__255__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__255__d)));
    __Vfunc_aes_mul_gf2p2__255__f = ((((IData)(__Vfunc_aes_mul_gf2p2__255__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__255__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__255__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__255__b)));
    __Vfunc_aes_mul_gf2p2__255__Vfuncout = __Vfunc_aes_mul_gf2p2__255__f;
    __Vfunc_aes_mul_gf2p4__252__c = __Vfunc_aes_mul_gf2p2__255__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__252__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__252__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__256__g 
                        = __Vfunc_aes_mul_gf2p4__252__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__256__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__256__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__256__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__256__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__256__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__256__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__252__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__252__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__257__g 
                        = __Vfunc_aes_mul_gf2p4__252__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__257__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__257__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__257__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__257__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__257__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__257__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__252__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__252__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__252__Vfuncout;
    __Vfunc_aes_mul_gf2p4__258__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__258__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__258__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12563742728773560678ull);
    __Vfunc_aes_mul_gf2p2__259__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__258__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__259__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__258__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__259__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__259__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__259__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__259__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__259__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__259__d)));
    __Vfunc_aes_mul_gf2p2__259__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__259__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__259__d)));
    __Vfunc_aes_mul_gf2p2__259__f = ((((IData)(__Vfunc_aes_mul_gf2p2__259__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__259__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__259__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__259__b)));
    __Vfunc_aes_mul_gf2p2__259__Vfuncout = __Vfunc_aes_mul_gf2p2__259__f;
    __Vfunc_aes_mul_gf2p4__258__a = __Vfunc_aes_mul_gf2p2__259__Vfuncout;
    __Vfunc_aes_mul_gf2p2__260__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__258__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__258__delta)));
    __Vfunc_aes_mul_gf2p2__260__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__258__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__258__gamma)));
    __Vfunc_aes_mul_gf2p2__260__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__260__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__260__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__260__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__260__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__260__d)));
    __Vfunc_aes_mul_gf2p2__260__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__260__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__260__d)));
    __Vfunc_aes_mul_gf2p2__260__f = ((((IData)(__Vfunc_aes_mul_gf2p2__260__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__260__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__260__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__260__b)));
    __Vfunc_aes_mul_gf2p2__260__Vfuncout = __Vfunc_aes_mul_gf2p2__260__f;
    __Vfunc_aes_mul_gf2p4__258__b = __Vfunc_aes_mul_gf2p2__260__Vfuncout;
    __Vfunc_aes_mul_gf2p2__261__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__258__delta));
    __Vfunc_aes_mul_gf2p2__261__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__258__gamma));
    __Vfunc_aes_mul_gf2p2__261__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__261__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__261__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__261__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__261__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__261__d)));
    __Vfunc_aes_mul_gf2p2__261__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__261__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__261__d)));
    __Vfunc_aes_mul_gf2p2__261__f = ((((IData)(__Vfunc_aes_mul_gf2p2__261__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__261__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__261__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__261__b)));
    __Vfunc_aes_mul_gf2p2__261__Vfuncout = __Vfunc_aes_mul_gf2p2__261__f;
    __Vfunc_aes_mul_gf2p4__258__c = __Vfunc_aes_mul_gf2p2__261__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__258__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__258__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__262__g 
                        = __Vfunc_aes_mul_gf2p4__258__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__262__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__262__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__262__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__262__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__262__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__262__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__258__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__258__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__263__g 
                        = __Vfunc_aes_mul_gf2p4__258__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__263__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__263__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__263__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__263__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__263__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__263__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__258__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__258__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__258__Vfuncout;
    __Vfunc_aes_mul_gf2p2__276__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__276__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__276__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__276__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__276__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__276__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__276__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__276__d)));
    __Vfunc_aes_mul_gf2p2__276__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__276__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__276__d)));
    __Vfunc_aes_mul_gf2p2__276__f = ((((IData)(__Vfunc_aes_mul_gf2p2__276__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__276__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__276__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__276__b)));
    __Vfunc_aes_mul_gf2p2__276__Vfuncout = __Vfunc_aes_mul_gf2p2__276__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__276__Vfuncout;
    __Vfunc_aes_mul_gf2p2__277__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__277__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__277__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__277__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__277__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__277__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__277__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__277__d)));
    __Vfunc_aes_mul_gf2p2__277__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__277__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__277__d)));
    __Vfunc_aes_mul_gf2p2__277__f = ((((IData)(__Vfunc_aes_mul_gf2p2__277__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__277__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__277__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__277__b)));
    __Vfunc_aes_mul_gf2p2__277__Vfuncout = __Vfunc_aes_mul_gf2p2__277__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__277__Vfuncout;
    __Vfunc_aes_mul_gf2p2__280__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__280__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__280__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__280__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__280__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__280__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__280__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__280__d)));
    __Vfunc_aes_mul_gf2p2__280__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__280__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__280__d)));
    __Vfunc_aes_mul_gf2p2__280__f = ((((IData)(__Vfunc_aes_mul_gf2p2__280__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__280__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__280__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__280__b)));
    __Vfunc_aes_mul_gf2p2__280__Vfuncout = __Vfunc_aes_mul_gf2p2__280__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__280__Vfuncout;
    __Vfunc_aes_mul_gf2p2__281__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__281__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__281__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__281__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__281__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__281__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__281__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__281__d)));
    __Vfunc_aes_mul_gf2p2__281__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__281__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__281__d)));
    __Vfunc_aes_mul_gf2p2__281__f = ((((IData)(__Vfunc_aes_mul_gf2p2__281__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__281__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__281__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__281__b)));
    __Vfunc_aes_mul_gf2p2__281__Vfuncout = __Vfunc_aes_mul_gf2p2__281__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__281__Vfuncout;
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__226__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__226__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__226__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__226__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__226__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__227__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__227__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__227__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__227__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__227__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__228__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__228__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__228__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__228__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__228__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__229__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__229__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__229__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__229__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__229__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__229__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__230__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__230__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__230__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__230__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__230__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__231__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__231__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__231__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__231__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__231__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma)));
    __Vfunc_aes_square_gf2p2__233__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma));
    __Vfunc_aes_square_gf2p2__233__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__233__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__233__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__233__Vfuncout = __Vfunc_aes_square_gf2p2__233__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__b = __Vfunc_aes_square_gf2p2__233__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__234__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__232__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__234__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__234__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__234__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__234__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__234__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__234__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__235__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__232__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__235__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__235__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__235__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__235__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__235__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__235__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__232__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__232__Vfuncout;
    __Vfunc_aes_mul_gf2p4__240__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__251__03a224__KET__);
    __Vfunc_aes_mul_gf2p4__240__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__240__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16504232494985253375ull);
    __Vfunc_aes_mul_gf2p2__241__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__240__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__241__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__240__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__241__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__241__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__241__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__241__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__241__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__241__d)));
    __Vfunc_aes_mul_gf2p2__241__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__241__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__241__d)));
    __Vfunc_aes_mul_gf2p2__241__f = ((((IData)(__Vfunc_aes_mul_gf2p2__241__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__241__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__241__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__241__b)));
    __Vfunc_aes_mul_gf2p2__241__Vfuncout = __Vfunc_aes_mul_gf2p2__241__f;
    __Vfunc_aes_mul_gf2p4__240__a = __Vfunc_aes_mul_gf2p2__241__Vfuncout;
    __Vfunc_aes_mul_gf2p2__242__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__240__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__240__delta)));
    __Vfunc_aes_mul_gf2p2__242__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__240__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__240__gamma)));
    __Vfunc_aes_mul_gf2p2__242__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__242__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__242__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__242__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__242__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__242__d)));
    __Vfunc_aes_mul_gf2p2__242__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__242__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__242__d)));
    __Vfunc_aes_mul_gf2p2__242__f = ((((IData)(__Vfunc_aes_mul_gf2p2__242__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__242__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__242__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__242__b)));
    __Vfunc_aes_mul_gf2p2__242__Vfuncout = __Vfunc_aes_mul_gf2p2__242__f;
    __Vfunc_aes_mul_gf2p4__240__b = __Vfunc_aes_mul_gf2p2__242__Vfuncout;
    __Vfunc_aes_mul_gf2p2__243__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__240__delta));
    __Vfunc_aes_mul_gf2p2__243__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__240__gamma));
    __Vfunc_aes_mul_gf2p2__243__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__243__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__243__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__243__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__243__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__243__d)));
    __Vfunc_aes_mul_gf2p2__243__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__243__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__243__d)));
    __Vfunc_aes_mul_gf2p2__243__f = ((((IData)(__Vfunc_aes_mul_gf2p2__243__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__243__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__243__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__243__b)));
    __Vfunc_aes_mul_gf2p2__243__Vfuncout = __Vfunc_aes_mul_gf2p2__243__f;
    __Vfunc_aes_mul_gf2p4__240__c = __Vfunc_aes_mul_gf2p2__243__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__240__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__240__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__244__g 
                        = __Vfunc_aes_mul_gf2p4__240__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__244__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__244__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__244__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__244__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__244__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__244__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__240__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__240__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__245__g 
                        = __Vfunc_aes_mul_gf2p4__240__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__245__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__245__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__245__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__245__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__245__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__245__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__240__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__240__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__240__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma)));
    __Vfunc_aes_square_gf2p2__237__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma));
    __Vfunc_aes_square_gf2p2__237__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__237__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__237__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__237__Vfuncout = __Vfunc_aes_square_gf2p2__237__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__b = __Vfunc_aes_square_gf2p2__237__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__238__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__236__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__238__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__238__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__238__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__238__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__238__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__238__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__239__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__236__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__239__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__239__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__239__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__239__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__239__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__239__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__236__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__236__Vfuncout;
    __Vfunc_aes_mul_gf2p4__246__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__251__03a224__KET__);
    __Vfunc_aes_mul_gf2p4__246__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__246__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8839474889474774627ull);
    __Vfunc_aes_mul_gf2p2__247__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__246__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__247__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__246__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__247__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__247__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__247__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__247__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__247__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__247__d)));
    __Vfunc_aes_mul_gf2p2__247__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__247__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__247__d)));
    __Vfunc_aes_mul_gf2p2__247__f = ((((IData)(__Vfunc_aes_mul_gf2p2__247__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__247__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__247__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__247__b)));
    __Vfunc_aes_mul_gf2p2__247__Vfuncout = __Vfunc_aes_mul_gf2p2__247__f;
    __Vfunc_aes_mul_gf2p4__246__a = __Vfunc_aes_mul_gf2p2__247__Vfuncout;
    __Vfunc_aes_mul_gf2p2__248__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__246__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__246__delta)));
    __Vfunc_aes_mul_gf2p2__248__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__246__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__246__gamma)));
    __Vfunc_aes_mul_gf2p2__248__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__248__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__248__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__248__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__248__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__248__d)));
    __Vfunc_aes_mul_gf2p2__248__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__248__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__248__d)));
    __Vfunc_aes_mul_gf2p2__248__f = ((((IData)(__Vfunc_aes_mul_gf2p2__248__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__248__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__248__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__248__b)));
    __Vfunc_aes_mul_gf2p2__248__Vfuncout = __Vfunc_aes_mul_gf2p2__248__f;
    __Vfunc_aes_mul_gf2p4__246__b = __Vfunc_aes_mul_gf2p2__248__Vfuncout;
    __Vfunc_aes_mul_gf2p2__249__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__246__delta));
    __Vfunc_aes_mul_gf2p2__249__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__246__gamma));
    __Vfunc_aes_mul_gf2p2__249__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__249__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__249__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__249__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__249__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__249__d)));
    __Vfunc_aes_mul_gf2p2__249__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__249__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__249__d)));
    __Vfunc_aes_mul_gf2p2__249__f = ((((IData)(__Vfunc_aes_mul_gf2p2__249__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__249__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__249__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__249__b)));
    __Vfunc_aes_mul_gf2p2__249__Vfuncout = __Vfunc_aes_mul_gf2p2__249__f;
    __Vfunc_aes_mul_gf2p4__246__c = __Vfunc_aes_mul_gf2p2__249__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__246__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__246__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__250__g 
                        = __Vfunc_aes_mul_gf2p4__246__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__250__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__250__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__250__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__250__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__250__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__250__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__246__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__246__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__251__g 
                        = __Vfunc_aes_mul_gf2p4__246__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__251__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__251__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__251__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__251__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__251__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__251__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__246__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__246__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__246__Vfuncout;
    __Vfunc_aes_square_gf2p2__268__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                              ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                 >> 2U)));
    __Vfunc_aes_square_gf2p2__268__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__268__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__268__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__268__Vfuncout = __Vfunc_aes_square_gf2p2__268__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__268__Vfuncout;
    __Vfunc_aes_square_gf2p2__269__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__269__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__269__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__269__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__269__Vfuncout = __Vfunc_aes_square_gf2p2__269__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__269__Vfuncout;
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
    __Vfunc_aes_mul_gf2p2__278__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__251__03a224__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__278__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__278__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__278__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__278__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__278__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__278__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__278__d)));
    __Vfunc_aes_mul_gf2p2__278__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__278__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__278__d)));
    __Vfunc_aes_mul_gf2p2__278__f = ((((IData)(__Vfunc_aes_mul_gf2p2__278__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__278__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__278__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__278__b)));
    __Vfunc_aes_mul_gf2p2__278__Vfuncout = __Vfunc_aes_mul_gf2p2__278__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__278__Vfuncout;
    __Vfunc_aes_mul_gf2p2__279__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__251__03a224__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__279__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__279__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__279__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__279__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__279__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__279__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__279__d)));
    __Vfunc_aes_mul_gf2p2__279__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__279__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__279__d)));
    __Vfunc_aes_mul_gf2p2__279__f = ((((IData)(__Vfunc_aes_mul_gf2p2__279__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__279__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__279__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__279__b)));
    __Vfunc_aes_mul_gf2p2__279__Vfuncout = __Vfunc_aes_mul_gf2p2__279__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__279__Vfuncout;
    __Vfunc_aes_square_gf2p2__265__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__265__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__265__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__265__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__265__Vfuncout = __Vfunc_aes_square_gf2p2__265__d;
    __Vfunc_aes_scale_omega2_gf2p2__264__g = __Vfunc_aes_square_gf2p2__265__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__264__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__264__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__264__g)));
    __Vfunc_aes_scale_omega2_gf2p2__264__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__264__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__264__Vfuncout;
    __Vfunc_aes_mul_gf2p2__270__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__251__03a224__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__270__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__270__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__270__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__270__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__270__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__270__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__270__d)));
    __Vfunc_aes_mul_gf2p2__270__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__270__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__270__d)));
    __Vfunc_aes_mul_gf2p2__270__f = ((((IData)(__Vfunc_aes_mul_gf2p2__270__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__270__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__270__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__270__b)));
    __Vfunc_aes_mul_gf2p2__270__Vfuncout = __Vfunc_aes_mul_gf2p2__270__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__270__Vfuncout;
    __Vfunc_aes_square_gf2p2__267__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__267__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__267__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__267__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__267__Vfuncout = __Vfunc_aes_square_gf2p2__267__d;
    __Vfunc_aes_scale_omega2_gf2p2__266__g = __Vfunc_aes_square_gf2p2__267__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__266__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__266__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__266__g)));
    __Vfunc_aes_scale_omega2_gf2p2__266__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__266__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__266__Vfuncout;
    __Vfunc_aes_mul_gf2p2__271__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__251__03a224__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__271__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__271__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__271__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__271__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__271__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__271__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__271__d)));
    __Vfunc_aes_mul_gf2p2__271__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__271__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__271__d)));
    __Vfunc_aes_mul_gf2p2__271__f = ((((IData)(__Vfunc_aes_mul_gf2p2__271__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__271__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__271__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__271__b)));
    __Vfunc_aes_mul_gf2p2__271__Vfuncout = __Vfunc_aes_mul_gf2p2__271__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__271__Vfuncout;
    __Vfunc_aes_mul_gf2p4__282__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__282__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__282__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2551398082706297706ull);
    __Vfunc_aes_mul_gf2p2__283__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__282__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__283__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__282__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__283__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__283__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__283__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__283__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__283__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__283__d)));
    __Vfunc_aes_mul_gf2p2__283__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__283__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__283__d)));
    __Vfunc_aes_mul_gf2p2__283__f = ((((IData)(__Vfunc_aes_mul_gf2p2__283__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__283__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__283__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__283__b)));
    __Vfunc_aes_mul_gf2p2__283__Vfuncout = __Vfunc_aes_mul_gf2p2__283__f;
    __Vfunc_aes_mul_gf2p4__282__a = __Vfunc_aes_mul_gf2p2__283__Vfuncout;
    __Vfunc_aes_mul_gf2p2__284__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__282__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__282__delta)));
    __Vfunc_aes_mul_gf2p2__284__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__282__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__282__gamma)));
    __Vfunc_aes_mul_gf2p2__284__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__284__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__284__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__284__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__284__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__284__d)));
    __Vfunc_aes_mul_gf2p2__284__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__284__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__284__d)));
    __Vfunc_aes_mul_gf2p2__284__f = ((((IData)(__Vfunc_aes_mul_gf2p2__284__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__284__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__284__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__284__b)));
    __Vfunc_aes_mul_gf2p2__284__Vfuncout = __Vfunc_aes_mul_gf2p2__284__f;
    __Vfunc_aes_mul_gf2p4__282__b = __Vfunc_aes_mul_gf2p2__284__Vfuncout;
    __Vfunc_aes_mul_gf2p2__285__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__282__delta));
    __Vfunc_aes_mul_gf2p2__285__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__282__gamma));
    __Vfunc_aes_mul_gf2p2__285__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__285__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__285__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__285__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__285__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__285__d)));
    __Vfunc_aes_mul_gf2p2__285__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__285__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__285__d)));
    __Vfunc_aes_mul_gf2p2__285__f = ((((IData)(__Vfunc_aes_mul_gf2p2__285__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__285__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__285__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__285__b)));
    __Vfunc_aes_mul_gf2p2__285__Vfuncout = __Vfunc_aes_mul_gf2p2__285__f;
    __Vfunc_aes_mul_gf2p4__282__c = __Vfunc_aes_mul_gf2p2__285__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__282__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__282__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__286__g 
                        = __Vfunc_aes_mul_gf2p4__282__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__286__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__286__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__286__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__286__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__286__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__286__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__282__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__282__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__287__g 
                        = __Vfunc_aes_mul_gf2p4__282__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__287__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__287__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__287__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__287__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__287__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__287__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__282__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__282__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__282__Vfuncout;
    __Vfunc_aes_mul_gf2p4__300__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    __Vfunc_aes_mul_gf2p4__300__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__300__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17026015951100949937ull);
    __Vfunc_aes_mul_gf2p2__301__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__300__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__301__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__300__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__301__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__301__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__301__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__301__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__301__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__301__d)));
    __Vfunc_aes_mul_gf2p2__301__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__301__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__301__d)));
    __Vfunc_aes_mul_gf2p2__301__f = ((((IData)(__Vfunc_aes_mul_gf2p2__301__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__301__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__301__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__301__b)));
    __Vfunc_aes_mul_gf2p2__301__Vfuncout = __Vfunc_aes_mul_gf2p2__301__f;
    __Vfunc_aes_mul_gf2p4__300__a = __Vfunc_aes_mul_gf2p2__301__Vfuncout;
    __Vfunc_aes_mul_gf2p2__302__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__300__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__300__delta)));
    __Vfunc_aes_mul_gf2p2__302__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__300__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__300__gamma)));
    __Vfunc_aes_mul_gf2p2__302__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__302__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__302__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__302__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__302__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__302__d)));
    __Vfunc_aes_mul_gf2p2__302__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__302__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__302__d)));
    __Vfunc_aes_mul_gf2p2__302__f = ((((IData)(__Vfunc_aes_mul_gf2p2__302__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__302__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__302__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__302__b)));
    __Vfunc_aes_mul_gf2p2__302__Vfuncout = __Vfunc_aes_mul_gf2p2__302__f;
    __Vfunc_aes_mul_gf2p4__300__b = __Vfunc_aes_mul_gf2p2__302__Vfuncout;
    __Vfunc_aes_mul_gf2p2__303__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__300__delta));
    __Vfunc_aes_mul_gf2p2__303__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__300__gamma));
    __Vfunc_aes_mul_gf2p2__303__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__303__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__303__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__303__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__303__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__303__d)));
    __Vfunc_aes_mul_gf2p2__303__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__303__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__303__d)));
    __Vfunc_aes_mul_gf2p2__303__f = ((((IData)(__Vfunc_aes_mul_gf2p2__303__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__303__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__303__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__303__b)));
    __Vfunc_aes_mul_gf2p2__303__Vfuncout = __Vfunc_aes_mul_gf2p2__303__f;
    __Vfunc_aes_mul_gf2p4__300__c = __Vfunc_aes_mul_gf2p2__303__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__300__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__300__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__304__g 
                        = __Vfunc_aes_mul_gf2p4__300__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__304__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__304__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__304__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__304__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__304__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__304__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__300__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__300__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__305__g 
                        = __Vfunc_aes_mul_gf2p4__300__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__305__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__305__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__305__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__305__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__305__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__305__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__300__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__300__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__300__Vfuncout;
    __Vfunc_aes_mul_gf2p4__306__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p4__306__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__306__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12378878712396907767ull);
    __Vfunc_aes_mul_gf2p2__307__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__306__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__307__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__306__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__307__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__307__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__307__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__307__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__307__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__307__d)));
    __Vfunc_aes_mul_gf2p2__307__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__307__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__307__d)));
    __Vfunc_aes_mul_gf2p2__307__f = ((((IData)(__Vfunc_aes_mul_gf2p2__307__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__307__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__307__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__307__b)));
    __Vfunc_aes_mul_gf2p2__307__Vfuncout = __Vfunc_aes_mul_gf2p2__307__f;
    __Vfunc_aes_mul_gf2p4__306__a = __Vfunc_aes_mul_gf2p2__307__Vfuncout;
    __Vfunc_aes_mul_gf2p2__308__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__306__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__306__delta)));
    __Vfunc_aes_mul_gf2p2__308__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__306__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__306__gamma)));
    __Vfunc_aes_mul_gf2p2__308__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__308__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__308__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__308__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__308__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__308__d)));
    __Vfunc_aes_mul_gf2p2__308__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__308__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__308__d)));
    __Vfunc_aes_mul_gf2p2__308__f = ((((IData)(__Vfunc_aes_mul_gf2p2__308__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__308__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__308__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__308__b)));
    __Vfunc_aes_mul_gf2p2__308__Vfuncout = __Vfunc_aes_mul_gf2p2__308__f;
    __Vfunc_aes_mul_gf2p4__306__b = __Vfunc_aes_mul_gf2p2__308__Vfuncout;
    __Vfunc_aes_mul_gf2p2__309__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__306__delta));
    __Vfunc_aes_mul_gf2p2__309__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__306__gamma));
    __Vfunc_aes_mul_gf2p2__309__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__309__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__309__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__309__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__309__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__309__d)));
    __Vfunc_aes_mul_gf2p2__309__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__309__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__309__d)));
    __Vfunc_aes_mul_gf2p2__309__f = ((((IData)(__Vfunc_aes_mul_gf2p2__309__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__309__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__309__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__309__b)));
    __Vfunc_aes_mul_gf2p2__309__Vfuncout = __Vfunc_aes_mul_gf2p2__309__f;
    __Vfunc_aes_mul_gf2p4__306__c = __Vfunc_aes_mul_gf2p2__309__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__306__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__306__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__310__g 
                        = __Vfunc_aes_mul_gf2p4__306__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__310__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__310__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__310__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__310__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__310__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__310__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__306__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__306__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__311__g 
                        = __Vfunc_aes_mul_gf2p4__306__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__311__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__311__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__311__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__311__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__311__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__311__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__306__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__306__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__306__Vfuncout;
    __Vfunc_aes_mul_gf2p4__318__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__318__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__318__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18206847930739347180ull);
    __Vfunc_aes_mul_gf2p2__319__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__318__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__319__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__318__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__319__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__319__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__319__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__319__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__319__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__319__d)));
    __Vfunc_aes_mul_gf2p2__319__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__319__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__319__d)));
    __Vfunc_aes_mul_gf2p2__319__f = ((((IData)(__Vfunc_aes_mul_gf2p2__319__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__319__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__319__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__319__b)));
    __Vfunc_aes_mul_gf2p2__319__Vfuncout = __Vfunc_aes_mul_gf2p2__319__f;
    __Vfunc_aes_mul_gf2p4__318__a = __Vfunc_aes_mul_gf2p2__319__Vfuncout;
    __Vfunc_aes_mul_gf2p2__320__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__318__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__318__delta)));
    __Vfunc_aes_mul_gf2p2__320__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__318__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__318__gamma)));
    __Vfunc_aes_mul_gf2p2__320__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__320__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__320__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__320__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__320__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__320__d)));
    __Vfunc_aes_mul_gf2p2__320__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__320__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__320__d)));
    __Vfunc_aes_mul_gf2p2__320__f = ((((IData)(__Vfunc_aes_mul_gf2p2__320__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__320__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__320__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__320__b)));
    __Vfunc_aes_mul_gf2p2__320__Vfuncout = __Vfunc_aes_mul_gf2p2__320__f;
    __Vfunc_aes_mul_gf2p4__318__b = __Vfunc_aes_mul_gf2p2__320__Vfuncout;
    __Vfunc_aes_mul_gf2p2__321__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__318__delta));
    __Vfunc_aes_mul_gf2p2__321__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__318__gamma));
    __Vfunc_aes_mul_gf2p2__321__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__321__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__321__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__321__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__321__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__321__d)));
    __Vfunc_aes_mul_gf2p2__321__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__321__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__321__d)));
    __Vfunc_aes_mul_gf2p2__321__f = ((((IData)(__Vfunc_aes_mul_gf2p2__321__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__321__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__321__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__321__b)));
    __Vfunc_aes_mul_gf2p2__321__Vfuncout = __Vfunc_aes_mul_gf2p2__321__f;
    __Vfunc_aes_mul_gf2p4__318__c = __Vfunc_aes_mul_gf2p2__321__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__318__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__318__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__322__g 
                        = __Vfunc_aes_mul_gf2p4__318__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__322__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__322__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__322__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__322__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__322__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__322__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__318__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__318__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__323__g 
                        = __Vfunc_aes_mul_gf2p4__318__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__323__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__323__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__323__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__323__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__323__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__323__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__318__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__318__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__318__Vfuncout;
    __Vfunc_aes_mul_gf2p4__288__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__288__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__288__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2287573981382293252ull);
    __Vfunc_aes_mul_gf2p2__289__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__288__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__289__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__288__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__289__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__289__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__289__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__289__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__289__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__289__d)));
    __Vfunc_aes_mul_gf2p2__289__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__289__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__289__d)));
    __Vfunc_aes_mul_gf2p2__289__f = ((((IData)(__Vfunc_aes_mul_gf2p2__289__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__289__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__289__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__289__b)));
    __Vfunc_aes_mul_gf2p2__289__Vfuncout = __Vfunc_aes_mul_gf2p2__289__f;
    __Vfunc_aes_mul_gf2p4__288__a = __Vfunc_aes_mul_gf2p2__289__Vfuncout;
    __Vfunc_aes_mul_gf2p2__290__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__288__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__288__delta)));
    __Vfunc_aes_mul_gf2p2__290__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__288__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__288__gamma)));
    __Vfunc_aes_mul_gf2p2__290__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__290__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__290__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__290__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__290__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__290__d)));
    __Vfunc_aes_mul_gf2p2__290__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__290__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__290__d)));
    __Vfunc_aes_mul_gf2p2__290__f = ((((IData)(__Vfunc_aes_mul_gf2p2__290__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__290__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__290__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__290__b)));
    __Vfunc_aes_mul_gf2p2__290__Vfuncout = __Vfunc_aes_mul_gf2p2__290__f;
    __Vfunc_aes_mul_gf2p4__288__b = __Vfunc_aes_mul_gf2p2__290__Vfuncout;
    __Vfunc_aes_mul_gf2p2__291__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__288__delta));
    __Vfunc_aes_mul_gf2p2__291__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__288__gamma));
    __Vfunc_aes_mul_gf2p2__291__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__291__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__291__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__291__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__291__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__291__d)));
    __Vfunc_aes_mul_gf2p2__291__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__291__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__291__d)));
    __Vfunc_aes_mul_gf2p2__291__f = ((((IData)(__Vfunc_aes_mul_gf2p2__291__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__291__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__291__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__291__b)));
    __Vfunc_aes_mul_gf2p2__291__Vfuncout = __Vfunc_aes_mul_gf2p2__291__f;
    __Vfunc_aes_mul_gf2p4__288__c = __Vfunc_aes_mul_gf2p2__291__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__288__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__288__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__292__g 
                        = __Vfunc_aes_mul_gf2p4__288__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__292__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__292__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__292__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__292__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__292__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__292__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__288__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__288__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__293__g 
                        = __Vfunc_aes_mul_gf2p4__288__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__293__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__293__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__293__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__293__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__293__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__293__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__288__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__288__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__288__Vfuncout;
    __Vfunc_aes_mul_gf2p4__294__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__294__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__294__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14454796497170498921ull);
    __Vfunc_aes_mul_gf2p2__295__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__294__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__295__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__294__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__295__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__295__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__295__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__295__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__295__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__295__d)));
    __Vfunc_aes_mul_gf2p2__295__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__295__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__295__d)));
    __Vfunc_aes_mul_gf2p2__295__f = ((((IData)(__Vfunc_aes_mul_gf2p2__295__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__295__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__295__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__295__b)));
    __Vfunc_aes_mul_gf2p2__295__Vfuncout = __Vfunc_aes_mul_gf2p2__295__f;
    __Vfunc_aes_mul_gf2p4__294__a = __Vfunc_aes_mul_gf2p2__295__Vfuncout;
    __Vfunc_aes_mul_gf2p2__296__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__294__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__294__delta)));
    __Vfunc_aes_mul_gf2p2__296__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__294__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__294__gamma)));
    __Vfunc_aes_mul_gf2p2__296__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__296__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__296__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__296__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__296__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__296__d)));
    __Vfunc_aes_mul_gf2p2__296__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__296__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__296__d)));
    __Vfunc_aes_mul_gf2p2__296__f = ((((IData)(__Vfunc_aes_mul_gf2p2__296__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__296__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__296__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__296__b)));
    __Vfunc_aes_mul_gf2p2__296__Vfuncout = __Vfunc_aes_mul_gf2p2__296__f;
    __Vfunc_aes_mul_gf2p4__294__b = __Vfunc_aes_mul_gf2p2__296__Vfuncout;
    __Vfunc_aes_mul_gf2p2__297__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__294__delta));
    __Vfunc_aes_mul_gf2p2__297__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__294__gamma));
    __Vfunc_aes_mul_gf2p2__297__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__297__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__297__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__297__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__297__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__297__d)));
    __Vfunc_aes_mul_gf2p2__297__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__297__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__297__d)));
    __Vfunc_aes_mul_gf2p2__297__f = ((((IData)(__Vfunc_aes_mul_gf2p2__297__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__297__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__297__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__297__b)));
    __Vfunc_aes_mul_gf2p2__297__Vfuncout = __Vfunc_aes_mul_gf2p2__297__f;
    __Vfunc_aes_mul_gf2p4__294__c = __Vfunc_aes_mul_gf2p2__297__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__294__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__294__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__298__g 
                        = __Vfunc_aes_mul_gf2p4__294__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__298__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__298__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__298__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__298__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__298__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__298__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__294__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__294__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__299__g 
                        = __Vfunc_aes_mul_gf2p4__294__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__299__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__299__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__299__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__299__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__299__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__299__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__294__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__294__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__294__Vfuncout;
    __Vfunc_aes_mul_gf2p4__312__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__312__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__312__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9822907657904565885ull);
    __Vfunc_aes_mul_gf2p2__313__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__312__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__313__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__312__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__313__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__313__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__313__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__313__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__313__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__313__d)));
    __Vfunc_aes_mul_gf2p2__313__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__313__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__313__d)));
    __Vfunc_aes_mul_gf2p2__313__f = ((((IData)(__Vfunc_aes_mul_gf2p2__313__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__313__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__313__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__313__b)));
    __Vfunc_aes_mul_gf2p2__313__Vfuncout = __Vfunc_aes_mul_gf2p2__313__f;
    __Vfunc_aes_mul_gf2p4__312__a = __Vfunc_aes_mul_gf2p2__313__Vfuncout;
    __Vfunc_aes_mul_gf2p2__314__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__312__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__312__delta)));
    __Vfunc_aes_mul_gf2p2__314__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__312__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__312__gamma)));
    __Vfunc_aes_mul_gf2p2__314__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__314__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__314__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__314__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__314__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__314__d)));
    __Vfunc_aes_mul_gf2p2__314__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__314__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__314__d)));
    __Vfunc_aes_mul_gf2p2__314__f = ((((IData)(__Vfunc_aes_mul_gf2p2__314__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__314__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__314__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__314__b)));
    __Vfunc_aes_mul_gf2p2__314__Vfuncout = __Vfunc_aes_mul_gf2p2__314__f;
    __Vfunc_aes_mul_gf2p4__312__b = __Vfunc_aes_mul_gf2p2__314__Vfuncout;
    __Vfunc_aes_mul_gf2p2__315__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__312__delta));
    __Vfunc_aes_mul_gf2p2__315__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__312__gamma));
    __Vfunc_aes_mul_gf2p2__315__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__315__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__315__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__315__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__315__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__315__d)));
    __Vfunc_aes_mul_gf2p2__315__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__315__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__315__d)));
    __Vfunc_aes_mul_gf2p2__315__f = ((((IData)(__Vfunc_aes_mul_gf2p2__315__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__315__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__315__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__315__b)));
    __Vfunc_aes_mul_gf2p2__315__Vfuncout = __Vfunc_aes_mul_gf2p2__315__f;
    __Vfunc_aes_mul_gf2p4__312__c = __Vfunc_aes_mul_gf2p2__315__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__312__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__312__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__316__g 
                        = __Vfunc_aes_mul_gf2p4__312__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__316__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__316__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__316__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__316__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__316__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__316__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__312__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__312__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__317__g 
                        = __Vfunc_aes_mul_gf2p4__312__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__317__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__317__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__317__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__317__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__317__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__317__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__312__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__312__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__312__Vfuncout;
    __Vfunc_aes_mul_gf2p4__324__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__324__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__324__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3101087023043931611ull);
    __Vfunc_aes_mul_gf2p2__325__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__324__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__325__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__324__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__325__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__325__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__325__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__325__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__325__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__325__d)));
    __Vfunc_aes_mul_gf2p2__325__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__325__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__325__d)));
    __Vfunc_aes_mul_gf2p2__325__f = ((((IData)(__Vfunc_aes_mul_gf2p2__325__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__325__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__325__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__325__b)));
    __Vfunc_aes_mul_gf2p2__325__Vfuncout = __Vfunc_aes_mul_gf2p2__325__f;
    __Vfunc_aes_mul_gf2p4__324__a = __Vfunc_aes_mul_gf2p2__325__Vfuncout;
    __Vfunc_aes_mul_gf2p2__326__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__324__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__324__delta)));
    __Vfunc_aes_mul_gf2p2__326__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__324__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__324__gamma)));
    __Vfunc_aes_mul_gf2p2__326__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__326__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__326__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__326__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__326__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__326__d)));
    __Vfunc_aes_mul_gf2p2__326__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__326__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__326__d)));
    __Vfunc_aes_mul_gf2p2__326__f = ((((IData)(__Vfunc_aes_mul_gf2p2__326__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__326__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__326__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__326__b)));
    __Vfunc_aes_mul_gf2p2__326__Vfuncout = __Vfunc_aes_mul_gf2p2__326__f;
    __Vfunc_aes_mul_gf2p4__324__b = __Vfunc_aes_mul_gf2p2__326__Vfuncout;
    __Vfunc_aes_mul_gf2p2__327__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__324__delta));
    __Vfunc_aes_mul_gf2p2__327__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__324__gamma));
    __Vfunc_aes_mul_gf2p2__327__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__327__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__327__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__327__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__327__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__327__d)));
    __Vfunc_aes_mul_gf2p2__327__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__327__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__327__d)));
    __Vfunc_aes_mul_gf2p2__327__f = ((((IData)(__Vfunc_aes_mul_gf2p2__327__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__327__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__327__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__327__b)));
    __Vfunc_aes_mul_gf2p2__327__Vfuncout = __Vfunc_aes_mul_gf2p2__327__f;
    __Vfunc_aes_mul_gf2p4__324__c = __Vfunc_aes_mul_gf2p2__327__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__324__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__324__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__328__g 
                        = __Vfunc_aes_mul_gf2p4__324__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__328__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__328__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__328__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__328__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__328__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__328__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__324__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__324__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__329__g 
                        = __Vfunc_aes_mul_gf2p4__324__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__329__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__329__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__329__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__329__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__329__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__329__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__324__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__324__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__324__Vfuncout;
}

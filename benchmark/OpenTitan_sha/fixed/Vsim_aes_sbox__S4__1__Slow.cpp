// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__122__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__123__Vfuncout;
    __Vfunc_aes_square_gf2p2__123__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__123__g;
    __Vfunc_aes_square_gf2p2__123__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__123__d;
    __Vfunc_aes_square_gf2p2__123__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__126__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__127__Vfuncout;
    __Vfunc_aes_square_gf2p2__127__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__127__g;
    __Vfunc_aes_square_gf2p2__127__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__127__d;
    __Vfunc_aes_square_gf2p2__127__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__130__Vfuncout;
    __Vfunc_aes_mul_gf2p4__130__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__130__gamma;
    __Vfunc_aes_mul_gf2p4__130__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__130__delta;
    __Vfunc_aes_mul_gf2p4__130__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__130__a;
    __Vfunc_aes_mul_gf2p4__130__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__130__b;
    __Vfunc_aes_mul_gf2p4__130__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__130__c;
    __Vfunc_aes_mul_gf2p4__130__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__131__Vfuncout;
    __Vfunc_aes_mul_gf2p2__131__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__131__g;
    __Vfunc_aes_mul_gf2p2__131__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__131__d;
    __Vfunc_aes_mul_gf2p2__131__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__131__f;
    __Vfunc_aes_mul_gf2p2__131__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__131__a;
    __Vfunc_aes_mul_gf2p2__131__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__131__b;
    __Vfunc_aes_mul_gf2p2__131__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__131__c;
    __Vfunc_aes_mul_gf2p2__131__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__132__Vfuncout;
    __Vfunc_aes_mul_gf2p2__132__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__132__g;
    __Vfunc_aes_mul_gf2p2__132__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__132__d;
    __Vfunc_aes_mul_gf2p2__132__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__132__f;
    __Vfunc_aes_mul_gf2p2__132__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__132__a;
    __Vfunc_aes_mul_gf2p2__132__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__132__b;
    __Vfunc_aes_mul_gf2p2__132__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__132__c;
    __Vfunc_aes_mul_gf2p2__132__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__133__Vfuncout;
    __Vfunc_aes_mul_gf2p2__133__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__133__g;
    __Vfunc_aes_mul_gf2p2__133__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__133__d;
    __Vfunc_aes_mul_gf2p2__133__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__133__f;
    __Vfunc_aes_mul_gf2p2__133__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__133__a;
    __Vfunc_aes_mul_gf2p2__133__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__133__b;
    __Vfunc_aes_mul_gf2p2__133__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__133__c;
    __Vfunc_aes_mul_gf2p2__133__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__136__Vfuncout;
    __Vfunc_aes_mul_gf2p4__136__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__136__gamma;
    __Vfunc_aes_mul_gf2p4__136__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__136__delta;
    __Vfunc_aes_mul_gf2p4__136__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__136__a;
    __Vfunc_aes_mul_gf2p4__136__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__136__b;
    __Vfunc_aes_mul_gf2p4__136__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__136__c;
    __Vfunc_aes_mul_gf2p4__136__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__137__Vfuncout;
    __Vfunc_aes_mul_gf2p2__137__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__137__g;
    __Vfunc_aes_mul_gf2p2__137__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__137__d;
    __Vfunc_aes_mul_gf2p2__137__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__137__f;
    __Vfunc_aes_mul_gf2p2__137__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__137__a;
    __Vfunc_aes_mul_gf2p2__137__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__137__b;
    __Vfunc_aes_mul_gf2p2__137__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__137__c;
    __Vfunc_aes_mul_gf2p2__137__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__138__Vfuncout;
    __Vfunc_aes_mul_gf2p2__138__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__138__g;
    __Vfunc_aes_mul_gf2p2__138__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__138__d;
    __Vfunc_aes_mul_gf2p2__138__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__138__f;
    __Vfunc_aes_mul_gf2p2__138__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__138__a;
    __Vfunc_aes_mul_gf2p2__138__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__138__b;
    __Vfunc_aes_mul_gf2p2__138__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__138__c;
    __Vfunc_aes_mul_gf2p2__138__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__139__Vfuncout;
    __Vfunc_aes_mul_gf2p2__139__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__139__g;
    __Vfunc_aes_mul_gf2p2__139__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__139__d;
    __Vfunc_aes_mul_gf2p2__139__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__139__f;
    __Vfunc_aes_mul_gf2p2__139__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__139__a;
    __Vfunc_aes_mul_gf2p2__139__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__139__b;
    __Vfunc_aes_mul_gf2p2__139__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__139__c;
    __Vfunc_aes_mul_gf2p2__139__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__142__Vfuncout;
    __Vfunc_aes_mul_gf2p4__142__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__142__gamma;
    __Vfunc_aes_mul_gf2p4__142__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__142__delta;
    __Vfunc_aes_mul_gf2p4__142__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__142__a;
    __Vfunc_aes_mul_gf2p4__142__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__142__b;
    __Vfunc_aes_mul_gf2p4__142__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__142__c;
    __Vfunc_aes_mul_gf2p4__142__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__143__Vfuncout;
    __Vfunc_aes_mul_gf2p2__143__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__143__g;
    __Vfunc_aes_mul_gf2p2__143__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__143__d;
    __Vfunc_aes_mul_gf2p2__143__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__143__f;
    __Vfunc_aes_mul_gf2p2__143__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__143__a;
    __Vfunc_aes_mul_gf2p2__143__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__143__b;
    __Vfunc_aes_mul_gf2p2__143__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__143__c;
    __Vfunc_aes_mul_gf2p2__143__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__144__Vfuncout;
    __Vfunc_aes_mul_gf2p2__144__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__144__g;
    __Vfunc_aes_mul_gf2p2__144__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__144__d;
    __Vfunc_aes_mul_gf2p2__144__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__144__f;
    __Vfunc_aes_mul_gf2p2__144__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__144__a;
    __Vfunc_aes_mul_gf2p2__144__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__144__b;
    __Vfunc_aes_mul_gf2p2__144__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__144__c;
    __Vfunc_aes_mul_gf2p2__144__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__145__Vfuncout;
    __Vfunc_aes_mul_gf2p2__145__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__145__g;
    __Vfunc_aes_mul_gf2p2__145__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__145__d;
    __Vfunc_aes_mul_gf2p2__145__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__145__f;
    __Vfunc_aes_mul_gf2p2__145__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__145__a;
    __Vfunc_aes_mul_gf2p2__145__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__145__b;
    __Vfunc_aes_mul_gf2p2__145__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__145__c;
    __Vfunc_aes_mul_gf2p2__145__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__148__Vfuncout;
    __Vfunc_aes_mul_gf2p4__148__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__148__gamma;
    __Vfunc_aes_mul_gf2p4__148__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__148__delta;
    __Vfunc_aes_mul_gf2p4__148__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__148__a;
    __Vfunc_aes_mul_gf2p4__148__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__148__b;
    __Vfunc_aes_mul_gf2p4__148__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__148__c;
    __Vfunc_aes_mul_gf2p4__148__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__149__Vfuncout;
    __Vfunc_aes_mul_gf2p2__149__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__149__g;
    __Vfunc_aes_mul_gf2p2__149__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__149__d;
    __Vfunc_aes_mul_gf2p2__149__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__149__f;
    __Vfunc_aes_mul_gf2p2__149__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__149__a;
    __Vfunc_aes_mul_gf2p2__149__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__149__b;
    __Vfunc_aes_mul_gf2p2__149__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__149__c;
    __Vfunc_aes_mul_gf2p2__149__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__150__Vfuncout;
    __Vfunc_aes_mul_gf2p2__150__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__150__g;
    __Vfunc_aes_mul_gf2p2__150__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__150__d;
    __Vfunc_aes_mul_gf2p2__150__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__150__f;
    __Vfunc_aes_mul_gf2p2__150__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__150__a;
    __Vfunc_aes_mul_gf2p2__150__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__150__b;
    __Vfunc_aes_mul_gf2p2__150__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__150__c;
    __Vfunc_aes_mul_gf2p2__150__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__151__Vfuncout;
    __Vfunc_aes_mul_gf2p2__151__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__151__g;
    __Vfunc_aes_mul_gf2p2__151__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__151__d;
    __Vfunc_aes_mul_gf2p2__151__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__151__f;
    __Vfunc_aes_mul_gf2p2__151__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__151__a;
    __Vfunc_aes_mul_gf2p2__151__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__151__b;
    __Vfunc_aes_mul_gf2p2__151__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__151__c;
    __Vfunc_aes_mul_gf2p2__151__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__154__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__154__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__154__g;
    __Vfunc_aes_scale_omega2_gf2p2__154__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__154__d;
    __Vfunc_aes_scale_omega2_gf2p2__154__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__155__Vfuncout;
    __Vfunc_aes_square_gf2p2__155__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__155__g;
    __Vfunc_aes_square_gf2p2__155__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__155__d;
    __Vfunc_aes_square_gf2p2__155__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__156__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__156__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__156__g;
    __Vfunc_aes_scale_omega2_gf2p2__156__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__156__d;
    __Vfunc_aes_scale_omega2_gf2p2__156__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__157__Vfuncout;
    __Vfunc_aes_square_gf2p2__157__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__157__g;
    __Vfunc_aes_square_gf2p2__157__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__157__d;
    __Vfunc_aes_square_gf2p2__157__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__158__Vfuncout;
    __Vfunc_aes_square_gf2p2__158__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__158__g;
    __Vfunc_aes_square_gf2p2__158__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__158__d;
    __Vfunc_aes_square_gf2p2__158__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__159__Vfuncout;
    __Vfunc_aes_square_gf2p2__159__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__159__g;
    __Vfunc_aes_square_gf2p2__159__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__159__d;
    __Vfunc_aes_square_gf2p2__159__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__160__Vfuncout;
    __Vfunc_aes_mul_gf2p2__160__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__160__g;
    __Vfunc_aes_mul_gf2p2__160__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__160__d;
    __Vfunc_aes_mul_gf2p2__160__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__160__f;
    __Vfunc_aes_mul_gf2p2__160__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__160__a;
    __Vfunc_aes_mul_gf2p2__160__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__160__b;
    __Vfunc_aes_mul_gf2p2__160__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__160__c;
    __Vfunc_aes_mul_gf2p2__160__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__161__Vfuncout;
    __Vfunc_aes_mul_gf2p2__161__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__161__g;
    __Vfunc_aes_mul_gf2p2__161__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__161__d;
    __Vfunc_aes_mul_gf2p2__161__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__161__f;
    __Vfunc_aes_mul_gf2p2__161__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__161__a;
    __Vfunc_aes_mul_gf2p2__161__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__161__b;
    __Vfunc_aes_mul_gf2p2__161__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__161__c;
    __Vfunc_aes_mul_gf2p2__161__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__162__Vfuncout;
    __Vfunc_aes_mul_gf2p2__162__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__162__g;
    __Vfunc_aes_mul_gf2p2__162__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__162__d;
    __Vfunc_aes_mul_gf2p2__162__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__162__f;
    __Vfunc_aes_mul_gf2p2__162__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__162__a;
    __Vfunc_aes_mul_gf2p2__162__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__162__b;
    __Vfunc_aes_mul_gf2p2__162__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__162__c;
    __Vfunc_aes_mul_gf2p2__162__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__163__Vfuncout;
    __Vfunc_aes_mul_gf2p2__163__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__163__g;
    __Vfunc_aes_mul_gf2p2__163__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__163__d;
    __Vfunc_aes_mul_gf2p2__163__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__163__f;
    __Vfunc_aes_mul_gf2p2__163__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__163__a;
    __Vfunc_aes_mul_gf2p2__163__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__163__b;
    __Vfunc_aes_mul_gf2p2__163__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__163__c;
    __Vfunc_aes_mul_gf2p2__163__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__164__Vfuncout;
    __Vfunc_aes_mul_gf2p2__164__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__164__g;
    __Vfunc_aes_mul_gf2p2__164__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__164__d;
    __Vfunc_aes_mul_gf2p2__164__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__164__f;
    __Vfunc_aes_mul_gf2p2__164__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__164__a;
    __Vfunc_aes_mul_gf2p2__164__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__164__b;
    __Vfunc_aes_mul_gf2p2__164__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__164__c;
    __Vfunc_aes_mul_gf2p2__164__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__165__Vfuncout;
    __Vfunc_aes_mul_gf2p2__165__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__165__g;
    __Vfunc_aes_mul_gf2p2__165__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__165__d;
    __Vfunc_aes_mul_gf2p2__165__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__165__f;
    __Vfunc_aes_mul_gf2p2__165__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__165__a;
    __Vfunc_aes_mul_gf2p2__165__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__165__b;
    __Vfunc_aes_mul_gf2p2__165__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__165__c;
    __Vfunc_aes_mul_gf2p2__165__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__166__Vfuncout;
    __Vfunc_aes_mul_gf2p2__166__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__166__g;
    __Vfunc_aes_mul_gf2p2__166__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__166__d;
    __Vfunc_aes_mul_gf2p2__166__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__166__f;
    __Vfunc_aes_mul_gf2p2__166__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__166__a;
    __Vfunc_aes_mul_gf2p2__166__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__166__b;
    __Vfunc_aes_mul_gf2p2__166__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__166__c;
    __Vfunc_aes_mul_gf2p2__166__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__167__Vfuncout;
    __Vfunc_aes_mul_gf2p2__167__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__167__g;
    __Vfunc_aes_mul_gf2p2__167__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__167__d;
    __Vfunc_aes_mul_gf2p2__167__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__167__f;
    __Vfunc_aes_mul_gf2p2__167__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__167__a;
    __Vfunc_aes_mul_gf2p2__167__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__167__b;
    __Vfunc_aes_mul_gf2p2__167__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__167__c;
    __Vfunc_aes_mul_gf2p2__167__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__168__Vfuncout;
    __Vfunc_aes_mul_gf2p2__168__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__168__g;
    __Vfunc_aes_mul_gf2p2__168__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__168__d;
    __Vfunc_aes_mul_gf2p2__168__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__168__f;
    __Vfunc_aes_mul_gf2p2__168__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__168__a;
    __Vfunc_aes_mul_gf2p2__168__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__168__b;
    __Vfunc_aes_mul_gf2p2__168__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__168__c;
    __Vfunc_aes_mul_gf2p2__168__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__169__Vfuncout;
    __Vfunc_aes_mul_gf2p2__169__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__169__g;
    __Vfunc_aes_mul_gf2p2__169__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__169__d;
    __Vfunc_aes_mul_gf2p2__169__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__169__f;
    __Vfunc_aes_mul_gf2p2__169__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__169__a;
    __Vfunc_aes_mul_gf2p2__169__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__169__b;
    __Vfunc_aes_mul_gf2p2__169__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__169__c;
    __Vfunc_aes_mul_gf2p2__169__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__170__Vfuncout;
    __Vfunc_aes_mul_gf2p2__170__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__170__g;
    __Vfunc_aes_mul_gf2p2__170__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__170__d;
    __Vfunc_aes_mul_gf2p2__170__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__170__f;
    __Vfunc_aes_mul_gf2p2__170__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__170__a;
    __Vfunc_aes_mul_gf2p2__170__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__170__b;
    __Vfunc_aes_mul_gf2p2__170__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__170__c;
    __Vfunc_aes_mul_gf2p2__170__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__171__Vfuncout;
    __Vfunc_aes_mul_gf2p2__171__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__171__g;
    __Vfunc_aes_mul_gf2p2__171__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__171__d;
    __Vfunc_aes_mul_gf2p2__171__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__171__f;
    __Vfunc_aes_mul_gf2p2__171__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__171__a;
    __Vfunc_aes_mul_gf2p2__171__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__171__b;
    __Vfunc_aes_mul_gf2p2__171__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__171__c;
    __Vfunc_aes_mul_gf2p2__171__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__172__Vfuncout;
    __Vfunc_aes_mul_gf2p4__172__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__172__gamma;
    __Vfunc_aes_mul_gf2p4__172__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__172__delta;
    __Vfunc_aes_mul_gf2p4__172__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__172__a;
    __Vfunc_aes_mul_gf2p4__172__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__172__b;
    __Vfunc_aes_mul_gf2p4__172__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__172__c;
    __Vfunc_aes_mul_gf2p4__172__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__173__Vfuncout;
    __Vfunc_aes_mul_gf2p2__173__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__173__g;
    __Vfunc_aes_mul_gf2p2__173__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__173__d;
    __Vfunc_aes_mul_gf2p2__173__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__173__f;
    __Vfunc_aes_mul_gf2p2__173__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__173__a;
    __Vfunc_aes_mul_gf2p2__173__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__173__b;
    __Vfunc_aes_mul_gf2p2__173__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__173__c;
    __Vfunc_aes_mul_gf2p2__173__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__174__Vfuncout;
    __Vfunc_aes_mul_gf2p2__174__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__174__g;
    __Vfunc_aes_mul_gf2p2__174__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__174__d;
    __Vfunc_aes_mul_gf2p2__174__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__174__f;
    __Vfunc_aes_mul_gf2p2__174__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__174__a;
    __Vfunc_aes_mul_gf2p2__174__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__174__b;
    __Vfunc_aes_mul_gf2p2__174__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__174__c;
    __Vfunc_aes_mul_gf2p2__174__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__175__Vfuncout;
    __Vfunc_aes_mul_gf2p2__175__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__175__g;
    __Vfunc_aes_mul_gf2p2__175__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__175__d;
    __Vfunc_aes_mul_gf2p2__175__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__175__f;
    __Vfunc_aes_mul_gf2p2__175__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__175__a;
    __Vfunc_aes_mul_gf2p2__175__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__175__b;
    __Vfunc_aes_mul_gf2p2__175__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__175__c;
    __Vfunc_aes_mul_gf2p2__175__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__178__Vfuncout;
    __Vfunc_aes_mul_gf2p4__178__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__178__gamma;
    __Vfunc_aes_mul_gf2p4__178__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__178__delta;
    __Vfunc_aes_mul_gf2p4__178__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__178__a;
    __Vfunc_aes_mul_gf2p4__178__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__178__b;
    __Vfunc_aes_mul_gf2p4__178__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__178__c;
    __Vfunc_aes_mul_gf2p4__178__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__179__Vfuncout;
    __Vfunc_aes_mul_gf2p2__179__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__179__g;
    __Vfunc_aes_mul_gf2p2__179__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__179__d;
    __Vfunc_aes_mul_gf2p2__179__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__179__f;
    __Vfunc_aes_mul_gf2p2__179__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__179__a;
    __Vfunc_aes_mul_gf2p2__179__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__179__b;
    __Vfunc_aes_mul_gf2p2__179__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__179__c;
    __Vfunc_aes_mul_gf2p2__179__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__180__Vfuncout;
    __Vfunc_aes_mul_gf2p2__180__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__180__g;
    __Vfunc_aes_mul_gf2p2__180__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__180__d;
    __Vfunc_aes_mul_gf2p2__180__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__180__f;
    __Vfunc_aes_mul_gf2p2__180__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__180__a;
    __Vfunc_aes_mul_gf2p2__180__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__180__b;
    __Vfunc_aes_mul_gf2p2__180__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__180__c;
    __Vfunc_aes_mul_gf2p2__180__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__181__Vfuncout;
    __Vfunc_aes_mul_gf2p2__181__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__181__g;
    __Vfunc_aes_mul_gf2p2__181__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__181__d;
    __Vfunc_aes_mul_gf2p2__181__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__181__f;
    __Vfunc_aes_mul_gf2p2__181__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__181__a;
    __Vfunc_aes_mul_gf2p2__181__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__181__b;
    __Vfunc_aes_mul_gf2p2__181__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__181__c;
    __Vfunc_aes_mul_gf2p2__181__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__184__Vfuncout;
    __Vfunc_aes_mul_gf2p4__184__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__184__gamma;
    __Vfunc_aes_mul_gf2p4__184__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__184__delta;
    __Vfunc_aes_mul_gf2p4__184__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__184__a;
    __Vfunc_aes_mul_gf2p4__184__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__184__b;
    __Vfunc_aes_mul_gf2p4__184__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__184__c;
    __Vfunc_aes_mul_gf2p4__184__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__185__Vfuncout;
    __Vfunc_aes_mul_gf2p2__185__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__185__g;
    __Vfunc_aes_mul_gf2p2__185__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__185__d;
    __Vfunc_aes_mul_gf2p2__185__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__185__f;
    __Vfunc_aes_mul_gf2p2__185__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__185__a;
    __Vfunc_aes_mul_gf2p2__185__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__185__b;
    __Vfunc_aes_mul_gf2p2__185__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__185__c;
    __Vfunc_aes_mul_gf2p2__185__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__186__Vfuncout;
    __Vfunc_aes_mul_gf2p2__186__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__186__g;
    __Vfunc_aes_mul_gf2p2__186__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__186__d;
    __Vfunc_aes_mul_gf2p2__186__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__186__f;
    __Vfunc_aes_mul_gf2p2__186__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__186__a;
    __Vfunc_aes_mul_gf2p2__186__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__186__b;
    __Vfunc_aes_mul_gf2p2__186__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__186__c;
    __Vfunc_aes_mul_gf2p2__186__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__187__Vfuncout;
    __Vfunc_aes_mul_gf2p2__187__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__187__g;
    __Vfunc_aes_mul_gf2p2__187__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__187__d;
    __Vfunc_aes_mul_gf2p2__187__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__187__f;
    __Vfunc_aes_mul_gf2p2__187__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__187__a;
    __Vfunc_aes_mul_gf2p2__187__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__187__b;
    __Vfunc_aes_mul_gf2p2__187__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__187__c;
    __Vfunc_aes_mul_gf2p2__187__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__190__Vfuncout;
    __Vfunc_aes_mul_gf2p4__190__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__190__gamma;
    __Vfunc_aes_mul_gf2p4__190__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__190__delta;
    __Vfunc_aes_mul_gf2p4__190__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__190__a;
    __Vfunc_aes_mul_gf2p4__190__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__190__b;
    __Vfunc_aes_mul_gf2p4__190__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__190__c;
    __Vfunc_aes_mul_gf2p4__190__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__191__Vfuncout;
    __Vfunc_aes_mul_gf2p2__191__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__191__g;
    __Vfunc_aes_mul_gf2p2__191__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__191__d;
    __Vfunc_aes_mul_gf2p2__191__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__191__f;
    __Vfunc_aes_mul_gf2p2__191__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__191__a;
    __Vfunc_aes_mul_gf2p2__191__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__191__b;
    __Vfunc_aes_mul_gf2p2__191__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__191__c;
    __Vfunc_aes_mul_gf2p2__191__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__192__Vfuncout;
    __Vfunc_aes_mul_gf2p2__192__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__192__g;
    __Vfunc_aes_mul_gf2p2__192__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__192__d;
    __Vfunc_aes_mul_gf2p2__192__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__192__f;
    __Vfunc_aes_mul_gf2p2__192__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__192__a;
    __Vfunc_aes_mul_gf2p2__192__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__192__b;
    __Vfunc_aes_mul_gf2p2__192__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__192__c;
    __Vfunc_aes_mul_gf2p2__192__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__193__Vfuncout;
    __Vfunc_aes_mul_gf2p2__193__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__193__g;
    __Vfunc_aes_mul_gf2p2__193__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__193__d;
    __Vfunc_aes_mul_gf2p2__193__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__193__f;
    __Vfunc_aes_mul_gf2p2__193__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__193__a;
    __Vfunc_aes_mul_gf2p2__193__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__193__b;
    __Vfunc_aes_mul_gf2p2__193__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__193__c;
    __Vfunc_aes_mul_gf2p2__193__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__196__Vfuncout;
    __Vfunc_aes_mul_gf2p4__196__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__196__gamma;
    __Vfunc_aes_mul_gf2p4__196__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__196__delta;
    __Vfunc_aes_mul_gf2p4__196__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__196__a;
    __Vfunc_aes_mul_gf2p4__196__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__196__b;
    __Vfunc_aes_mul_gf2p4__196__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__196__c;
    __Vfunc_aes_mul_gf2p4__196__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__197__Vfuncout;
    __Vfunc_aes_mul_gf2p2__197__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__197__g;
    __Vfunc_aes_mul_gf2p2__197__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__197__d;
    __Vfunc_aes_mul_gf2p2__197__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__197__f;
    __Vfunc_aes_mul_gf2p2__197__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__197__a;
    __Vfunc_aes_mul_gf2p2__197__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__197__b;
    __Vfunc_aes_mul_gf2p2__197__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__197__c;
    __Vfunc_aes_mul_gf2p2__197__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__198__Vfuncout;
    __Vfunc_aes_mul_gf2p2__198__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__198__g;
    __Vfunc_aes_mul_gf2p2__198__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__198__d;
    __Vfunc_aes_mul_gf2p2__198__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__198__f;
    __Vfunc_aes_mul_gf2p2__198__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__198__a;
    __Vfunc_aes_mul_gf2p2__198__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__198__b;
    __Vfunc_aes_mul_gf2p2__198__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__198__c;
    __Vfunc_aes_mul_gf2p2__198__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__199__Vfuncout;
    __Vfunc_aes_mul_gf2p2__199__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__199__g;
    __Vfunc_aes_mul_gf2p2__199__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__199__d;
    __Vfunc_aes_mul_gf2p2__199__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__199__f;
    __Vfunc_aes_mul_gf2p2__199__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__199__a;
    __Vfunc_aes_mul_gf2p2__199__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__199__b;
    __Vfunc_aes_mul_gf2p2__199__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__199__c;
    __Vfunc_aes_mul_gf2p2__199__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__202__Vfuncout;
    __Vfunc_aes_mul_gf2p4__202__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__202__gamma;
    __Vfunc_aes_mul_gf2p4__202__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__202__delta;
    __Vfunc_aes_mul_gf2p4__202__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__202__a;
    __Vfunc_aes_mul_gf2p4__202__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__202__b;
    __Vfunc_aes_mul_gf2p4__202__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__202__c;
    __Vfunc_aes_mul_gf2p4__202__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__203__Vfuncout;
    __Vfunc_aes_mul_gf2p2__203__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__203__g;
    __Vfunc_aes_mul_gf2p2__203__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__203__d;
    __Vfunc_aes_mul_gf2p2__203__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__203__f;
    __Vfunc_aes_mul_gf2p2__203__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__203__a;
    __Vfunc_aes_mul_gf2p2__203__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__203__b;
    __Vfunc_aes_mul_gf2p2__203__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__203__c;
    __Vfunc_aes_mul_gf2p2__203__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__204__Vfuncout;
    __Vfunc_aes_mul_gf2p2__204__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__204__g;
    __Vfunc_aes_mul_gf2p2__204__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__204__d;
    __Vfunc_aes_mul_gf2p2__204__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__204__f;
    __Vfunc_aes_mul_gf2p2__204__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__204__a;
    __Vfunc_aes_mul_gf2p2__204__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__204__b;
    __Vfunc_aes_mul_gf2p2__204__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__204__c;
    __Vfunc_aes_mul_gf2p2__204__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__Vfuncout;
    __Vfunc_aes_mul_gf2p2__205__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__g;
    __Vfunc_aes_mul_gf2p2__205__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__d;
    __Vfunc_aes_mul_gf2p2__205__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__205__f;
    __Vfunc_aes_mul_gf2p2__205__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__205__a;
    __Vfunc_aes_mul_gf2p2__205__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__205__b;
    __Vfunc_aes_mul_gf2p2__205__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__205__c;
    __Vfunc_aes_mul_gf2p2__205__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__208__Vfuncout;
    __Vfunc_aes_mul_gf2p4__208__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__208__gamma;
    __Vfunc_aes_mul_gf2p4__208__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__208__delta;
    __Vfunc_aes_mul_gf2p4__208__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__208__a;
    __Vfunc_aes_mul_gf2p4__208__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__208__b;
    __Vfunc_aes_mul_gf2p4__208__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__208__c;
    __Vfunc_aes_mul_gf2p4__208__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__Vfuncout;
    __Vfunc_aes_mul_gf2p2__209__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__g;
    __Vfunc_aes_mul_gf2p2__209__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__d;
    __Vfunc_aes_mul_gf2p2__209__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__f;
    __Vfunc_aes_mul_gf2p2__209__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__209__a;
    __Vfunc_aes_mul_gf2p2__209__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__209__b;
    __Vfunc_aes_mul_gf2p2__209__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__209__c;
    __Vfunc_aes_mul_gf2p2__209__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__Vfuncout;
    __Vfunc_aes_mul_gf2p2__210__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__g;
    __Vfunc_aes_mul_gf2p2__210__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__d;
    __Vfunc_aes_mul_gf2p2__210__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__f;
    __Vfunc_aes_mul_gf2p2__210__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__210__a;
    __Vfunc_aes_mul_gf2p2__210__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__210__b;
    __Vfunc_aes_mul_gf2p2__210__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__210__c;
    __Vfunc_aes_mul_gf2p2__210__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__Vfuncout;
    __Vfunc_aes_mul_gf2p2__211__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__g;
    __Vfunc_aes_mul_gf2p2__211__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__d;
    __Vfunc_aes_mul_gf2p2__211__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__f;
    __Vfunc_aes_mul_gf2p2__211__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__211__a;
    __Vfunc_aes_mul_gf2p2__211__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__211__b;
    __Vfunc_aes_mul_gf2p2__211__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__211__c;
    __Vfunc_aes_mul_gf2p2__211__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__214__Vfuncout;
    __Vfunc_aes_mul_gf2p4__214__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__214__gamma;
    __Vfunc_aes_mul_gf2p4__214__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__214__delta;
    __Vfunc_aes_mul_gf2p4__214__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__214__a;
    __Vfunc_aes_mul_gf2p4__214__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__214__b;
    __Vfunc_aes_mul_gf2p4__214__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__214__c;
    __Vfunc_aes_mul_gf2p4__214__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__215__Vfuncout;
    __Vfunc_aes_mul_gf2p2__215__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__215__g;
    __Vfunc_aes_mul_gf2p2__215__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__215__d;
    __Vfunc_aes_mul_gf2p2__215__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__215__f;
    __Vfunc_aes_mul_gf2p2__215__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__215__a;
    __Vfunc_aes_mul_gf2p2__215__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__215__b;
    __Vfunc_aes_mul_gf2p2__215__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__215__c;
    __Vfunc_aes_mul_gf2p2__215__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__216__Vfuncout;
    __Vfunc_aes_mul_gf2p2__216__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__216__g;
    __Vfunc_aes_mul_gf2p2__216__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__216__d;
    __Vfunc_aes_mul_gf2p2__216__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__216__f;
    __Vfunc_aes_mul_gf2p2__216__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__216__a;
    __Vfunc_aes_mul_gf2p2__216__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__216__b;
    __Vfunc_aes_mul_gf2p2__216__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__216__c;
    __Vfunc_aes_mul_gf2p2__216__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__217__Vfuncout;
    __Vfunc_aes_mul_gf2p2__217__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__217__g;
    __Vfunc_aes_mul_gf2p2__217__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__217__d;
    __Vfunc_aes_mul_gf2p2__217__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__217__f;
    __Vfunc_aes_mul_gf2p2__217__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__217__a;
    __Vfunc_aes_mul_gf2p2__217__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__217__b;
    __Vfunc_aes_mul_gf2p2__217__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__217__c;
    __Vfunc_aes_mul_gf2p2__217__c = 0;
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
    __Vfunc_aes_mul_gf2p2__164__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__139__03a112__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__164__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__164__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__164__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__164__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__164__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__164__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__164__d)));
    __Vfunc_aes_mul_gf2p2__164__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__164__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__164__d)));
    __Vfunc_aes_mul_gf2p2__164__f = ((((IData)(__Vfunc_aes_mul_gf2p2__164__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__164__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__164__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__164__b)));
    __Vfunc_aes_mul_gf2p2__164__Vfuncout = __Vfunc_aes_mul_gf2p2__164__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__164__Vfuncout;
    __Vfunc_aes_mul_gf2p2__165__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__139__03a112__KET__ 
                                           >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__165__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__165__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__165__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__165__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__165__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__165__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__165__d)));
    __Vfunc_aes_mul_gf2p2__165__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__165__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__165__d)));
    __Vfunc_aes_mul_gf2p2__165__f = ((((IData)(__Vfunc_aes_mul_gf2p2__165__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__165__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__165__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__165__b)));
    __Vfunc_aes_mul_gf2p2__165__Vfuncout = __Vfunc_aes_mul_gf2p2__165__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__165__Vfuncout;
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
                vlSelfRef.__Vfunc_aes_mvm__110__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__110__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__110__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__110__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__110__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__110__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__110__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__110__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__110__vec_b 
                    = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [0U][1U]);
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__110__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__110__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__110__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__110__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__110__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_b 
                        = (0x000000ffU & (0x63U ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][1U]));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__111__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__111__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__111__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__111__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__111__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [0U][1U]);
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__112__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__112__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__112__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__112__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__112__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__113__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__113__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__113__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__113__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__113__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__113__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__113__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__113__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__113__vec_b 
                    = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [1U][1U]);
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__113__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__113__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__113__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__113__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__113__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][1U]);
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__114__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__114__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__114__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__114__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__114__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][1U]);
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__115__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__115__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__115__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__115__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__115__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__162__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__162__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__162__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__162__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__162__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__162__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__162__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__162__d)));
    __Vfunc_aes_mul_gf2p2__162__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__162__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__162__d)));
    __Vfunc_aes_mul_gf2p2__162__f = ((((IData)(__Vfunc_aes_mul_gf2p2__162__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__162__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__162__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__162__b)));
    __Vfunc_aes_mul_gf2p2__162__Vfuncout = __Vfunc_aes_mul_gf2p2__162__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__162__Vfuncout;
    __Vfunc_aes_mul_gf2p2__163__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__163__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__163__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__163__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__163__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__163__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__163__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__163__d)));
    __Vfunc_aes_mul_gf2p2__163__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__163__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__163__d)));
    __Vfunc_aes_mul_gf2p2__163__f = ((((IData)(__Vfunc_aes_mul_gf2p2__163__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__163__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__163__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__163__b)));
    __Vfunc_aes_mul_gf2p2__163__Vfuncout = __Vfunc_aes_mul_gf2p2__163__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__163__Vfuncout;
    __Vfunc_aes_mul_gf2p4__142__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__142__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__142__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12912378741540516051ull);
    __Vfunc_aes_mul_gf2p2__143__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__142__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__143__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__142__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__143__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__143__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__143__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__143__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__143__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__143__d)));
    __Vfunc_aes_mul_gf2p2__143__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__143__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__143__d)));
    __Vfunc_aes_mul_gf2p2__143__f = ((((IData)(__Vfunc_aes_mul_gf2p2__143__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__143__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__143__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__143__b)));
    __Vfunc_aes_mul_gf2p2__143__Vfuncout = __Vfunc_aes_mul_gf2p2__143__f;
    __Vfunc_aes_mul_gf2p4__142__a = __Vfunc_aes_mul_gf2p2__143__Vfuncout;
    __Vfunc_aes_mul_gf2p2__144__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__142__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__142__delta)));
    __Vfunc_aes_mul_gf2p2__144__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__142__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__142__gamma)));
    __Vfunc_aes_mul_gf2p2__144__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__144__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__144__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__144__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__144__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__144__d)));
    __Vfunc_aes_mul_gf2p2__144__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__144__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__144__d)));
    __Vfunc_aes_mul_gf2p2__144__f = ((((IData)(__Vfunc_aes_mul_gf2p2__144__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__144__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__144__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__144__b)));
    __Vfunc_aes_mul_gf2p2__144__Vfuncout = __Vfunc_aes_mul_gf2p2__144__f;
    __Vfunc_aes_mul_gf2p4__142__b = __Vfunc_aes_mul_gf2p2__144__Vfuncout;
    __Vfunc_aes_mul_gf2p2__145__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__142__delta));
    __Vfunc_aes_mul_gf2p2__145__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__142__gamma));
    __Vfunc_aes_mul_gf2p2__145__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__145__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__145__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__145__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__145__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__145__d)));
    __Vfunc_aes_mul_gf2p2__145__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__145__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__145__d)));
    __Vfunc_aes_mul_gf2p2__145__f = ((((IData)(__Vfunc_aes_mul_gf2p2__145__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__145__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__145__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__145__b)));
    __Vfunc_aes_mul_gf2p2__145__Vfuncout = __Vfunc_aes_mul_gf2p2__145__f;
    __Vfunc_aes_mul_gf2p4__142__c = __Vfunc_aes_mul_gf2p2__145__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__142__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__142__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__146__g 
                        = __Vfunc_aes_mul_gf2p4__142__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__146__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__146__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__146__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__146__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__146__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__146__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__142__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__142__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__147__g 
                        = __Vfunc_aes_mul_gf2p4__142__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__147__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__147__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__147__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__147__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__147__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__147__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__142__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__142__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__142__Vfuncout;
    __Vfunc_aes_mul_gf2p4__148__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__148__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__148__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7290092109452729063ull);
    __Vfunc_aes_mul_gf2p2__149__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__148__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__149__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__148__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__149__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__149__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__149__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__149__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__149__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__149__d)));
    __Vfunc_aes_mul_gf2p2__149__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__149__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__149__d)));
    __Vfunc_aes_mul_gf2p2__149__f = ((((IData)(__Vfunc_aes_mul_gf2p2__149__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__149__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__149__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__149__b)));
    __Vfunc_aes_mul_gf2p2__149__Vfuncout = __Vfunc_aes_mul_gf2p2__149__f;
    __Vfunc_aes_mul_gf2p4__148__a = __Vfunc_aes_mul_gf2p2__149__Vfuncout;
    __Vfunc_aes_mul_gf2p2__150__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__148__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__148__delta)));
    __Vfunc_aes_mul_gf2p2__150__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__148__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__148__gamma)));
    __Vfunc_aes_mul_gf2p2__150__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__150__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__150__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__150__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__150__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__150__d)));
    __Vfunc_aes_mul_gf2p2__150__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__150__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__150__d)));
    __Vfunc_aes_mul_gf2p2__150__f = ((((IData)(__Vfunc_aes_mul_gf2p2__150__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__150__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__150__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__150__b)));
    __Vfunc_aes_mul_gf2p2__150__Vfuncout = __Vfunc_aes_mul_gf2p2__150__f;
    __Vfunc_aes_mul_gf2p4__148__b = __Vfunc_aes_mul_gf2p2__150__Vfuncout;
    __Vfunc_aes_mul_gf2p2__151__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__148__delta));
    __Vfunc_aes_mul_gf2p2__151__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__148__gamma));
    __Vfunc_aes_mul_gf2p2__151__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__151__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__151__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__151__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__151__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__151__d)));
    __Vfunc_aes_mul_gf2p2__151__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__151__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__151__d)));
    __Vfunc_aes_mul_gf2p2__151__f = ((((IData)(__Vfunc_aes_mul_gf2p2__151__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__151__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__151__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__151__b)));
    __Vfunc_aes_mul_gf2p2__151__Vfuncout = __Vfunc_aes_mul_gf2p2__151__f;
    __Vfunc_aes_mul_gf2p4__148__c = __Vfunc_aes_mul_gf2p2__151__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__148__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__148__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__152__g 
                        = __Vfunc_aes_mul_gf2p4__148__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__152__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__152__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__152__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__152__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__152__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__152__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__148__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__148__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__153__g 
                        = __Vfunc_aes_mul_gf2p4__148__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__153__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__153__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__153__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__153__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__153__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__153__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__148__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__148__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__148__Vfuncout;
    __Vfunc_aes_mul_gf2p2__166__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__166__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__166__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__166__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__166__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__166__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__166__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__166__d)));
    __Vfunc_aes_mul_gf2p2__166__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__166__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__166__d)));
    __Vfunc_aes_mul_gf2p2__166__f = ((((IData)(__Vfunc_aes_mul_gf2p2__166__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__166__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__166__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__166__b)));
    __Vfunc_aes_mul_gf2p2__166__Vfuncout = __Vfunc_aes_mul_gf2p2__166__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__166__Vfuncout;
    __Vfunc_aes_mul_gf2p2__167__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__167__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__167__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__167__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__167__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__167__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__167__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__167__d)));
    __Vfunc_aes_mul_gf2p2__167__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__167__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__167__d)));
    __Vfunc_aes_mul_gf2p2__167__f = ((((IData)(__Vfunc_aes_mul_gf2p2__167__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__167__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__167__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__167__b)));
    __Vfunc_aes_mul_gf2p2__167__Vfuncout = __Vfunc_aes_mul_gf2p2__167__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__167__Vfuncout;
    __Vfunc_aes_mul_gf2p2__170__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__170__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__170__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__170__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__170__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__170__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__170__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__170__d)));
    __Vfunc_aes_mul_gf2p2__170__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__170__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__170__d)));
    __Vfunc_aes_mul_gf2p2__170__f = ((((IData)(__Vfunc_aes_mul_gf2p2__170__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__170__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__170__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__170__b)));
    __Vfunc_aes_mul_gf2p2__170__Vfuncout = __Vfunc_aes_mul_gf2p2__170__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__170__Vfuncout;
    __Vfunc_aes_mul_gf2p2__171__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__171__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__171__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__171__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__171__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__171__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__171__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__171__d)));
    __Vfunc_aes_mul_gf2p2__171__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__171__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__171__d)));
    __Vfunc_aes_mul_gf2p2__171__f = ((((IData)(__Vfunc_aes_mul_gf2p2__171__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__171__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__171__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__171__b)));
    __Vfunc_aes_mul_gf2p2__171__Vfuncout = __Vfunc_aes_mul_gf2p2__171__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__171__Vfuncout;
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__116__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__116__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__116__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__116__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__116__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__117__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__117__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__117__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__117__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__117__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__118__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__118__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__118__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__118__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__118__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__119__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__119__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__119__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__119__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__119__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__119__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__120__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__120__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__120__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__120__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__120__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__121__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__121__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__121__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__121__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__121__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma)));
    __Vfunc_aes_square_gf2p2__123__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__122__gamma));
    __Vfunc_aes_square_gf2p2__123__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__123__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__123__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__123__Vfuncout = __Vfunc_aes_square_gf2p2__123__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__b = __Vfunc_aes_square_gf2p2__123__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__124__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__122__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__124__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__124__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__124__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__124__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__124__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__124__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__125__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__122__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__125__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__125__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__125__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__125__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__125__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__125__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__122__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__122__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__122__Vfuncout;
    __Vfunc_aes_mul_gf2p4__130__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__139__03a112__KET__);
    __Vfunc_aes_mul_gf2p4__130__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__130__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4105625094883367263ull);
    __Vfunc_aes_mul_gf2p2__131__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__130__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__131__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__130__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__131__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__131__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__131__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__131__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__131__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__131__d)));
    __Vfunc_aes_mul_gf2p2__131__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__131__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__131__d)));
    __Vfunc_aes_mul_gf2p2__131__f = ((((IData)(__Vfunc_aes_mul_gf2p2__131__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__131__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__131__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__131__b)));
    __Vfunc_aes_mul_gf2p2__131__Vfuncout = __Vfunc_aes_mul_gf2p2__131__f;
    __Vfunc_aes_mul_gf2p4__130__a = __Vfunc_aes_mul_gf2p2__131__Vfuncout;
    __Vfunc_aes_mul_gf2p2__132__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__130__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__130__delta)));
    __Vfunc_aes_mul_gf2p2__132__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__130__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__130__gamma)));
    __Vfunc_aes_mul_gf2p2__132__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__132__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__132__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__132__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__132__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__132__d)));
    __Vfunc_aes_mul_gf2p2__132__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__132__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__132__d)));
    __Vfunc_aes_mul_gf2p2__132__f = ((((IData)(__Vfunc_aes_mul_gf2p2__132__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__132__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__132__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__132__b)));
    __Vfunc_aes_mul_gf2p2__132__Vfuncout = __Vfunc_aes_mul_gf2p2__132__f;
    __Vfunc_aes_mul_gf2p4__130__b = __Vfunc_aes_mul_gf2p2__132__Vfuncout;
    __Vfunc_aes_mul_gf2p2__133__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__130__delta));
    __Vfunc_aes_mul_gf2p2__133__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__130__gamma));
    __Vfunc_aes_mul_gf2p2__133__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__133__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__133__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__133__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__133__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__133__d)));
    __Vfunc_aes_mul_gf2p2__133__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__133__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__133__d)));
    __Vfunc_aes_mul_gf2p2__133__f = ((((IData)(__Vfunc_aes_mul_gf2p2__133__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__133__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__133__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__133__b)));
    __Vfunc_aes_mul_gf2p2__133__Vfuncout = __Vfunc_aes_mul_gf2p2__133__f;
    __Vfunc_aes_mul_gf2p4__130__c = __Vfunc_aes_mul_gf2p2__133__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__130__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__130__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__134__g 
                        = __Vfunc_aes_mul_gf2p4__130__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__134__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__134__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__134__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__134__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__134__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__134__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__130__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__130__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__135__g 
                        = __Vfunc_aes_mul_gf2p4__130__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__135__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__135__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__135__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__135__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__135__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__135__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__130__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__130__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__130__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma)));
    __Vfunc_aes_square_gf2p2__127__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__126__gamma));
    __Vfunc_aes_square_gf2p2__127__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__127__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__127__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__127__Vfuncout = __Vfunc_aes_square_gf2p2__127__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__b = __Vfunc_aes_square_gf2p2__127__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__128__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__126__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__128__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__128__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__128__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__128__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__128__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__128__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__129__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__126__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__129__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__129__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__129__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__129__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__129__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__129__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__126__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__126__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__126__Vfuncout;
    __Vfunc_aes_mul_gf2p4__136__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__139__03a112__KET__);
    __Vfunc_aes_mul_gf2p4__136__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__136__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4499806455303686971ull);
    __Vfunc_aes_mul_gf2p2__137__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__136__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__137__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__136__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__137__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__137__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__137__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__137__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__137__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__137__d)));
    __Vfunc_aes_mul_gf2p2__137__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__137__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__137__d)));
    __Vfunc_aes_mul_gf2p2__137__f = ((((IData)(__Vfunc_aes_mul_gf2p2__137__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__137__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__137__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__137__b)));
    __Vfunc_aes_mul_gf2p2__137__Vfuncout = __Vfunc_aes_mul_gf2p2__137__f;
    __Vfunc_aes_mul_gf2p4__136__a = __Vfunc_aes_mul_gf2p2__137__Vfuncout;
    __Vfunc_aes_mul_gf2p2__138__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__136__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__136__delta)));
    __Vfunc_aes_mul_gf2p2__138__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__136__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__136__gamma)));
    __Vfunc_aes_mul_gf2p2__138__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__138__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__138__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__138__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__138__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__138__d)));
    __Vfunc_aes_mul_gf2p2__138__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__138__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__138__d)));
    __Vfunc_aes_mul_gf2p2__138__f = ((((IData)(__Vfunc_aes_mul_gf2p2__138__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__138__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__138__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__138__b)));
    __Vfunc_aes_mul_gf2p2__138__Vfuncout = __Vfunc_aes_mul_gf2p2__138__f;
    __Vfunc_aes_mul_gf2p4__136__b = __Vfunc_aes_mul_gf2p2__138__Vfuncout;
    __Vfunc_aes_mul_gf2p2__139__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__136__delta));
    __Vfunc_aes_mul_gf2p2__139__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__136__gamma));
    __Vfunc_aes_mul_gf2p2__139__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__139__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__139__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__139__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__139__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__139__d)));
    __Vfunc_aes_mul_gf2p2__139__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__139__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__139__d)));
    __Vfunc_aes_mul_gf2p2__139__f = ((((IData)(__Vfunc_aes_mul_gf2p2__139__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__139__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__139__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__139__b)));
    __Vfunc_aes_mul_gf2p2__139__Vfuncout = __Vfunc_aes_mul_gf2p2__139__f;
    __Vfunc_aes_mul_gf2p4__136__c = __Vfunc_aes_mul_gf2p2__139__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__136__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__136__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__140__g 
                        = __Vfunc_aes_mul_gf2p4__136__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__140__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__140__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__140__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__140__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__140__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__140__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__136__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__136__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__141__g 
                        = __Vfunc_aes_mul_gf2p4__136__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__141__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__141__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__141__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__141__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__141__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__141__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__136__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__136__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__136__Vfuncout;
    __Vfunc_aes_square_gf2p2__158__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                              ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                 >> 2U)));
    __Vfunc_aes_square_gf2p2__158__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__158__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__158__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__158__Vfuncout = __Vfunc_aes_square_gf2p2__158__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__158__Vfuncout;
    __Vfunc_aes_square_gf2p2__159__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__159__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__159__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__159__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__159__Vfuncout = __Vfunc_aes_square_gf2p2__159__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__159__Vfuncout;
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
    __Vfunc_aes_mul_gf2p2__168__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__139__03a112__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__168__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__168__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__168__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__168__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__168__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__168__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__168__d)));
    __Vfunc_aes_mul_gf2p2__168__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__168__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__168__d)));
    __Vfunc_aes_mul_gf2p2__168__f = ((((IData)(__Vfunc_aes_mul_gf2p2__168__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__168__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__168__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__168__b)));
    __Vfunc_aes_mul_gf2p2__168__Vfuncout = __Vfunc_aes_mul_gf2p2__168__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__168__Vfuncout;
    __Vfunc_aes_mul_gf2p2__169__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__139__03a112__KET__ 
                                           >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__169__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__169__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__169__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__169__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__169__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__169__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__169__d)));
    __Vfunc_aes_mul_gf2p2__169__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__169__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__169__d)));
    __Vfunc_aes_mul_gf2p2__169__f = ((((IData)(__Vfunc_aes_mul_gf2p2__169__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__169__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__169__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__169__b)));
    __Vfunc_aes_mul_gf2p2__169__Vfuncout = __Vfunc_aes_mul_gf2p2__169__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__169__Vfuncout;
    __Vfunc_aes_square_gf2p2__155__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__155__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__155__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__155__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__155__Vfuncout = __Vfunc_aes_square_gf2p2__155__d;
    __Vfunc_aes_scale_omega2_gf2p2__154__g = __Vfunc_aes_square_gf2p2__155__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__154__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__154__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__154__g)));
    __Vfunc_aes_scale_omega2_gf2p2__154__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__154__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__154__Vfuncout;
    __Vfunc_aes_mul_gf2p2__160__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__139__03a112__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__160__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__160__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__160__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__160__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__160__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__160__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__160__d)));
    __Vfunc_aes_mul_gf2p2__160__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__160__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__160__d)));
    __Vfunc_aes_mul_gf2p2__160__f = ((((IData)(__Vfunc_aes_mul_gf2p2__160__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__160__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__160__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__160__b)));
    __Vfunc_aes_mul_gf2p2__160__Vfuncout = __Vfunc_aes_mul_gf2p2__160__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__160__Vfuncout;
    __Vfunc_aes_square_gf2p2__157__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__157__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__157__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__157__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__157__Vfuncout = __Vfunc_aes_square_gf2p2__157__d;
    __Vfunc_aes_scale_omega2_gf2p2__156__g = __Vfunc_aes_square_gf2p2__157__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__156__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__156__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__156__g)));
    __Vfunc_aes_scale_omega2_gf2p2__156__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__156__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__156__Vfuncout;
    __Vfunc_aes_mul_gf2p2__161__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__139__03a112__KET__ 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__161__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__161__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__161__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__161__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__161__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__161__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__161__d)));
    __Vfunc_aes_mul_gf2p2__161__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__161__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__161__d)));
    __Vfunc_aes_mul_gf2p2__161__f = ((((IData)(__Vfunc_aes_mul_gf2p2__161__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__161__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__161__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__161__b)));
    __Vfunc_aes_mul_gf2p2__161__Vfuncout = __Vfunc_aes_mul_gf2p2__161__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__161__Vfuncout;
    __Vfunc_aes_mul_gf2p4__172__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__172__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__172__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13129718376983005867ull);
    __Vfunc_aes_mul_gf2p2__173__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__172__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__173__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__172__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__173__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__173__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__173__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__173__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__173__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__173__d)));
    __Vfunc_aes_mul_gf2p2__173__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__173__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__173__d)));
    __Vfunc_aes_mul_gf2p2__173__f = ((((IData)(__Vfunc_aes_mul_gf2p2__173__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__173__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__173__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__173__b)));
    __Vfunc_aes_mul_gf2p2__173__Vfuncout = __Vfunc_aes_mul_gf2p2__173__f;
    __Vfunc_aes_mul_gf2p4__172__a = __Vfunc_aes_mul_gf2p2__173__Vfuncout;
    __Vfunc_aes_mul_gf2p2__174__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__172__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__172__delta)));
    __Vfunc_aes_mul_gf2p2__174__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__172__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__172__gamma)));
    __Vfunc_aes_mul_gf2p2__174__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__174__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__174__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__174__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__174__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__174__d)));
    __Vfunc_aes_mul_gf2p2__174__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__174__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__174__d)));
    __Vfunc_aes_mul_gf2p2__174__f = ((((IData)(__Vfunc_aes_mul_gf2p2__174__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__174__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__174__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__174__b)));
    __Vfunc_aes_mul_gf2p2__174__Vfuncout = __Vfunc_aes_mul_gf2p2__174__f;
    __Vfunc_aes_mul_gf2p4__172__b = __Vfunc_aes_mul_gf2p2__174__Vfuncout;
    __Vfunc_aes_mul_gf2p2__175__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__172__delta));
    __Vfunc_aes_mul_gf2p2__175__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__172__gamma));
    __Vfunc_aes_mul_gf2p2__175__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__175__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__175__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__175__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__175__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__175__d)));
    __Vfunc_aes_mul_gf2p2__175__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__175__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__175__d)));
    __Vfunc_aes_mul_gf2p2__175__f = ((((IData)(__Vfunc_aes_mul_gf2p2__175__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__175__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__175__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__175__b)));
    __Vfunc_aes_mul_gf2p2__175__Vfuncout = __Vfunc_aes_mul_gf2p2__175__f;
    __Vfunc_aes_mul_gf2p4__172__c = __Vfunc_aes_mul_gf2p2__175__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__172__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__172__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__176__g 
                        = __Vfunc_aes_mul_gf2p4__172__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__176__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__176__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__176__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__176__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__176__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__176__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__172__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__172__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__177__g 
                        = __Vfunc_aes_mul_gf2p4__172__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__177__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__177__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__177__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__177__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__177__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__177__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__172__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__172__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__172__Vfuncout;
    __Vfunc_aes_mul_gf2p4__190__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    __Vfunc_aes_mul_gf2p4__190__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__190__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3489895653480465674ull);
    __Vfunc_aes_mul_gf2p2__191__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__190__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__191__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__190__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__191__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__191__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__191__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__191__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__191__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__191__d)));
    __Vfunc_aes_mul_gf2p2__191__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__191__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__191__d)));
    __Vfunc_aes_mul_gf2p2__191__f = ((((IData)(__Vfunc_aes_mul_gf2p2__191__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__191__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__191__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__191__b)));
    __Vfunc_aes_mul_gf2p2__191__Vfuncout = __Vfunc_aes_mul_gf2p2__191__f;
    __Vfunc_aes_mul_gf2p4__190__a = __Vfunc_aes_mul_gf2p2__191__Vfuncout;
    __Vfunc_aes_mul_gf2p2__192__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__190__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__190__delta)));
    __Vfunc_aes_mul_gf2p2__192__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__190__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__190__gamma)));
    __Vfunc_aes_mul_gf2p2__192__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__192__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__192__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__192__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__192__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__192__d)));
    __Vfunc_aes_mul_gf2p2__192__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__192__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__192__d)));
    __Vfunc_aes_mul_gf2p2__192__f = ((((IData)(__Vfunc_aes_mul_gf2p2__192__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__192__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__192__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__192__b)));
    __Vfunc_aes_mul_gf2p2__192__Vfuncout = __Vfunc_aes_mul_gf2p2__192__f;
    __Vfunc_aes_mul_gf2p4__190__b = __Vfunc_aes_mul_gf2p2__192__Vfuncout;
    __Vfunc_aes_mul_gf2p2__193__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__190__delta));
    __Vfunc_aes_mul_gf2p2__193__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__190__gamma));
    __Vfunc_aes_mul_gf2p2__193__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__193__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__193__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__193__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__193__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__193__d)));
    __Vfunc_aes_mul_gf2p2__193__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__193__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__193__d)));
    __Vfunc_aes_mul_gf2p2__193__f = ((((IData)(__Vfunc_aes_mul_gf2p2__193__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__193__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__193__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__193__b)));
    __Vfunc_aes_mul_gf2p2__193__Vfuncout = __Vfunc_aes_mul_gf2p2__193__f;
    __Vfunc_aes_mul_gf2p4__190__c = __Vfunc_aes_mul_gf2p2__193__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__190__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__190__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__194__g 
                        = __Vfunc_aes_mul_gf2p4__190__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__194__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__194__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__194__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__194__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__194__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__194__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__190__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__190__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__195__g 
                        = __Vfunc_aes_mul_gf2p4__190__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__195__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__195__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__195__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__195__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__195__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__195__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__190__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__190__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__190__Vfuncout;
    __Vfunc_aes_mul_gf2p4__196__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p4__196__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__196__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11594460738695302529ull);
    __Vfunc_aes_mul_gf2p2__197__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__196__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__197__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__196__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__197__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__197__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__197__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__197__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__197__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__197__d)));
    __Vfunc_aes_mul_gf2p2__197__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__197__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__197__d)));
    __Vfunc_aes_mul_gf2p2__197__f = ((((IData)(__Vfunc_aes_mul_gf2p2__197__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__197__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__197__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__197__b)));
    __Vfunc_aes_mul_gf2p2__197__Vfuncout = __Vfunc_aes_mul_gf2p2__197__f;
    __Vfunc_aes_mul_gf2p4__196__a = __Vfunc_aes_mul_gf2p2__197__Vfuncout;
    __Vfunc_aes_mul_gf2p2__198__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__196__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__196__delta)));
    __Vfunc_aes_mul_gf2p2__198__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__196__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__196__gamma)));
    __Vfunc_aes_mul_gf2p2__198__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__198__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__198__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__198__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__198__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__198__d)));
    __Vfunc_aes_mul_gf2p2__198__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__198__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__198__d)));
    __Vfunc_aes_mul_gf2p2__198__f = ((((IData)(__Vfunc_aes_mul_gf2p2__198__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__198__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__198__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__198__b)));
    __Vfunc_aes_mul_gf2p2__198__Vfuncout = __Vfunc_aes_mul_gf2p2__198__f;
    __Vfunc_aes_mul_gf2p4__196__b = __Vfunc_aes_mul_gf2p2__198__Vfuncout;
    __Vfunc_aes_mul_gf2p2__199__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__196__delta));
    __Vfunc_aes_mul_gf2p2__199__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__196__gamma));
    __Vfunc_aes_mul_gf2p2__199__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__199__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__199__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__199__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__199__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__199__d)));
    __Vfunc_aes_mul_gf2p2__199__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__199__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__199__d)));
    __Vfunc_aes_mul_gf2p2__199__f = ((((IData)(__Vfunc_aes_mul_gf2p2__199__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__199__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__199__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__199__b)));
    __Vfunc_aes_mul_gf2p2__199__Vfuncout = __Vfunc_aes_mul_gf2p2__199__f;
    __Vfunc_aes_mul_gf2p4__196__c = __Vfunc_aes_mul_gf2p2__199__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__196__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__196__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__200__g 
                        = __Vfunc_aes_mul_gf2p4__196__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__200__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__200__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__200__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__200__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__200__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__200__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__196__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__196__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__201__g 
                        = __Vfunc_aes_mul_gf2p4__196__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__201__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__201__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__201__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__201__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__201__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__201__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__196__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__196__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__196__Vfuncout;
    __Vfunc_aes_mul_gf2p4__208__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__208__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__208__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7312335343835367687ull);
    __Vfunc_aes_mul_gf2p2__209__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__208__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__209__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__208__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__209__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__209__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__209__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__209__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__209__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__209__d)));
    __Vfunc_aes_mul_gf2p2__209__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__209__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__209__d)));
    __Vfunc_aes_mul_gf2p2__209__f = ((((IData)(__Vfunc_aes_mul_gf2p2__209__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__209__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__209__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__209__b)));
    __Vfunc_aes_mul_gf2p2__209__Vfuncout = __Vfunc_aes_mul_gf2p2__209__f;
    __Vfunc_aes_mul_gf2p4__208__a = __Vfunc_aes_mul_gf2p2__209__Vfuncout;
    __Vfunc_aes_mul_gf2p2__210__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__208__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__208__delta)));
    __Vfunc_aes_mul_gf2p2__210__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__208__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__208__gamma)));
    __Vfunc_aes_mul_gf2p2__210__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__210__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__210__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__210__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__210__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__210__d)));
    __Vfunc_aes_mul_gf2p2__210__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__210__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__210__d)));
    __Vfunc_aes_mul_gf2p2__210__f = ((((IData)(__Vfunc_aes_mul_gf2p2__210__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__210__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__210__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__210__b)));
    __Vfunc_aes_mul_gf2p2__210__Vfuncout = __Vfunc_aes_mul_gf2p2__210__f;
    __Vfunc_aes_mul_gf2p4__208__b = __Vfunc_aes_mul_gf2p2__210__Vfuncout;
    __Vfunc_aes_mul_gf2p2__211__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__208__delta));
    __Vfunc_aes_mul_gf2p2__211__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__208__gamma));
    __Vfunc_aes_mul_gf2p2__211__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__211__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__211__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__211__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__211__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__211__d)));
    __Vfunc_aes_mul_gf2p2__211__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__211__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__211__d)));
    __Vfunc_aes_mul_gf2p2__211__f = ((((IData)(__Vfunc_aes_mul_gf2p2__211__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__211__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__211__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__211__b)));
    __Vfunc_aes_mul_gf2p2__211__Vfuncout = __Vfunc_aes_mul_gf2p2__211__f;
    __Vfunc_aes_mul_gf2p4__208__c = __Vfunc_aes_mul_gf2p2__211__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__208__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__208__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__212__g 
                        = __Vfunc_aes_mul_gf2p4__208__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__212__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__212__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__212__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__212__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__212__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__212__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__208__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__208__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__213__g 
                        = __Vfunc_aes_mul_gf2p4__208__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__213__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__213__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__213__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__213__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__213__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__213__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__208__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__208__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__208__Vfuncout;
    __Vfunc_aes_mul_gf2p4__178__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__178__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__178__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13334189600070678420ull);
    __Vfunc_aes_mul_gf2p2__179__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__178__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__179__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__178__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__179__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__179__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__179__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__179__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__179__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__179__d)));
    __Vfunc_aes_mul_gf2p2__179__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__179__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__179__d)));
    __Vfunc_aes_mul_gf2p2__179__f = ((((IData)(__Vfunc_aes_mul_gf2p2__179__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__179__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__179__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__179__b)));
    __Vfunc_aes_mul_gf2p2__179__Vfuncout = __Vfunc_aes_mul_gf2p2__179__f;
    __Vfunc_aes_mul_gf2p4__178__a = __Vfunc_aes_mul_gf2p2__179__Vfuncout;
    __Vfunc_aes_mul_gf2p2__180__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__178__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__178__delta)));
    __Vfunc_aes_mul_gf2p2__180__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__178__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__178__gamma)));
    __Vfunc_aes_mul_gf2p2__180__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__180__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__180__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__180__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__180__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__180__d)));
    __Vfunc_aes_mul_gf2p2__180__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__180__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__180__d)));
    __Vfunc_aes_mul_gf2p2__180__f = ((((IData)(__Vfunc_aes_mul_gf2p2__180__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__180__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__180__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__180__b)));
    __Vfunc_aes_mul_gf2p2__180__Vfuncout = __Vfunc_aes_mul_gf2p2__180__f;
    __Vfunc_aes_mul_gf2p4__178__b = __Vfunc_aes_mul_gf2p2__180__Vfuncout;
    __Vfunc_aes_mul_gf2p2__181__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__178__delta));
    __Vfunc_aes_mul_gf2p2__181__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__178__gamma));
    __Vfunc_aes_mul_gf2p2__181__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__181__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__181__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__181__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__181__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__181__d)));
    __Vfunc_aes_mul_gf2p2__181__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__181__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__181__d)));
    __Vfunc_aes_mul_gf2p2__181__f = ((((IData)(__Vfunc_aes_mul_gf2p2__181__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__181__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__181__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__181__b)));
    __Vfunc_aes_mul_gf2p2__181__Vfuncout = __Vfunc_aes_mul_gf2p2__181__f;
    __Vfunc_aes_mul_gf2p4__178__c = __Vfunc_aes_mul_gf2p2__181__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__178__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__178__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__182__g 
                        = __Vfunc_aes_mul_gf2p4__178__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__182__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__182__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__182__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__182__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__182__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__182__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__178__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__178__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__183__g 
                        = __Vfunc_aes_mul_gf2p4__178__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__183__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__183__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__183__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__183__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__183__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__183__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__178__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__178__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__178__Vfuncout;
    __Vfunc_aes_mul_gf2p4__184__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__184__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__184__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8890337853145670827ull);
    __Vfunc_aes_mul_gf2p2__185__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__184__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__185__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__184__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__185__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__185__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__185__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__185__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__185__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__185__d)));
    __Vfunc_aes_mul_gf2p2__185__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__185__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__185__d)));
    __Vfunc_aes_mul_gf2p2__185__f = ((((IData)(__Vfunc_aes_mul_gf2p2__185__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__185__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__185__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__185__b)));
    __Vfunc_aes_mul_gf2p2__185__Vfuncout = __Vfunc_aes_mul_gf2p2__185__f;
    __Vfunc_aes_mul_gf2p4__184__a = __Vfunc_aes_mul_gf2p2__185__Vfuncout;
    __Vfunc_aes_mul_gf2p2__186__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__184__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__184__delta)));
    __Vfunc_aes_mul_gf2p2__186__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__184__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__184__gamma)));
    __Vfunc_aes_mul_gf2p2__186__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__186__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__186__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__186__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__186__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__186__d)));
    __Vfunc_aes_mul_gf2p2__186__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__186__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__186__d)));
    __Vfunc_aes_mul_gf2p2__186__f = ((((IData)(__Vfunc_aes_mul_gf2p2__186__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__186__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__186__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__186__b)));
    __Vfunc_aes_mul_gf2p2__186__Vfuncout = __Vfunc_aes_mul_gf2p2__186__f;
    __Vfunc_aes_mul_gf2p4__184__b = __Vfunc_aes_mul_gf2p2__186__Vfuncout;
    __Vfunc_aes_mul_gf2p2__187__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__184__delta));
    __Vfunc_aes_mul_gf2p2__187__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__184__gamma));
    __Vfunc_aes_mul_gf2p2__187__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__187__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__187__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__187__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__187__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__187__d)));
    __Vfunc_aes_mul_gf2p2__187__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__187__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__187__d)));
    __Vfunc_aes_mul_gf2p2__187__f = ((((IData)(__Vfunc_aes_mul_gf2p2__187__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__187__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__187__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__187__b)));
    __Vfunc_aes_mul_gf2p2__187__Vfuncout = __Vfunc_aes_mul_gf2p2__187__f;
    __Vfunc_aes_mul_gf2p4__184__c = __Vfunc_aes_mul_gf2p2__187__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__184__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__184__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__188__g 
                        = __Vfunc_aes_mul_gf2p4__184__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__188__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__188__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__188__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__188__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__188__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__188__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__184__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__184__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__189__g 
                        = __Vfunc_aes_mul_gf2p4__184__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__189__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__189__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__189__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__189__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__189__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__189__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__184__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__184__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__184__Vfuncout;
    __Vfunc_aes_mul_gf2p4__202__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__202__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__202__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6184476315314100538ull);
    __Vfunc_aes_mul_gf2p2__203__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__202__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__203__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__202__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__203__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__203__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__203__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__203__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__203__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__203__d)));
    __Vfunc_aes_mul_gf2p2__203__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__203__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__203__d)));
    __Vfunc_aes_mul_gf2p2__203__f = ((((IData)(__Vfunc_aes_mul_gf2p2__203__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__203__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__203__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__203__b)));
    __Vfunc_aes_mul_gf2p2__203__Vfuncout = __Vfunc_aes_mul_gf2p2__203__f;
    __Vfunc_aes_mul_gf2p4__202__a = __Vfunc_aes_mul_gf2p2__203__Vfuncout;
    __Vfunc_aes_mul_gf2p2__204__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__202__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__202__delta)));
    __Vfunc_aes_mul_gf2p2__204__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__202__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__202__gamma)));
    __Vfunc_aes_mul_gf2p2__204__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__204__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__204__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__204__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__204__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__204__d)));
    __Vfunc_aes_mul_gf2p2__204__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__204__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__204__d)));
    __Vfunc_aes_mul_gf2p2__204__f = ((((IData)(__Vfunc_aes_mul_gf2p2__204__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__204__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__204__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__204__b)));
    __Vfunc_aes_mul_gf2p2__204__Vfuncout = __Vfunc_aes_mul_gf2p2__204__f;
    __Vfunc_aes_mul_gf2p4__202__b = __Vfunc_aes_mul_gf2p2__204__Vfuncout;
    __Vfunc_aes_mul_gf2p2__205__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__202__delta));
    __Vfunc_aes_mul_gf2p2__205__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__202__gamma));
    __Vfunc_aes_mul_gf2p2__205__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__205__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__205__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__205__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__205__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__205__d)));
    __Vfunc_aes_mul_gf2p2__205__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__205__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__205__d)));
    __Vfunc_aes_mul_gf2p2__205__f = ((((IData)(__Vfunc_aes_mul_gf2p2__205__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__205__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__205__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__205__b)));
    __Vfunc_aes_mul_gf2p2__205__Vfuncout = __Vfunc_aes_mul_gf2p2__205__f;
    __Vfunc_aes_mul_gf2p4__202__c = __Vfunc_aes_mul_gf2p2__205__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__202__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__202__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__206__g 
                        = __Vfunc_aes_mul_gf2p4__202__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__206__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__206__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__206__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__206__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__206__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__206__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__202__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__202__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__207__g 
                        = __Vfunc_aes_mul_gf2p4__202__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__207__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__207__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__207__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__207__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__207__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__207__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__202__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__202__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__202__Vfuncout;
    __Vfunc_aes_mul_gf2p4__214__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__214__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__214__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12276119063195054082ull);
    __Vfunc_aes_mul_gf2p2__215__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__214__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__215__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__214__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__215__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__215__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__215__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__215__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__215__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__215__d)));
    __Vfunc_aes_mul_gf2p2__215__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__215__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__215__d)));
    __Vfunc_aes_mul_gf2p2__215__f = ((((IData)(__Vfunc_aes_mul_gf2p2__215__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__215__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__215__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__215__b)));
    __Vfunc_aes_mul_gf2p2__215__Vfuncout = __Vfunc_aes_mul_gf2p2__215__f;
    __Vfunc_aes_mul_gf2p4__214__a = __Vfunc_aes_mul_gf2p2__215__Vfuncout;
    __Vfunc_aes_mul_gf2p2__216__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__214__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__214__delta)));
    __Vfunc_aes_mul_gf2p2__216__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__214__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__214__gamma)));
    __Vfunc_aes_mul_gf2p2__216__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__216__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__216__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__216__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__216__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__216__d)));
    __Vfunc_aes_mul_gf2p2__216__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__216__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__216__d)));
    __Vfunc_aes_mul_gf2p2__216__f = ((((IData)(__Vfunc_aes_mul_gf2p2__216__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__216__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__216__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__216__b)));
    __Vfunc_aes_mul_gf2p2__216__Vfuncout = __Vfunc_aes_mul_gf2p2__216__f;
    __Vfunc_aes_mul_gf2p4__214__b = __Vfunc_aes_mul_gf2p2__216__Vfuncout;
    __Vfunc_aes_mul_gf2p2__217__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__214__delta));
    __Vfunc_aes_mul_gf2p2__217__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__214__gamma));
    __Vfunc_aes_mul_gf2p2__217__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__217__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__217__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__217__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__217__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__217__d)));
    __Vfunc_aes_mul_gf2p2__217__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__217__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__217__d)));
    __Vfunc_aes_mul_gf2p2__217__f = ((((IData)(__Vfunc_aes_mul_gf2p2__217__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__217__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__217__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__217__b)));
    __Vfunc_aes_mul_gf2p2__217__Vfuncout = __Vfunc_aes_mul_gf2p2__217__f;
    __Vfunc_aes_mul_gf2p4__214__c = __Vfunc_aes_mul_gf2p2__217__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__214__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__214__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__218__g 
                        = __Vfunc_aes_mul_gf2p4__214__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__218__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__218__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__218__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__218__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__218__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__218__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__214__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__214__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__219__g 
                        = __Vfunc_aes_mul_gf2p4__214__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__219__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__219__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__219__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__219__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__219__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__219__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__214__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__214__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__214__Vfuncout;
}

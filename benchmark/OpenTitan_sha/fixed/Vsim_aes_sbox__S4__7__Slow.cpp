// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__783__Vfuncout;
    __Vfunc_aes_square_gf2p2__783__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__783__g;
    __Vfunc_aes_square_gf2p2__783__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__783__d;
    __Vfunc_aes_square_gf2p2__783__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__787__Vfuncout;
    __Vfunc_aes_square_gf2p2__787__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__787__g;
    __Vfunc_aes_square_gf2p2__787__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__787__d;
    __Vfunc_aes_square_gf2p2__787__d = 0;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__802__Vfuncout;
    __Vfunc_aes_mul_gf2p4__802__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__802__gamma;
    __Vfunc_aes_mul_gf2p4__802__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__802__delta;
    __Vfunc_aes_mul_gf2p4__802__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__802__a;
    __Vfunc_aes_mul_gf2p4__802__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__802__b;
    __Vfunc_aes_mul_gf2p4__802__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__802__c;
    __Vfunc_aes_mul_gf2p4__802__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__803__Vfuncout;
    __Vfunc_aes_mul_gf2p2__803__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__803__g;
    __Vfunc_aes_mul_gf2p2__803__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__803__d;
    __Vfunc_aes_mul_gf2p2__803__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__803__f;
    __Vfunc_aes_mul_gf2p2__803__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__803__a;
    __Vfunc_aes_mul_gf2p2__803__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__803__b;
    __Vfunc_aes_mul_gf2p2__803__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__803__c;
    __Vfunc_aes_mul_gf2p2__803__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__804__Vfuncout;
    __Vfunc_aes_mul_gf2p2__804__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__804__g;
    __Vfunc_aes_mul_gf2p2__804__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__804__d;
    __Vfunc_aes_mul_gf2p2__804__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__804__f;
    __Vfunc_aes_mul_gf2p2__804__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__804__a;
    __Vfunc_aes_mul_gf2p2__804__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__804__b;
    __Vfunc_aes_mul_gf2p2__804__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__804__c;
    __Vfunc_aes_mul_gf2p2__804__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__805__Vfuncout;
    __Vfunc_aes_mul_gf2p2__805__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__805__g;
    __Vfunc_aes_mul_gf2p2__805__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__805__d;
    __Vfunc_aes_mul_gf2p2__805__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__805__f;
    __Vfunc_aes_mul_gf2p2__805__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__805__a;
    __Vfunc_aes_mul_gf2p2__805__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__805__b;
    __Vfunc_aes_mul_gf2p2__805__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__805__c;
    __Vfunc_aes_mul_gf2p2__805__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__808__Vfuncout;
    __Vfunc_aes_mul_gf2p4__808__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__808__gamma;
    __Vfunc_aes_mul_gf2p4__808__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__808__delta;
    __Vfunc_aes_mul_gf2p4__808__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__808__a;
    __Vfunc_aes_mul_gf2p4__808__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__808__b;
    __Vfunc_aes_mul_gf2p4__808__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__808__c;
    __Vfunc_aes_mul_gf2p4__808__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__809__Vfuncout;
    __Vfunc_aes_mul_gf2p2__809__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__809__g;
    __Vfunc_aes_mul_gf2p2__809__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__809__d;
    __Vfunc_aes_mul_gf2p2__809__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__809__f;
    __Vfunc_aes_mul_gf2p2__809__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__809__a;
    __Vfunc_aes_mul_gf2p2__809__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__809__b;
    __Vfunc_aes_mul_gf2p2__809__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__809__c;
    __Vfunc_aes_mul_gf2p2__809__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__810__Vfuncout;
    __Vfunc_aes_mul_gf2p2__810__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__810__g;
    __Vfunc_aes_mul_gf2p2__810__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__810__d;
    __Vfunc_aes_mul_gf2p2__810__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__810__f;
    __Vfunc_aes_mul_gf2p2__810__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__810__a;
    __Vfunc_aes_mul_gf2p2__810__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__810__b;
    __Vfunc_aes_mul_gf2p2__810__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__810__c;
    __Vfunc_aes_mul_gf2p2__810__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__811__Vfuncout;
    __Vfunc_aes_mul_gf2p2__811__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__811__g;
    __Vfunc_aes_mul_gf2p2__811__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__811__d;
    __Vfunc_aes_mul_gf2p2__811__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__811__f;
    __Vfunc_aes_mul_gf2p2__811__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__811__a;
    __Vfunc_aes_mul_gf2p2__811__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__811__b;
    __Vfunc_aes_mul_gf2p2__811__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__811__c;
    __Vfunc_aes_mul_gf2p2__811__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__814__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__814__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__814__g;
    __Vfunc_aes_scale_omega2_gf2p2__814__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__814__d;
    __Vfunc_aes_scale_omega2_gf2p2__814__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__815__Vfuncout;
    __Vfunc_aes_square_gf2p2__815__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__815__g;
    __Vfunc_aes_square_gf2p2__815__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__815__d;
    __Vfunc_aes_square_gf2p2__815__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__816__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__816__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__816__g;
    __Vfunc_aes_scale_omega2_gf2p2__816__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__816__d;
    __Vfunc_aes_scale_omega2_gf2p2__816__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__817__Vfuncout;
    __Vfunc_aes_square_gf2p2__817__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__817__g;
    __Vfunc_aes_square_gf2p2__817__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__817__d;
    __Vfunc_aes_square_gf2p2__817__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__818__Vfuncout;
    __Vfunc_aes_square_gf2p2__818__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__818__g;
    __Vfunc_aes_square_gf2p2__818__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__818__d;
    __Vfunc_aes_square_gf2p2__818__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__819__Vfuncout;
    __Vfunc_aes_square_gf2p2__819__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__819__g;
    __Vfunc_aes_square_gf2p2__819__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__819__d;
    __Vfunc_aes_square_gf2p2__819__d = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__822__Vfuncout;
    __Vfunc_aes_mul_gf2p2__822__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__822__g;
    __Vfunc_aes_mul_gf2p2__822__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__822__d;
    __Vfunc_aes_mul_gf2p2__822__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__822__f;
    __Vfunc_aes_mul_gf2p2__822__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__822__a;
    __Vfunc_aes_mul_gf2p2__822__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__822__b;
    __Vfunc_aes_mul_gf2p2__822__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__822__c;
    __Vfunc_aes_mul_gf2p2__822__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__823__Vfuncout;
    __Vfunc_aes_mul_gf2p2__823__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__823__g;
    __Vfunc_aes_mul_gf2p2__823__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__823__d;
    __Vfunc_aes_mul_gf2p2__823__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__823__f;
    __Vfunc_aes_mul_gf2p2__823__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__823__a;
    __Vfunc_aes_mul_gf2p2__823__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__823__b;
    __Vfunc_aes_mul_gf2p2__823__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__823__c;
    __Vfunc_aes_mul_gf2p2__823__c = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__826__Vfuncout;
    __Vfunc_aes_mul_gf2p2__826__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__826__g;
    __Vfunc_aes_mul_gf2p2__826__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__826__d;
    __Vfunc_aes_mul_gf2p2__826__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__826__f;
    __Vfunc_aes_mul_gf2p2__826__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__826__a;
    __Vfunc_aes_mul_gf2p2__826__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__826__b;
    __Vfunc_aes_mul_gf2p2__826__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__826__c;
    __Vfunc_aes_mul_gf2p2__826__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__827__Vfuncout;
    __Vfunc_aes_mul_gf2p2__827__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__827__g;
    __Vfunc_aes_mul_gf2p2__827__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__827__d;
    __Vfunc_aes_mul_gf2p2__827__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__827__f;
    __Vfunc_aes_mul_gf2p2__827__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__827__a;
    __Vfunc_aes_mul_gf2p2__827__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__827__b;
    __Vfunc_aes_mul_gf2p2__827__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__827__c;
    __Vfunc_aes_mul_gf2p2__827__c = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__830__Vfuncout;
    __Vfunc_aes_mul_gf2p2__830__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__830__g;
    __Vfunc_aes_mul_gf2p2__830__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__830__d;
    __Vfunc_aes_mul_gf2p2__830__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__830__f;
    __Vfunc_aes_mul_gf2p2__830__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__830__a;
    __Vfunc_aes_mul_gf2p2__830__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__830__b;
    __Vfunc_aes_mul_gf2p2__830__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__830__c;
    __Vfunc_aes_mul_gf2p2__830__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__831__Vfuncout;
    __Vfunc_aes_mul_gf2p2__831__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__831__g;
    __Vfunc_aes_mul_gf2p2__831__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__831__d;
    __Vfunc_aes_mul_gf2p2__831__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__831__f;
    __Vfunc_aes_mul_gf2p2__831__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__831__a;
    __Vfunc_aes_mul_gf2p2__831__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__831__b;
    __Vfunc_aes_mul_gf2p2__831__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__831__c;
    __Vfunc_aes_mul_gf2p2__831__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__832__Vfuncout;
    __Vfunc_aes_mul_gf2p4__832__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__832__gamma;
    __Vfunc_aes_mul_gf2p4__832__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__832__delta;
    __Vfunc_aes_mul_gf2p4__832__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__832__a;
    __Vfunc_aes_mul_gf2p4__832__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__832__b;
    __Vfunc_aes_mul_gf2p4__832__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__832__c;
    __Vfunc_aes_mul_gf2p4__832__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__833__Vfuncout;
    __Vfunc_aes_mul_gf2p2__833__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__833__g;
    __Vfunc_aes_mul_gf2p2__833__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__833__d;
    __Vfunc_aes_mul_gf2p2__833__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__833__f;
    __Vfunc_aes_mul_gf2p2__833__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__833__a;
    __Vfunc_aes_mul_gf2p2__833__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__833__b;
    __Vfunc_aes_mul_gf2p2__833__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__833__c;
    __Vfunc_aes_mul_gf2p2__833__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__834__Vfuncout;
    __Vfunc_aes_mul_gf2p2__834__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__834__g;
    __Vfunc_aes_mul_gf2p2__834__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__834__d;
    __Vfunc_aes_mul_gf2p2__834__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__834__f;
    __Vfunc_aes_mul_gf2p2__834__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__834__a;
    __Vfunc_aes_mul_gf2p2__834__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__834__b;
    __Vfunc_aes_mul_gf2p2__834__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__834__c;
    __Vfunc_aes_mul_gf2p2__834__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__835__Vfuncout;
    __Vfunc_aes_mul_gf2p2__835__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__835__g;
    __Vfunc_aes_mul_gf2p2__835__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__835__d;
    __Vfunc_aes_mul_gf2p2__835__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__835__f;
    __Vfunc_aes_mul_gf2p2__835__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__835__a;
    __Vfunc_aes_mul_gf2p2__835__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__835__b;
    __Vfunc_aes_mul_gf2p2__835__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__835__c;
    __Vfunc_aes_mul_gf2p2__835__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__838__Vfuncout;
    __Vfunc_aes_mul_gf2p4__838__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__838__gamma;
    __Vfunc_aes_mul_gf2p4__838__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__838__delta;
    __Vfunc_aes_mul_gf2p4__838__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__838__a;
    __Vfunc_aes_mul_gf2p4__838__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__838__b;
    __Vfunc_aes_mul_gf2p4__838__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__838__c;
    __Vfunc_aes_mul_gf2p4__838__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__839__Vfuncout;
    __Vfunc_aes_mul_gf2p2__839__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__839__g;
    __Vfunc_aes_mul_gf2p2__839__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__839__d;
    __Vfunc_aes_mul_gf2p2__839__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__839__f;
    __Vfunc_aes_mul_gf2p2__839__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__839__a;
    __Vfunc_aes_mul_gf2p2__839__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__839__b;
    __Vfunc_aes_mul_gf2p2__839__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__839__c;
    __Vfunc_aes_mul_gf2p2__839__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__840__Vfuncout;
    __Vfunc_aes_mul_gf2p2__840__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__840__g;
    __Vfunc_aes_mul_gf2p2__840__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__840__d;
    __Vfunc_aes_mul_gf2p2__840__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__840__f;
    __Vfunc_aes_mul_gf2p2__840__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__840__a;
    __Vfunc_aes_mul_gf2p2__840__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__840__b;
    __Vfunc_aes_mul_gf2p2__840__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__840__c;
    __Vfunc_aes_mul_gf2p2__840__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__841__Vfuncout;
    __Vfunc_aes_mul_gf2p2__841__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__841__g;
    __Vfunc_aes_mul_gf2p2__841__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__841__d;
    __Vfunc_aes_mul_gf2p2__841__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__841__f;
    __Vfunc_aes_mul_gf2p2__841__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__841__a;
    __Vfunc_aes_mul_gf2p2__841__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__841__b;
    __Vfunc_aes_mul_gf2p2__841__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__841__c;
    __Vfunc_aes_mul_gf2p2__841__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__844__Vfuncout;
    __Vfunc_aes_mul_gf2p4__844__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__844__gamma;
    __Vfunc_aes_mul_gf2p4__844__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__844__delta;
    __Vfunc_aes_mul_gf2p4__844__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__844__a;
    __Vfunc_aes_mul_gf2p4__844__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__844__b;
    __Vfunc_aes_mul_gf2p4__844__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__844__c;
    __Vfunc_aes_mul_gf2p4__844__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__845__Vfuncout;
    __Vfunc_aes_mul_gf2p2__845__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__845__g;
    __Vfunc_aes_mul_gf2p2__845__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__845__d;
    __Vfunc_aes_mul_gf2p2__845__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__845__f;
    __Vfunc_aes_mul_gf2p2__845__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__845__a;
    __Vfunc_aes_mul_gf2p2__845__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__845__b;
    __Vfunc_aes_mul_gf2p2__845__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__845__c;
    __Vfunc_aes_mul_gf2p2__845__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__846__Vfuncout;
    __Vfunc_aes_mul_gf2p2__846__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__846__g;
    __Vfunc_aes_mul_gf2p2__846__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__846__d;
    __Vfunc_aes_mul_gf2p2__846__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__846__f;
    __Vfunc_aes_mul_gf2p2__846__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__846__a;
    __Vfunc_aes_mul_gf2p2__846__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__846__b;
    __Vfunc_aes_mul_gf2p2__846__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__846__c;
    __Vfunc_aes_mul_gf2p2__846__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__847__Vfuncout;
    __Vfunc_aes_mul_gf2p2__847__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__847__g;
    __Vfunc_aes_mul_gf2p2__847__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__847__d;
    __Vfunc_aes_mul_gf2p2__847__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__847__f;
    __Vfunc_aes_mul_gf2p2__847__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__847__a;
    __Vfunc_aes_mul_gf2p2__847__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__847__b;
    __Vfunc_aes_mul_gf2p2__847__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__847__c;
    __Vfunc_aes_mul_gf2p2__847__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__850__Vfuncout;
    __Vfunc_aes_mul_gf2p4__850__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__850__gamma;
    __Vfunc_aes_mul_gf2p4__850__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__850__delta;
    __Vfunc_aes_mul_gf2p4__850__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__850__a;
    __Vfunc_aes_mul_gf2p4__850__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__850__b;
    __Vfunc_aes_mul_gf2p4__850__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__850__c;
    __Vfunc_aes_mul_gf2p4__850__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__851__Vfuncout;
    __Vfunc_aes_mul_gf2p2__851__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__851__g;
    __Vfunc_aes_mul_gf2p2__851__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__851__d;
    __Vfunc_aes_mul_gf2p2__851__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__851__f;
    __Vfunc_aes_mul_gf2p2__851__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__851__a;
    __Vfunc_aes_mul_gf2p2__851__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__851__b;
    __Vfunc_aes_mul_gf2p2__851__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__851__c;
    __Vfunc_aes_mul_gf2p2__851__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__852__Vfuncout;
    __Vfunc_aes_mul_gf2p2__852__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__852__g;
    __Vfunc_aes_mul_gf2p2__852__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__852__d;
    __Vfunc_aes_mul_gf2p2__852__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__852__f;
    __Vfunc_aes_mul_gf2p2__852__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__852__a;
    __Vfunc_aes_mul_gf2p2__852__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__852__b;
    __Vfunc_aes_mul_gf2p2__852__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__852__c;
    __Vfunc_aes_mul_gf2p2__852__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__853__Vfuncout;
    __Vfunc_aes_mul_gf2p2__853__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__853__g;
    __Vfunc_aes_mul_gf2p2__853__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__853__d;
    __Vfunc_aes_mul_gf2p2__853__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__853__f;
    __Vfunc_aes_mul_gf2p2__853__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__853__a;
    __Vfunc_aes_mul_gf2p2__853__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__853__b;
    __Vfunc_aes_mul_gf2p2__853__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__853__c;
    __Vfunc_aes_mul_gf2p2__853__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__856__Vfuncout;
    __Vfunc_aes_mul_gf2p4__856__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__856__gamma;
    __Vfunc_aes_mul_gf2p4__856__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__856__delta;
    __Vfunc_aes_mul_gf2p4__856__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__856__a;
    __Vfunc_aes_mul_gf2p4__856__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__856__b;
    __Vfunc_aes_mul_gf2p4__856__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__856__c;
    __Vfunc_aes_mul_gf2p4__856__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__857__Vfuncout;
    __Vfunc_aes_mul_gf2p2__857__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__857__g;
    __Vfunc_aes_mul_gf2p2__857__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__857__d;
    __Vfunc_aes_mul_gf2p2__857__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__857__f;
    __Vfunc_aes_mul_gf2p2__857__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__857__a;
    __Vfunc_aes_mul_gf2p2__857__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__857__b;
    __Vfunc_aes_mul_gf2p2__857__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__857__c;
    __Vfunc_aes_mul_gf2p2__857__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__858__Vfuncout;
    __Vfunc_aes_mul_gf2p2__858__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__858__g;
    __Vfunc_aes_mul_gf2p2__858__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__858__d;
    __Vfunc_aes_mul_gf2p2__858__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__858__f;
    __Vfunc_aes_mul_gf2p2__858__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__858__a;
    __Vfunc_aes_mul_gf2p2__858__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__858__b;
    __Vfunc_aes_mul_gf2p2__858__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__858__c;
    __Vfunc_aes_mul_gf2p2__858__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__859__Vfuncout;
    __Vfunc_aes_mul_gf2p2__859__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__859__g;
    __Vfunc_aes_mul_gf2p2__859__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__859__d;
    __Vfunc_aes_mul_gf2p2__859__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__859__f;
    __Vfunc_aes_mul_gf2p2__859__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__859__a;
    __Vfunc_aes_mul_gf2p2__859__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__859__b;
    __Vfunc_aes_mul_gf2p2__859__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__859__c;
    __Vfunc_aes_mul_gf2p2__859__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__862__Vfuncout;
    __Vfunc_aes_mul_gf2p4__862__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__862__gamma;
    __Vfunc_aes_mul_gf2p4__862__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__862__delta;
    __Vfunc_aes_mul_gf2p4__862__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__862__a;
    __Vfunc_aes_mul_gf2p4__862__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__862__b;
    __Vfunc_aes_mul_gf2p4__862__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__862__c;
    __Vfunc_aes_mul_gf2p4__862__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__863__Vfuncout;
    __Vfunc_aes_mul_gf2p2__863__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__863__g;
    __Vfunc_aes_mul_gf2p2__863__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__863__d;
    __Vfunc_aes_mul_gf2p2__863__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__863__f;
    __Vfunc_aes_mul_gf2p2__863__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__863__a;
    __Vfunc_aes_mul_gf2p2__863__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__863__b;
    __Vfunc_aes_mul_gf2p2__863__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__863__c;
    __Vfunc_aes_mul_gf2p2__863__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__864__Vfuncout;
    __Vfunc_aes_mul_gf2p2__864__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__864__g;
    __Vfunc_aes_mul_gf2p2__864__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__864__d;
    __Vfunc_aes_mul_gf2p2__864__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__864__f;
    __Vfunc_aes_mul_gf2p2__864__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__864__a;
    __Vfunc_aes_mul_gf2p2__864__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__864__b;
    __Vfunc_aes_mul_gf2p2__864__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__864__c;
    __Vfunc_aes_mul_gf2p2__864__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__865__Vfuncout;
    __Vfunc_aes_mul_gf2p2__865__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__865__g;
    __Vfunc_aes_mul_gf2p2__865__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__865__d;
    __Vfunc_aes_mul_gf2p2__865__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__865__f;
    __Vfunc_aes_mul_gf2p2__865__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__865__a;
    __Vfunc_aes_mul_gf2p2__865__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__865__b;
    __Vfunc_aes_mul_gf2p2__865__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__865__c;
    __Vfunc_aes_mul_gf2p2__865__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__868__Vfuncout;
    __Vfunc_aes_mul_gf2p4__868__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__868__gamma;
    __Vfunc_aes_mul_gf2p4__868__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__868__delta;
    __Vfunc_aes_mul_gf2p4__868__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__868__a;
    __Vfunc_aes_mul_gf2p4__868__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__868__b;
    __Vfunc_aes_mul_gf2p4__868__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__868__c;
    __Vfunc_aes_mul_gf2p4__868__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__Vfuncout;
    __Vfunc_aes_mul_gf2p2__869__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__g;
    __Vfunc_aes_mul_gf2p2__869__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__d;
    __Vfunc_aes_mul_gf2p2__869__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__f;
    __Vfunc_aes_mul_gf2p2__869__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__869__a;
    __Vfunc_aes_mul_gf2p2__869__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__869__b;
    __Vfunc_aes_mul_gf2p2__869__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__869__c;
    __Vfunc_aes_mul_gf2p2__869__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__Vfuncout;
    __Vfunc_aes_mul_gf2p2__870__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__g;
    __Vfunc_aes_mul_gf2p2__870__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__d;
    __Vfunc_aes_mul_gf2p2__870__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__f;
    __Vfunc_aes_mul_gf2p2__870__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__870__a;
    __Vfunc_aes_mul_gf2p2__870__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__870__b;
    __Vfunc_aes_mul_gf2p2__870__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__870__c;
    __Vfunc_aes_mul_gf2p2__870__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__Vfuncout;
    __Vfunc_aes_mul_gf2p2__871__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__g;
    __Vfunc_aes_mul_gf2p2__871__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__d;
    __Vfunc_aes_mul_gf2p2__871__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__f;
    __Vfunc_aes_mul_gf2p2__871__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__871__a;
    __Vfunc_aes_mul_gf2p2__871__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__871__b;
    __Vfunc_aes_mul_gf2p2__871__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__871__c;
    __Vfunc_aes_mul_gf2p2__871__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__874__Vfuncout;
    __Vfunc_aes_mul_gf2p4__874__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__874__gamma;
    __Vfunc_aes_mul_gf2p4__874__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__874__delta;
    __Vfunc_aes_mul_gf2p4__874__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__874__a;
    __Vfunc_aes_mul_gf2p4__874__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__874__b;
    __Vfunc_aes_mul_gf2p4__874__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__874__c;
    __Vfunc_aes_mul_gf2p4__874__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__875__Vfuncout;
    __Vfunc_aes_mul_gf2p2__875__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__875__g;
    __Vfunc_aes_mul_gf2p2__875__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__875__d;
    __Vfunc_aes_mul_gf2p2__875__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__875__f;
    __Vfunc_aes_mul_gf2p2__875__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__875__a;
    __Vfunc_aes_mul_gf2p2__875__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__875__b;
    __Vfunc_aes_mul_gf2p2__875__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__875__c;
    __Vfunc_aes_mul_gf2p2__875__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__876__Vfuncout;
    __Vfunc_aes_mul_gf2p2__876__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__876__g;
    __Vfunc_aes_mul_gf2p2__876__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__876__d;
    __Vfunc_aes_mul_gf2p2__876__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__876__f;
    __Vfunc_aes_mul_gf2p2__876__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__876__a;
    __Vfunc_aes_mul_gf2p2__876__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__876__b;
    __Vfunc_aes_mul_gf2p2__876__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__876__c;
    __Vfunc_aes_mul_gf2p2__876__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__877__Vfuncout;
    __Vfunc_aes_mul_gf2p2__877__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__877__g;
    __Vfunc_aes_mul_gf2p2__877__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__877__d;
    __Vfunc_aes_mul_gf2p2__877__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__877__f;
    __Vfunc_aes_mul_gf2p2__877__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__877__a;
    __Vfunc_aes_mul_gf2p2__877__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__877__b;
    __Vfunc_aes_mul_gf2p2__877__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__877__c;
    __Vfunc_aes_mul_gf2p2__877__c = 0;
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
                vlSelfRef.__Vfunc_aes_mvm__770__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__770__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__770__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__770__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__770__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__770__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__770__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__770__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__770__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [0U][3U] >> 8U));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__770__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__770__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__770__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__770__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__770__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][3U] 
                                                    << 0x00000018U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][3U] 
                                                      >> 8U))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__771__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__771__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__771__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__771__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__771__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][3U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__772__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__772__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__772__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__772__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__772__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__773__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__773__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__773__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__773__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__773__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__773__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__773__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__773__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__773__vec_b 
                    = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                      [1U][3U] >> 8U));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__773__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__773__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__773__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__773__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__773__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][3U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__774__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__774__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__774__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__774__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__774__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_b 
                        = (0x000000ffU & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [1U][3U] 
                                          >> 8U));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__775__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__775__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__775__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__775__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__775__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__822__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__822__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__822__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__822__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__822__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__822__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__822__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__822__d)));
    __Vfunc_aes_mul_gf2p2__822__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__822__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__822__d)));
    __Vfunc_aes_mul_gf2p2__822__f = ((((IData)(__Vfunc_aes_mul_gf2p2__822__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__822__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__822__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__822__b)));
    __Vfunc_aes_mul_gf2p2__822__Vfuncout = __Vfunc_aes_mul_gf2p2__822__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__822__Vfuncout;
    __Vfunc_aes_mul_gf2p2__823__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__823__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__823__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__823__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__823__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__823__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__823__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__823__d)));
    __Vfunc_aes_mul_gf2p2__823__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__823__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__823__d)));
    __Vfunc_aes_mul_gf2p2__823__f = ((((IData)(__Vfunc_aes_mul_gf2p2__823__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__823__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__823__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__823__b)));
    __Vfunc_aes_mul_gf2p2__823__Vfuncout = __Vfunc_aes_mul_gf2p2__823__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__823__Vfuncout;
    __Vfunc_aes_mul_gf2p4__802__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__802__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__802__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1410258083647801746ull);
    __Vfunc_aes_mul_gf2p2__803__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__802__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__803__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__802__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__803__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__803__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__803__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__803__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__803__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__803__d)));
    __Vfunc_aes_mul_gf2p2__803__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__803__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__803__d)));
    __Vfunc_aes_mul_gf2p2__803__f = ((((IData)(__Vfunc_aes_mul_gf2p2__803__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__803__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__803__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__803__b)));
    __Vfunc_aes_mul_gf2p2__803__Vfuncout = __Vfunc_aes_mul_gf2p2__803__f;
    __Vfunc_aes_mul_gf2p4__802__a = __Vfunc_aes_mul_gf2p2__803__Vfuncout;
    __Vfunc_aes_mul_gf2p2__804__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__802__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__802__delta)));
    __Vfunc_aes_mul_gf2p2__804__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__802__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__802__gamma)));
    __Vfunc_aes_mul_gf2p2__804__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__804__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__804__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__804__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__804__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__804__d)));
    __Vfunc_aes_mul_gf2p2__804__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__804__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__804__d)));
    __Vfunc_aes_mul_gf2p2__804__f = ((((IData)(__Vfunc_aes_mul_gf2p2__804__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__804__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__804__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__804__b)));
    __Vfunc_aes_mul_gf2p2__804__Vfuncout = __Vfunc_aes_mul_gf2p2__804__f;
    __Vfunc_aes_mul_gf2p4__802__b = __Vfunc_aes_mul_gf2p2__804__Vfuncout;
    __Vfunc_aes_mul_gf2p2__805__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__802__delta));
    __Vfunc_aes_mul_gf2p2__805__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__802__gamma));
    __Vfunc_aes_mul_gf2p2__805__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__805__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__805__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__805__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__805__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__805__d)));
    __Vfunc_aes_mul_gf2p2__805__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__805__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__805__d)));
    __Vfunc_aes_mul_gf2p2__805__f = ((((IData)(__Vfunc_aes_mul_gf2p2__805__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__805__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__805__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__805__b)));
    __Vfunc_aes_mul_gf2p2__805__Vfuncout = __Vfunc_aes_mul_gf2p2__805__f;
    __Vfunc_aes_mul_gf2p4__802__c = __Vfunc_aes_mul_gf2p2__805__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__802__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__802__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__806__g 
                        = __Vfunc_aes_mul_gf2p4__802__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__806__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__806__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__806__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__806__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__806__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__806__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__802__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__802__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__807__g 
                        = __Vfunc_aes_mul_gf2p4__802__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__807__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__807__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__807__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__807__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__807__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__807__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__802__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__802__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__802__Vfuncout;
    __Vfunc_aes_mul_gf2p4__808__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__808__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__808__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16682781158324776665ull);
    __Vfunc_aes_mul_gf2p2__809__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__808__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__809__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__808__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__809__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__809__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__809__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__809__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__809__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__809__d)));
    __Vfunc_aes_mul_gf2p2__809__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__809__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__809__d)));
    __Vfunc_aes_mul_gf2p2__809__f = ((((IData)(__Vfunc_aes_mul_gf2p2__809__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__809__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__809__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__809__b)));
    __Vfunc_aes_mul_gf2p2__809__Vfuncout = __Vfunc_aes_mul_gf2p2__809__f;
    __Vfunc_aes_mul_gf2p4__808__a = __Vfunc_aes_mul_gf2p2__809__Vfuncout;
    __Vfunc_aes_mul_gf2p2__810__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__808__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__808__delta)));
    __Vfunc_aes_mul_gf2p2__810__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__808__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__808__gamma)));
    __Vfunc_aes_mul_gf2p2__810__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__810__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__810__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__810__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__810__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__810__d)));
    __Vfunc_aes_mul_gf2p2__810__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__810__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__810__d)));
    __Vfunc_aes_mul_gf2p2__810__f = ((((IData)(__Vfunc_aes_mul_gf2p2__810__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__810__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__810__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__810__b)));
    __Vfunc_aes_mul_gf2p2__810__Vfuncout = __Vfunc_aes_mul_gf2p2__810__f;
    __Vfunc_aes_mul_gf2p4__808__b = __Vfunc_aes_mul_gf2p2__810__Vfuncout;
    __Vfunc_aes_mul_gf2p2__811__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__808__delta));
    __Vfunc_aes_mul_gf2p2__811__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__808__gamma));
    __Vfunc_aes_mul_gf2p2__811__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__811__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__811__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__811__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__811__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__811__d)));
    __Vfunc_aes_mul_gf2p2__811__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__811__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__811__d)));
    __Vfunc_aes_mul_gf2p2__811__f = ((((IData)(__Vfunc_aes_mul_gf2p2__811__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__811__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__811__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__811__b)));
    __Vfunc_aes_mul_gf2p2__811__Vfuncout = __Vfunc_aes_mul_gf2p2__811__f;
    __Vfunc_aes_mul_gf2p4__808__c = __Vfunc_aes_mul_gf2p2__811__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__808__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__808__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__812__g 
                        = __Vfunc_aes_mul_gf2p4__808__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__812__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__812__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__812__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__812__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__812__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__812__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__808__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__808__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__813__g 
                        = __Vfunc_aes_mul_gf2p4__808__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__813__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__813__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__813__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__813__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__813__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__813__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__808__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__808__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__808__Vfuncout;
    __Vfunc_aes_mul_gf2p2__826__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__826__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__826__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__826__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__826__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__826__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__826__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__826__d)));
    __Vfunc_aes_mul_gf2p2__826__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__826__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__826__d)));
    __Vfunc_aes_mul_gf2p2__826__f = ((((IData)(__Vfunc_aes_mul_gf2p2__826__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__826__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__826__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__826__b)));
    __Vfunc_aes_mul_gf2p2__826__Vfuncout = __Vfunc_aes_mul_gf2p2__826__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__826__Vfuncout;
    __Vfunc_aes_mul_gf2p2__827__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__827__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__827__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__827__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__827__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__827__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__827__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__827__d)));
    __Vfunc_aes_mul_gf2p2__827__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__827__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__827__d)));
    __Vfunc_aes_mul_gf2p2__827__f = ((((IData)(__Vfunc_aes_mul_gf2p2__827__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__827__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__827__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__827__b)));
    __Vfunc_aes_mul_gf2p2__827__Vfuncout = __Vfunc_aes_mul_gf2p2__827__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__827__Vfuncout;
    __Vfunc_aes_mul_gf2p2__830__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__830__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__830__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__830__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__830__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__830__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__830__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__830__d)));
    __Vfunc_aes_mul_gf2p2__830__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__830__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__830__d)));
    __Vfunc_aes_mul_gf2p2__830__f = ((((IData)(__Vfunc_aes_mul_gf2p2__830__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__830__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__830__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__830__b)));
    __Vfunc_aes_mul_gf2p2__830__Vfuncout = __Vfunc_aes_mul_gf2p2__830__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__830__Vfuncout;
    __Vfunc_aes_mul_gf2p2__831__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__831__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__831__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__831__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__831__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__831__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__831__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__831__d)));
    __Vfunc_aes_mul_gf2p2__831__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__831__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__831__d)));
    __Vfunc_aes_mul_gf2p2__831__f = ((((IData)(__Vfunc_aes_mul_gf2p2__831__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__831__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__831__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__831__b)));
    __Vfunc_aes_mul_gf2p2__831__Vfuncout = __Vfunc_aes_mul_gf2p2__831__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__831__Vfuncout;
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__776__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__776__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__776__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__776__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__776__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__777__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__777__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__777__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__777__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__777__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__778__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__778__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__778__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__778__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__778__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__779__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__779__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__779__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__779__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__779__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__779__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__780__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__780__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__780__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__780__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__780__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__781__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__781__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__781__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__781__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__781__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma)));
    __Vfunc_aes_square_gf2p2__783__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma));
    __Vfunc_aes_square_gf2p2__783__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__783__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__783__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__783__Vfuncout = __Vfunc_aes_square_gf2p2__783__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__b = __Vfunc_aes_square_gf2p2__783__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__784__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__782__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__784__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__784__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__784__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__784__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__784__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__784__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__785__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__782__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__785__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__785__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__785__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__785__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__785__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__785__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__782__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__782__Vfuncout;
    __Vfunc_aes_mul_gf2p4__790__delta = (0x0000000fU 
                                         & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__391__03a364__KET__);
    __Vfunc_aes_mul_gf2p4__790__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            >> 4U));
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
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma)));
    __Vfunc_aes_square_gf2p2__787__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma));
    __Vfunc_aes_square_gf2p2__787__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__787__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__787__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__787__Vfuncout = __Vfunc_aes_square_gf2p2__787__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__b = __Vfunc_aes_square_gf2p2__787__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__788__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__786__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__788__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__788__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__788__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__788__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__788__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__788__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__789__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__786__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__789__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__789__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__789__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__789__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__789__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__789__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__786__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__786__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__818__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                              ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                 >> 2U)));
    __Vfunc_aes_square_gf2p2__818__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__818__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__818__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__818__Vfuncout = __Vfunc_aes_square_gf2p2__818__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__818__Vfuncout;
    __Vfunc_aes_square_gf2p2__819__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__819__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__819__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__819__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__819__Vfuncout = __Vfunc_aes_square_gf2p2__819__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__819__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__815__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__815__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__815__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__815__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__815__Vfuncout = __Vfunc_aes_square_gf2p2__815__d;
    __Vfunc_aes_scale_omega2_gf2p2__814__g = __Vfunc_aes_square_gf2p2__815__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__814__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__814__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__814__g)));
    __Vfunc_aes_scale_omega2_gf2p2__814__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__814__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__814__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__817__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__817__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__817__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__817__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__817__Vfuncout = __Vfunc_aes_square_gf2p2__817__d;
    __Vfunc_aes_scale_omega2_gf2p2__816__g = __Vfunc_aes_square_gf2p2__817__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__816__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__816__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__816__g)));
    __Vfunc_aes_scale_omega2_gf2p2__816__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__816__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__816__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__832__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__832__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__832__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13589093539658264006ull);
    __Vfunc_aes_mul_gf2p2__833__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__832__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__833__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__832__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__833__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__833__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__833__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__833__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__833__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__833__d)));
    __Vfunc_aes_mul_gf2p2__833__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__833__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__833__d)));
    __Vfunc_aes_mul_gf2p2__833__f = ((((IData)(__Vfunc_aes_mul_gf2p2__833__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__833__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__833__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__833__b)));
    __Vfunc_aes_mul_gf2p2__833__Vfuncout = __Vfunc_aes_mul_gf2p2__833__f;
    __Vfunc_aes_mul_gf2p4__832__a = __Vfunc_aes_mul_gf2p2__833__Vfuncout;
    __Vfunc_aes_mul_gf2p2__834__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__832__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__832__delta)));
    __Vfunc_aes_mul_gf2p2__834__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__832__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__832__gamma)));
    __Vfunc_aes_mul_gf2p2__834__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__834__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__834__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__834__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__834__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__834__d)));
    __Vfunc_aes_mul_gf2p2__834__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__834__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__834__d)));
    __Vfunc_aes_mul_gf2p2__834__f = ((((IData)(__Vfunc_aes_mul_gf2p2__834__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__834__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__834__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__834__b)));
    __Vfunc_aes_mul_gf2p2__834__Vfuncout = __Vfunc_aes_mul_gf2p2__834__f;
    __Vfunc_aes_mul_gf2p4__832__b = __Vfunc_aes_mul_gf2p2__834__Vfuncout;
    __Vfunc_aes_mul_gf2p2__835__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__832__delta));
    __Vfunc_aes_mul_gf2p2__835__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__832__gamma));
    __Vfunc_aes_mul_gf2p2__835__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__835__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__835__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__835__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__835__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__835__d)));
    __Vfunc_aes_mul_gf2p2__835__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__835__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__835__d)));
    __Vfunc_aes_mul_gf2p2__835__f = ((((IData)(__Vfunc_aes_mul_gf2p2__835__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__835__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__835__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__835__b)));
    __Vfunc_aes_mul_gf2p2__835__Vfuncout = __Vfunc_aes_mul_gf2p2__835__f;
    __Vfunc_aes_mul_gf2p4__832__c = __Vfunc_aes_mul_gf2p2__835__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__832__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__832__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__836__g 
                        = __Vfunc_aes_mul_gf2p4__832__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__836__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__836__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__836__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__836__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__836__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__836__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__832__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__832__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__837__g 
                        = __Vfunc_aes_mul_gf2p4__832__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__837__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__837__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__837__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__837__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__837__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__837__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__832__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__832__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__832__Vfuncout;
    __Vfunc_aes_mul_gf2p4__850__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    __Vfunc_aes_mul_gf2p4__850__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__850__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13936225823257395187ull);
    __Vfunc_aes_mul_gf2p2__851__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__850__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__851__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__850__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__851__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__851__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__851__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__851__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__851__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__851__d)));
    __Vfunc_aes_mul_gf2p2__851__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__851__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__851__d)));
    __Vfunc_aes_mul_gf2p2__851__f = ((((IData)(__Vfunc_aes_mul_gf2p2__851__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__851__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__851__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__851__b)));
    __Vfunc_aes_mul_gf2p2__851__Vfuncout = __Vfunc_aes_mul_gf2p2__851__f;
    __Vfunc_aes_mul_gf2p4__850__a = __Vfunc_aes_mul_gf2p2__851__Vfuncout;
    __Vfunc_aes_mul_gf2p2__852__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__850__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__850__delta)));
    __Vfunc_aes_mul_gf2p2__852__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__850__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__850__gamma)));
    __Vfunc_aes_mul_gf2p2__852__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__852__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__852__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__852__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__852__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__852__d)));
    __Vfunc_aes_mul_gf2p2__852__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__852__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__852__d)));
    __Vfunc_aes_mul_gf2p2__852__f = ((((IData)(__Vfunc_aes_mul_gf2p2__852__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__852__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__852__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__852__b)));
    __Vfunc_aes_mul_gf2p2__852__Vfuncout = __Vfunc_aes_mul_gf2p2__852__f;
    __Vfunc_aes_mul_gf2p4__850__b = __Vfunc_aes_mul_gf2p2__852__Vfuncout;
    __Vfunc_aes_mul_gf2p2__853__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__850__delta));
    __Vfunc_aes_mul_gf2p2__853__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__850__gamma));
    __Vfunc_aes_mul_gf2p2__853__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__853__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__853__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__853__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__853__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__853__d)));
    __Vfunc_aes_mul_gf2p2__853__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__853__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__853__d)));
    __Vfunc_aes_mul_gf2p2__853__f = ((((IData)(__Vfunc_aes_mul_gf2p2__853__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__853__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__853__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__853__b)));
    __Vfunc_aes_mul_gf2p2__853__Vfuncout = __Vfunc_aes_mul_gf2p2__853__f;
    __Vfunc_aes_mul_gf2p4__850__c = __Vfunc_aes_mul_gf2p2__853__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__850__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__850__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__854__g 
                        = __Vfunc_aes_mul_gf2p4__850__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__854__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__854__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__854__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__854__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__854__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__854__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__850__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__850__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__855__g 
                        = __Vfunc_aes_mul_gf2p4__850__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__855__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__855__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__855__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__855__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__855__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__855__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__850__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__850__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__850__Vfuncout;
    __Vfunc_aes_mul_gf2p4__856__delta = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p4__856__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__856__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5192033705272071959ull);
    __Vfunc_aes_mul_gf2p2__857__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__856__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__857__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__856__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__857__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__857__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__857__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__857__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__857__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__857__d)));
    __Vfunc_aes_mul_gf2p2__857__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__857__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__857__d)));
    __Vfunc_aes_mul_gf2p2__857__f = ((((IData)(__Vfunc_aes_mul_gf2p2__857__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__857__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__857__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__857__b)));
    __Vfunc_aes_mul_gf2p2__857__Vfuncout = __Vfunc_aes_mul_gf2p2__857__f;
    __Vfunc_aes_mul_gf2p4__856__a = __Vfunc_aes_mul_gf2p2__857__Vfuncout;
    __Vfunc_aes_mul_gf2p2__858__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__856__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__856__delta)));
    __Vfunc_aes_mul_gf2p2__858__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__856__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__856__gamma)));
    __Vfunc_aes_mul_gf2p2__858__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__858__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__858__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__858__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__858__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__858__d)));
    __Vfunc_aes_mul_gf2p2__858__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__858__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__858__d)));
    __Vfunc_aes_mul_gf2p2__858__f = ((((IData)(__Vfunc_aes_mul_gf2p2__858__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__858__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__858__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__858__b)));
    __Vfunc_aes_mul_gf2p2__858__Vfuncout = __Vfunc_aes_mul_gf2p2__858__f;
    __Vfunc_aes_mul_gf2p4__856__b = __Vfunc_aes_mul_gf2p2__858__Vfuncout;
    __Vfunc_aes_mul_gf2p2__859__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__856__delta));
    __Vfunc_aes_mul_gf2p2__859__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__856__gamma));
    __Vfunc_aes_mul_gf2p2__859__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__859__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__859__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__859__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__859__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__859__d)));
    __Vfunc_aes_mul_gf2p2__859__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__859__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__859__d)));
    __Vfunc_aes_mul_gf2p2__859__f = ((((IData)(__Vfunc_aes_mul_gf2p2__859__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__859__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__859__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__859__b)));
    __Vfunc_aes_mul_gf2p2__859__Vfuncout = __Vfunc_aes_mul_gf2p2__859__f;
    __Vfunc_aes_mul_gf2p4__856__c = __Vfunc_aes_mul_gf2p2__859__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__856__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__856__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__860__g 
                        = __Vfunc_aes_mul_gf2p4__856__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__860__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__860__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__860__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__860__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__860__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__860__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__856__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__856__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__861__g 
                        = __Vfunc_aes_mul_gf2p4__856__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__861__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__861__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__861__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__861__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__861__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__861__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__856__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__856__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__856__Vfuncout;
    __Vfunc_aes_mul_gf2p4__868__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__868__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__868__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18220065046647904616ull);
    __Vfunc_aes_mul_gf2p2__869__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__868__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__869__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__868__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__869__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__869__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__869__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__869__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__869__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__869__d)));
    __Vfunc_aes_mul_gf2p2__869__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__869__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__869__d)));
    __Vfunc_aes_mul_gf2p2__869__f = ((((IData)(__Vfunc_aes_mul_gf2p2__869__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__869__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__869__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__869__b)));
    __Vfunc_aes_mul_gf2p2__869__Vfuncout = __Vfunc_aes_mul_gf2p2__869__f;
    __Vfunc_aes_mul_gf2p4__868__a = __Vfunc_aes_mul_gf2p2__869__Vfuncout;
    __Vfunc_aes_mul_gf2p2__870__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__868__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__868__delta)));
    __Vfunc_aes_mul_gf2p2__870__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__868__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__868__gamma)));
    __Vfunc_aes_mul_gf2p2__870__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__870__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__870__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__870__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__870__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__870__d)));
    __Vfunc_aes_mul_gf2p2__870__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__870__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__870__d)));
    __Vfunc_aes_mul_gf2p2__870__f = ((((IData)(__Vfunc_aes_mul_gf2p2__870__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__870__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__870__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__870__b)));
    __Vfunc_aes_mul_gf2p2__870__Vfuncout = __Vfunc_aes_mul_gf2p2__870__f;
    __Vfunc_aes_mul_gf2p4__868__b = __Vfunc_aes_mul_gf2p2__870__Vfuncout;
    __Vfunc_aes_mul_gf2p2__871__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__868__delta));
    __Vfunc_aes_mul_gf2p2__871__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__868__gamma));
    __Vfunc_aes_mul_gf2p2__871__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__871__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__871__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__871__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__871__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__871__d)));
    __Vfunc_aes_mul_gf2p2__871__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__871__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__871__d)));
    __Vfunc_aes_mul_gf2p2__871__f = ((((IData)(__Vfunc_aes_mul_gf2p2__871__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__871__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__871__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__871__b)));
    __Vfunc_aes_mul_gf2p2__871__Vfuncout = __Vfunc_aes_mul_gf2p2__871__f;
    __Vfunc_aes_mul_gf2p4__868__c = __Vfunc_aes_mul_gf2p2__871__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__868__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__868__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__872__g 
                        = __Vfunc_aes_mul_gf2p4__868__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__872__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__872__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__872__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__872__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__872__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__872__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__868__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__868__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__873__g 
                        = __Vfunc_aes_mul_gf2p4__868__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__873__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__873__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__873__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__873__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__873__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__873__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__868__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__868__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__868__Vfuncout;
    __Vfunc_aes_mul_gf2p4__838__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__838__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__838__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15491097383502403737ull);
    __Vfunc_aes_mul_gf2p2__839__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__838__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__839__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__838__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__839__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__839__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__839__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__839__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__839__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__839__d)));
    __Vfunc_aes_mul_gf2p2__839__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__839__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__839__d)));
    __Vfunc_aes_mul_gf2p2__839__f = ((((IData)(__Vfunc_aes_mul_gf2p2__839__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__839__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__839__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__839__b)));
    __Vfunc_aes_mul_gf2p2__839__Vfuncout = __Vfunc_aes_mul_gf2p2__839__f;
    __Vfunc_aes_mul_gf2p4__838__a = __Vfunc_aes_mul_gf2p2__839__Vfuncout;
    __Vfunc_aes_mul_gf2p2__840__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__838__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__838__delta)));
    __Vfunc_aes_mul_gf2p2__840__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__838__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__838__gamma)));
    __Vfunc_aes_mul_gf2p2__840__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__840__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__840__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__840__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__840__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__840__d)));
    __Vfunc_aes_mul_gf2p2__840__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__840__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__840__d)));
    __Vfunc_aes_mul_gf2p2__840__f = ((((IData)(__Vfunc_aes_mul_gf2p2__840__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__840__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__840__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__840__b)));
    __Vfunc_aes_mul_gf2p2__840__Vfuncout = __Vfunc_aes_mul_gf2p2__840__f;
    __Vfunc_aes_mul_gf2p4__838__b = __Vfunc_aes_mul_gf2p2__840__Vfuncout;
    __Vfunc_aes_mul_gf2p2__841__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__838__delta));
    __Vfunc_aes_mul_gf2p2__841__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__838__gamma));
    __Vfunc_aes_mul_gf2p2__841__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__841__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__841__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__841__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__841__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__841__d)));
    __Vfunc_aes_mul_gf2p2__841__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__841__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__841__d)));
    __Vfunc_aes_mul_gf2p2__841__f = ((((IData)(__Vfunc_aes_mul_gf2p2__841__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__841__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__841__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__841__b)));
    __Vfunc_aes_mul_gf2p2__841__Vfuncout = __Vfunc_aes_mul_gf2p2__841__f;
    __Vfunc_aes_mul_gf2p4__838__c = __Vfunc_aes_mul_gf2p2__841__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__838__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__838__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__842__g 
                        = __Vfunc_aes_mul_gf2p4__838__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__842__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__842__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__842__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__842__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__842__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__842__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__838__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__838__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__843__g 
                        = __Vfunc_aes_mul_gf2p4__838__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__843__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__843__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__843__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__843__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__843__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__843__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__838__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__838__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__838__Vfuncout;
    __Vfunc_aes_mul_gf2p4__844__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__844__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__844__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2275925543936977078ull);
    __Vfunc_aes_mul_gf2p2__845__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__844__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__845__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__844__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__845__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__845__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__845__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__845__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__845__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__845__d)));
    __Vfunc_aes_mul_gf2p2__845__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__845__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__845__d)));
    __Vfunc_aes_mul_gf2p2__845__f = ((((IData)(__Vfunc_aes_mul_gf2p2__845__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__845__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__845__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__845__b)));
    __Vfunc_aes_mul_gf2p2__845__Vfuncout = __Vfunc_aes_mul_gf2p2__845__f;
    __Vfunc_aes_mul_gf2p4__844__a = __Vfunc_aes_mul_gf2p2__845__Vfuncout;
    __Vfunc_aes_mul_gf2p2__846__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__844__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__844__delta)));
    __Vfunc_aes_mul_gf2p2__846__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__844__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__844__gamma)));
    __Vfunc_aes_mul_gf2p2__846__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__846__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__846__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__846__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__846__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__846__d)));
    __Vfunc_aes_mul_gf2p2__846__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__846__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__846__d)));
    __Vfunc_aes_mul_gf2p2__846__f = ((((IData)(__Vfunc_aes_mul_gf2p2__846__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__846__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__846__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__846__b)));
    __Vfunc_aes_mul_gf2p2__846__Vfuncout = __Vfunc_aes_mul_gf2p2__846__f;
    __Vfunc_aes_mul_gf2p4__844__b = __Vfunc_aes_mul_gf2p2__846__Vfuncout;
    __Vfunc_aes_mul_gf2p2__847__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__844__delta));
    __Vfunc_aes_mul_gf2p2__847__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__844__gamma));
    __Vfunc_aes_mul_gf2p2__847__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__847__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__847__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__847__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__847__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__847__d)));
    __Vfunc_aes_mul_gf2p2__847__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__847__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__847__d)));
    __Vfunc_aes_mul_gf2p2__847__f = ((((IData)(__Vfunc_aes_mul_gf2p2__847__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__847__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__847__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__847__b)));
    __Vfunc_aes_mul_gf2p2__847__Vfuncout = __Vfunc_aes_mul_gf2p2__847__f;
    __Vfunc_aes_mul_gf2p4__844__c = __Vfunc_aes_mul_gf2p2__847__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__844__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__844__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__848__g 
                        = __Vfunc_aes_mul_gf2p4__844__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__848__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__848__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__848__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__848__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__848__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__848__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__844__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__844__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__849__g 
                        = __Vfunc_aes_mul_gf2p4__844__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__849__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__849__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__849__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__849__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__849__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__849__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__844__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__844__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__844__Vfuncout;
    __Vfunc_aes_mul_gf2p4__862__delta = (0x0000000fU 
                                         & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__862__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__862__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17397198902870344539ull);
    __Vfunc_aes_mul_gf2p2__863__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__862__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__863__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__862__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__863__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__863__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__863__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__863__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__863__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__863__d)));
    __Vfunc_aes_mul_gf2p2__863__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__863__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__863__d)));
    __Vfunc_aes_mul_gf2p2__863__f = ((((IData)(__Vfunc_aes_mul_gf2p2__863__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__863__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__863__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__863__b)));
    __Vfunc_aes_mul_gf2p2__863__Vfuncout = __Vfunc_aes_mul_gf2p2__863__f;
    __Vfunc_aes_mul_gf2p4__862__a = __Vfunc_aes_mul_gf2p2__863__Vfuncout;
    __Vfunc_aes_mul_gf2p2__864__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__862__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__862__delta)));
    __Vfunc_aes_mul_gf2p2__864__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__862__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__862__gamma)));
    __Vfunc_aes_mul_gf2p2__864__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__864__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__864__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__864__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__864__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__864__d)));
    __Vfunc_aes_mul_gf2p2__864__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__864__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__864__d)));
    __Vfunc_aes_mul_gf2p2__864__f = ((((IData)(__Vfunc_aes_mul_gf2p2__864__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__864__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__864__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__864__b)));
    __Vfunc_aes_mul_gf2p2__864__Vfuncout = __Vfunc_aes_mul_gf2p2__864__f;
    __Vfunc_aes_mul_gf2p4__862__b = __Vfunc_aes_mul_gf2p2__864__Vfuncout;
    __Vfunc_aes_mul_gf2p2__865__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__862__delta));
    __Vfunc_aes_mul_gf2p2__865__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__862__gamma));
    __Vfunc_aes_mul_gf2p2__865__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__865__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__865__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__865__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__865__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__865__d)));
    __Vfunc_aes_mul_gf2p2__865__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__865__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__865__d)));
    __Vfunc_aes_mul_gf2p2__865__f = ((((IData)(__Vfunc_aes_mul_gf2p2__865__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__865__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__865__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__865__b)));
    __Vfunc_aes_mul_gf2p2__865__Vfuncout = __Vfunc_aes_mul_gf2p2__865__f;
    __Vfunc_aes_mul_gf2p4__862__c = __Vfunc_aes_mul_gf2p2__865__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__862__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__862__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__866__g 
                        = __Vfunc_aes_mul_gf2p4__862__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__866__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__866__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__866__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__866__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__866__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__866__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__862__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__862__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__867__g 
                        = __Vfunc_aes_mul_gf2p4__862__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__867__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__867__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__867__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__867__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__867__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__867__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__862__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__862__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__862__Vfuncout;
    __Vfunc_aes_mul_gf2p4__874__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__874__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__874__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4311310609106178153ull);
    __Vfunc_aes_mul_gf2p2__875__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__874__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__875__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__874__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__875__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__875__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__875__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__875__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__875__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__875__d)));
    __Vfunc_aes_mul_gf2p2__875__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__875__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__875__d)));
    __Vfunc_aes_mul_gf2p2__875__f = ((((IData)(__Vfunc_aes_mul_gf2p2__875__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__875__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__875__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__875__b)));
    __Vfunc_aes_mul_gf2p2__875__Vfuncout = __Vfunc_aes_mul_gf2p2__875__f;
    __Vfunc_aes_mul_gf2p4__874__a = __Vfunc_aes_mul_gf2p2__875__Vfuncout;
    __Vfunc_aes_mul_gf2p2__876__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__874__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__874__delta)));
    __Vfunc_aes_mul_gf2p2__876__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__874__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__874__gamma)));
    __Vfunc_aes_mul_gf2p2__876__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__876__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__876__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__876__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__876__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__876__d)));
    __Vfunc_aes_mul_gf2p2__876__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__876__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__876__d)));
    __Vfunc_aes_mul_gf2p2__876__f = ((((IData)(__Vfunc_aes_mul_gf2p2__876__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__876__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__876__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__876__b)));
    __Vfunc_aes_mul_gf2p2__876__Vfuncout = __Vfunc_aes_mul_gf2p2__876__f;
    __Vfunc_aes_mul_gf2p4__874__b = __Vfunc_aes_mul_gf2p2__876__Vfuncout;
    __Vfunc_aes_mul_gf2p2__877__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__874__delta));
    __Vfunc_aes_mul_gf2p2__877__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__874__gamma));
    __Vfunc_aes_mul_gf2p2__877__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__877__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__877__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__877__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__877__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__877__d)));
    __Vfunc_aes_mul_gf2p2__877__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__877__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__877__d)));
    __Vfunc_aes_mul_gf2p2__877__f = ((((IData)(__Vfunc_aes_mul_gf2p2__877__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__877__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__877__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__877__b)));
    __Vfunc_aes_mul_gf2p2__877__Vfuncout = __Vfunc_aes_mul_gf2p2__877__f;
    __Vfunc_aes_mul_gf2p4__874__c = __Vfunc_aes_mul_gf2p2__877__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__874__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__874__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__878__g 
                        = __Vfunc_aes_mul_gf2p4__874__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__878__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__878__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__878__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__878__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__878__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__878__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__874__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__874__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__879__g 
                        = __Vfunc_aes_mul_gf2p4__874__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__879__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__879__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__879__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__879__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__879__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__879__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__874__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__874__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__874__Vfuncout;
}

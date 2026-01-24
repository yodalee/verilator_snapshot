// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__0\n"); );
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
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b 
        = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                  >> 4U) ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b 
        = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                 ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                    >> 2U)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv 
        = ((0x000000f0U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                            ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                           << 4U)) | (0x0000000fU & 
                                      ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                                       ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b 
        = (0x0000000fU & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                           >> 8U) ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b 
        = (0x0000000fU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                          ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                             >> 4U)));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv 
        = ((0x000000f0U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                           ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o))) 
           | (0x0000000fU & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                              ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
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
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
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
}

VL_ATTR_COLD void Vsim_aes_sbox__S4___ctor_var_reset(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2395839182665444169ull);
    vlSelf->out_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7204507303272898518ull);
    vlSelf->out_ack_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11987955837835637174ull);
    vlSelf->op_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4613435319122321902ull);
    vlSelf->data_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9877081704222771714ull);
    vlSelf->mask_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17872363346074762064ull);
    vlSelf->prd_i = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10930268529313954873ull);
    vlSelf->data_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14180446042470581157ull);
    vlSelf->mask_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17297988056845870241ull);
    vlSelf->prd_o = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 14723174630036880396ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11030385762864146135ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12385163544275590184ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8682491709451417797ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6303687000974065765ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 282136776925971418ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1311964057997140228ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17799993853194977107ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11432694951593461654ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2788433410034119731ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14658880010685600689ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 315663953970807247ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7120458892825744779ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13192932140675442597ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14216362939088256132ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7003983401891593850ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13167182500049709583ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10710884196859456399ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3868547597327907890ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7947045829905709216ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1581982592106067806ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7416507232673364559ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8280154838025673550ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16789746510233897872ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14851202751515504349ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13344673316185905068ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14793669830007561127ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7781636410216265083ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12422262242744254807ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14855121716266376571ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7763226444012966352ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16593727553001529554ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12815610534396481001ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13758282756704247789ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14695489833823316390ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14940475072055350660ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8391331502876838686ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5089416340204348293ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14785908226657345382ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12312801552369081909ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4937961665424362375ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4883976861518474807ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9369002184328336078ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11424138618671627019ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15007790578669278370ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 166530789545801853ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11285182372279906073ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10165533842835397396ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5289641502228152379ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10125298710618035706ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18262991310122281794ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13434382151934106139ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14967549518967022975ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5415107177300468262ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9393172985814182211ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2938481106393585741ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2811570391872146251ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13293143752557015415ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11014454221309657804ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16381796695166985505ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9801905255096850459ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16474995961054466879ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5434579385375541084ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14680934530336805750ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12092526714292817011ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18358148924816937414ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4781622577267950641ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8899046691027488034ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10746225851562812198ull);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8371257044255936755ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12690913281147500825ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7653386492258655326ull);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18128234929347126540ull);
    vlSelf->__Vfunc_aes_mvm__0__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18421658249563028914ull);
    vlSelf->__Vfunc_aes_mvm__0__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5753003545732660111ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__0__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13780134227202727548ull);
    }
    vlSelf->__Vfunc_aes_mvm__0__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14937716427602085260ull);
    vlSelf->__Vfunc_aes_mvm__1__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 744697068502874940ull);
    vlSelf->__Vfunc_aes_mvm__1__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10966317225018359649ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10921441024314239658ull);
    }
    vlSelf->__Vfunc_aes_mvm__1__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1270700678987446398ull);
    vlSelf->__Vfunc_aes_mvm__2__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18171973513429066078ull);
    vlSelf->__Vfunc_aes_mvm__2__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11063958243742593852ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5222499960706749626ull);
    }
    vlSelf->__Vfunc_aes_mvm__2__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5818230211503472940ull);
    vlSelf->__Vfunc_aes_mvm__3__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17334152361238604690ull);
    vlSelf->__Vfunc_aes_mvm__3__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9284710537916675115ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__3__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18397178191371263526ull);
    }
    vlSelf->__Vfunc_aes_mvm__3__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1523191497975523058ull);
    vlSelf->__Vfunc_aes_mvm__4__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9235848236919817009ull);
    vlSelf->__Vfunc_aes_mvm__4__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7932013117674108165ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__4__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7993113131526504331ull);
    }
    vlSelf->__Vfunc_aes_mvm__4__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13282734996908298708ull);
    vlSelf->__Vfunc_aes_mvm__5__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 538764097141496152ull);
    vlSelf->__Vfunc_aes_mvm__5__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3852466724813988101ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__5__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9012890921752219866ull);
    }
    vlSelf->__Vfunc_aes_mvm__5__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16161972224869492929ull);
    vlSelf->__Vfunc_aes_mvm__6__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 650299610874204612ull);
    vlSelf->__Vfunc_aes_mvm__6__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9005633008206937912ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__6__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15977434600498126077ull);
    }
    vlSelf->__Vfunc_aes_mvm__6__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8059167207735871480ull);
    vlSelf->__Vfunc_aes_mvm__7__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7747427556627516896ull);
    vlSelf->__Vfunc_aes_mvm__7__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17130684342454319873ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__7__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12783784079587892222ull);
    }
    vlSelf->__Vfunc_aes_mvm__7__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1404450866232488549ull);
    vlSelf->__Vfunc_aes_mvm__8__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5674605480227214092ull);
    vlSelf->__Vfunc_aes_mvm__8__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10523423799997173207ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__8__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11990964199116815376ull);
    }
    vlSelf->__Vfunc_aes_mvm__8__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 944392350583862784ull);
    vlSelf->__Vfunc_aes_mvm__9__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2758354348767773584ull);
    vlSelf->__Vfunc_aes_mvm__9__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5060298884804989293ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__9__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11809915964360783989ull);
    }
    vlSelf->__Vfunc_aes_mvm__9__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15733018270355158071ull);
    vlSelf->__Vfunc_aes_mvm__10__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 361310217848024471ull);
    vlSelf->__Vfunc_aes_mvm__10__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8469006608806579030ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__10__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12765872571086900913ull);
    }
    vlSelf->__Vfunc_aes_mvm__10__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9651421524407106165ull);
    vlSelf->__Vfunc_aes_mvm__11__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4016559513768746974ull);
    vlSelf->__Vfunc_aes_mvm__11__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5901893480603351135ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__11__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13860600953048253667ull);
    }
    vlSelf->__Vfunc_aes_mvm__11__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5519473779315847463ull);
    vlSelf->__Vfunc_aes_square_gf2p2__14__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9187569308726693948ull);
    vlSelf->__Vfunc_aes_square_gf2p2__14__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14147342781367330169ull);
    vlSelf->__Vfunc_aes_square_gf2p2__14__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16736392283623177042ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__15__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9097601369560589247ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__15__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7321474402348576681ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__15__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15191573078457115236ull);
    vlSelf->__Vfunc_aes_square_gf2p2__18__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8541193399865835258ull);
    vlSelf->__Vfunc_aes_square_gf2p2__18__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12800653947876614854ull);
    vlSelf->__Vfunc_aes_square_gf2p2__18__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6138872587794921045ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__19__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7319552791513267216ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__19__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1686629343344366314ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__19__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 424143331913958120ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__20__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 716005733609331336ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__24__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11143569580289631049ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__24__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8750012405441326462ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__24__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5211348792366473018ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__25__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 712756326037594541ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__25__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15427160124910796791ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__25__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4870735625353532190ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__26__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8704969090656893802ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__30__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11756795279823465740ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__30__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18175889698383386722ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__30__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5514218257182422458ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__31__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18134165630957449196ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__31__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8598122198668918609ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__31__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15403305920665074106ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__32__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15478192743871101689ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__36__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4244146539833176580ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__36__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4042166146631037153ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__36__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1424097533732826450ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__37__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14641872156003297559ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__37__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1577752892748461877ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__37__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14127237155751991384ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__38__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3833993094378021160ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__42__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13701038575758483154ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__42__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 918858439351660272ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__42__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7117120936004346297ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__43__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14805616109261901672ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__43__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9635450823934781850ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__43__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 251309502360676765ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__62__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1761915638838862129ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__66__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14209502354658812590ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__66__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17593454182615958534ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__66__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11505714277268761983ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__67__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10629814348772310123ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__67__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 808929839696899924ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__67__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 681803762202090791ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__68__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 311451565181086614ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__72__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16161000045684850141ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__72__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7480277553172654207ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__72__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3020241426059828745ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__73__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13899665371896001027ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__73__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7730647430086668749ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__73__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6205489239463938916ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__74__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18300221043253115725ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__78__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6135338150472672322ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__78__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11567401818436844310ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__78__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16482980422230819336ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__79__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2796566502486818502ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__79__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18378556953859468047ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__79__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5174211536122389817ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__80__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15776006412951325713ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__84__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6964944817057363356ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__84__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9781206673780917179ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__84__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15356821864590020960ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__85__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9850709813198274756ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__85__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4551050528752546484ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__85__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15409149177659870769ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__86__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11139393955715707967ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__90__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2230268603648283926ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__90__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15372602767324364295ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__90__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15494125701994122067ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__91__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3004380383313959578ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__91__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7095966255236504437ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__91__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12895881403925744161ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__92__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18079009451886073318ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__96__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15245609134908010297ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__96__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17002433530598070923ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__96__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8851677419714193096ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__97__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5410163322800597157ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__97__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13128113923245183837ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__97__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9044090480021139271ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__98__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11633063309433321852ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__102__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7545584907728498077ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__102__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7175806330838544439ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__102__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11139332695651895850ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__103__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6571865704003607374ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__103__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6123878073863531649ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__103__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 975387286573518254ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__104__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11986098921478388490ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__108__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6805047656315507599ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__108__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 498541303116143938ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__108__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9912343244565306720ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__109__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17018914089313855887ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__109__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1203235523822327139ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__109__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4381057868731618861ull);
    vlSelf->__Vfunc_aes_mvm__110__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8639939783171815316ull);
    vlSelf->__Vfunc_aes_mvm__110__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12774230973619932728ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__110__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4021094939961197869ull);
    }
    vlSelf->__Vfunc_aes_mvm__110__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13163237029283329007ull);
    vlSelf->__Vfunc_aes_mvm__111__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14553367668717671816ull);
    vlSelf->__Vfunc_aes_mvm__111__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6982053839990610300ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__111__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6104006181151172828ull);
    }
    vlSelf->__Vfunc_aes_mvm__111__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12159284495064836601ull);
    vlSelf->__Vfunc_aes_mvm__112__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11668820037244312374ull);
    vlSelf->__Vfunc_aes_mvm__112__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10654219956522699091ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__112__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4685297708619473000ull);
    }
    vlSelf->__Vfunc_aes_mvm__112__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14688381331749875447ull);
    vlSelf->__Vfunc_aes_mvm__113__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5330511847118409449ull);
    vlSelf->__Vfunc_aes_mvm__113__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15365669645875445186ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__113__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4638974468833436109ull);
    }
    vlSelf->__Vfunc_aes_mvm__113__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16625972019547049113ull);
    vlSelf->__Vfunc_aes_mvm__114__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16649100136310696290ull);
    vlSelf->__Vfunc_aes_mvm__114__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10981907885117031546ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__114__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9086580158855270238ull);
    }
    vlSelf->__Vfunc_aes_mvm__114__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5760962356016772865ull);
    vlSelf->__Vfunc_aes_mvm__115__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14332002491075197444ull);
    vlSelf->__Vfunc_aes_mvm__115__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3917655352370302945ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__115__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10554450593526625961ull);
    }
    vlSelf->__Vfunc_aes_mvm__115__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3943252977461306904ull);
    vlSelf->__Vfunc_aes_mvm__116__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1445551225530679641ull);
    vlSelf->__Vfunc_aes_mvm__116__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1362450085661218520ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__116__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3938784506010121860ull);
    }
    vlSelf->__Vfunc_aes_mvm__116__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6460732186860153833ull);
    vlSelf->__Vfunc_aes_mvm__117__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6212248712230284312ull);
    vlSelf->__Vfunc_aes_mvm__117__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5740103045262952724ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__117__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18392836669403651500ull);
    }
    vlSelf->__Vfunc_aes_mvm__117__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9706530415292189585ull);
    vlSelf->__Vfunc_aes_mvm__118__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12149121761631367008ull);
    vlSelf->__Vfunc_aes_mvm__118__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15127488303362637324ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__118__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5810916398804525292ull);
    }
    vlSelf->__Vfunc_aes_mvm__118__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8531422509892197555ull);
    vlSelf->__Vfunc_aes_mvm__119__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11215947669576913575ull);
    vlSelf->__Vfunc_aes_mvm__119__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6925128324078422579ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__119__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1026787704692165521ull);
    }
    vlSelf->__Vfunc_aes_mvm__119__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15585800511462905534ull);
    vlSelf->__Vfunc_aes_mvm__120__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 135553891631381920ull);
    vlSelf->__Vfunc_aes_mvm__120__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9479226203059147939ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__120__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13808545105497081993ull);
    }
    vlSelf->__Vfunc_aes_mvm__120__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 704124520379531740ull);
    vlSelf->__Vfunc_aes_mvm__121__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16027532146957761588ull);
    vlSelf->__Vfunc_aes_mvm__121__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9597731791206119216ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__121__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8956103406969865751ull);
    }
    vlSelf->__Vfunc_aes_mvm__121__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11081579997812814131ull);
    vlSelf->__Vfunc_aes_square_gf2p2__124__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5784467954160095853ull);
    vlSelf->__Vfunc_aes_square_gf2p2__124__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3910938385829188490ull);
    vlSelf->__Vfunc_aes_square_gf2p2__124__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9254187236199860015ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__125__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3357346979668943018ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__125__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5426807544172419139ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__125__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3010916325996030084ull);
    vlSelf->__Vfunc_aes_square_gf2p2__128__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6100256887429125961ull);
    vlSelf->__Vfunc_aes_square_gf2p2__128__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8871282051437883509ull);
    vlSelf->__Vfunc_aes_square_gf2p2__128__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9826705280979177251ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__129__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10198491065263679880ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__129__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10351288122574217484ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__129__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8270981141473191915ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__130__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4105625094883367263ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__134__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 618653952007645467ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__134__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12890717115886013776ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__134__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10678588403005211582ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__135__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15748092261575921555ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__135__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2199823810771619562ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__135__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7950223098572588691ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__136__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4499806455303686971ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__140__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10598303817005497716ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__140__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4017233803498573122ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__140__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9265917813867347243ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__141__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2271779189069626029ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__141__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8415581123159477899ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__141__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 500004517917075330ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__142__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12912378741540516051ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__146__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15551177887213313347ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__146__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2454660115336732187ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__146__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13656996057954645619ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__147__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6397783634672210918ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__147__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3523139467560510669ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__147__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4241259337150557933ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__148__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7290092109452729063ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__152__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6781235986309900452ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__152__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12198759707640562462ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__152__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3722450503777551464ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__153__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10352474938527362635ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__153__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6649097558348082124ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__153__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4346216941053274122ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__172__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13129718376983005867ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__176__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2011965769899824807ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__176__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17454410337960387498ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__176__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7863880823179614566ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__177__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1265078708982845452ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__177__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2068305989629610561ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__177__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4966239262290248872ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__178__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13334189600070678420ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__182__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2987391956098419903ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__182__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1883266015295528092ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__182__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10823376633493186164ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__183__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8567340494342252321ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__183__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2485687403274224182ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__183__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1723363238386587564ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__184__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8890337853145670827ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__188__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13823234301985167105ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__188__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17988800327000691372ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__188__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17226476162113146293ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__189__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12941593244515118131ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__189__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8238963507040488302ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__189__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13514187333670770281ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__190__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3489895653480465674ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__194__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11226848086636623170ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__194__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11074512906501766339ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__194__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12658310125303309830ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__195__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7695926880707334176ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__195__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16060132641044635709ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__195__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10261818428900823568ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__196__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11594460738695302529ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__200__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15187700299118361456ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__200__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8354681477294159447ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__200__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16758938803446349201ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__201__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2322451834448871891ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__201__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18426579556039024591ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__201__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11458561969067199584ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__202__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6184476315314100538ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__206__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7537115395473619646ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__206__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3794678842670477822ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__206__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 795008659937621438ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__207__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15680195616193737155ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__207__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7829028929897594619ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__207__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5665174123753104113ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__208__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7312335343835367687ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__212__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1861881114068131374ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__212__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3718097477090554994ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__212__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12818578955735432548ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__213__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8220369431774510730ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__213__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11539114219466953024ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__213__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15695841693189130949ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__214__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12276119063195054082ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__218__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6407989579768970407ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__218__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4856913380809299333ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__218__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5994866858772340161ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__219__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4438421871908595066ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__219__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11297532430309646703ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__219__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3168681703864353194ull);
    vlSelf->__Vfunc_aes_mvm__220__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12248622417524708736ull);
    vlSelf->__Vfunc_aes_mvm__220__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2564049653663639868ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__220__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16272580899255336533ull);
    }
    vlSelf->__Vfunc_aes_mvm__220__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2705560911968966779ull);
    vlSelf->__Vfunc_aes_mvm__221__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17285191708391253564ull);
    vlSelf->__Vfunc_aes_mvm__221__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9647938156249860706ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__221__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17304296307572873616ull);
    }
    vlSelf->__Vfunc_aes_mvm__221__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12786807471213505888ull);
    vlSelf->__Vfunc_aes_mvm__222__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3966652494122955958ull);
    vlSelf->__Vfunc_aes_mvm__222__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6101749899437735099ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__222__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2899158422796552671ull);
    }
    vlSelf->__Vfunc_aes_mvm__222__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8980779765530265401ull);
    vlSelf->__Vfunc_aes_mvm__223__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4121366912707212194ull);
    vlSelf->__Vfunc_aes_mvm__223__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4185736367895096265ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__223__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3898975899217637700ull);
    }
    vlSelf->__Vfunc_aes_mvm__223__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18053736750089396070ull);
    vlSelf->__Vfunc_aes_mvm__224__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3248466533294311018ull);
    vlSelf->__Vfunc_aes_mvm__224__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4877286529240603615ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__224__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5017058474880915258ull);
    }
    vlSelf->__Vfunc_aes_mvm__224__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9214166163932778613ull);
    vlSelf->__Vfunc_aes_mvm__225__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17764623170579032819ull);
    vlSelf->__Vfunc_aes_mvm__225__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8065039154201843116ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__225__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15767251182013511663ull);
    }
    vlSelf->__Vfunc_aes_mvm__225__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8141419599380450731ull);
    vlSelf->__Vfunc_aes_mvm__226__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8249828571002374354ull);
    vlSelf->__Vfunc_aes_mvm__226__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7481216042061596817ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__226__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 444437967193664391ull);
    }
    vlSelf->__Vfunc_aes_mvm__226__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5445576361992991790ull);
    vlSelf->__Vfunc_aes_mvm__227__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6917936695888200234ull);
    vlSelf->__Vfunc_aes_mvm__227__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3590815518146515717ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__227__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1342304025771685872ull);
    }
    vlSelf->__Vfunc_aes_mvm__227__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11506636334272908494ull);
    vlSelf->__Vfunc_aes_mvm__228__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9263274371108682933ull);
    vlSelf->__Vfunc_aes_mvm__228__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5084245349663094201ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__228__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10096690949149625857ull);
    }
    vlSelf->__Vfunc_aes_mvm__228__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 308802021110224707ull);
    vlSelf->__Vfunc_aes_mvm__229__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17080644823396128148ull);
    vlSelf->__Vfunc_aes_mvm__229__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9123296416637647951ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__229__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2355682115191726460ull);
    }
    vlSelf->__Vfunc_aes_mvm__229__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6399984668056691479ull);
    vlSelf->__Vfunc_aes_mvm__230__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2941698576280258032ull);
    vlSelf->__Vfunc_aes_mvm__230__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17255426824950569994ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__230__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17419445244071423841ull);
    }
    vlSelf->__Vfunc_aes_mvm__230__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8398360811670081985ull);
    vlSelf->__Vfunc_aes_mvm__231__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12223645948436197705ull);
    vlSelf->__Vfunc_aes_mvm__231__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8165531607213735016ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__231__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3808785730242633608ull);
    }
    vlSelf->__Vfunc_aes_mvm__231__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11431812094788762981ull);
    vlSelf->__Vfunc_aes_square_gf2p2__234__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18341157457240612163ull);
    vlSelf->__Vfunc_aes_square_gf2p2__234__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12509528773485831439ull);
    vlSelf->__Vfunc_aes_square_gf2p2__234__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10933269032579820234ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__235__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10371087591356219978ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__235__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17953211581211106164ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__235__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2032640500307028759ull);
    vlSelf->__Vfunc_aes_square_gf2p2__238__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14727765548637790928ull);
    vlSelf->__Vfunc_aes_square_gf2p2__238__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6131112676786435704ull);
    vlSelf->__Vfunc_aes_square_gf2p2__238__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8620301696951328227ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__239__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9060417963709999691ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__239__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7710887178858885709ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__239__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13383975353008701446ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__240__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16504232494985253375ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__244__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1873452563924899997ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__244__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14149309546278622534ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__244__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16838598051755485701ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__245__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10146166360464269164ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__245__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1011329790899663520ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__245__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18245276604864062070ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__246__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8839474889474774627ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__250__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14888161576449341571ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__250__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4807408114209472764ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__250__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14243473829929722794ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__251__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12881259234087334724ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__251__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14836439154098826619ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__251__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17456320804458659632ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__252__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13026377195111690517ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__256__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7471333628833977497ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__256__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3123443035149178436ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__256__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7084177495891372375ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__257__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12982421827307856760ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__257__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3526514093131704137ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__257__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1115600463199874396ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__258__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12563742728773560678ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__262__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 791011131882654631ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__262__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10450628754383703458ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__262__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1439950396394484968ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__263__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9151782978752208239ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__263__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11187799911522403299ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__263__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7459605011631476185ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__282__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2551398082706297706ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__286__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17281535562162337491ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__286__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15225655784562264847ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__286__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14738238025875225789ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__287__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10065110558512844107ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__287__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8248841902725707705ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__287__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17096151065644977716ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__288__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2287573981382293252ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__292__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 152069859019471414ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__292__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4445293792551787546ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__292__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7031567680588883306ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__293__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1871622863437394098ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__293__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8770876940079344617ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__293__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11053690215444905814ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__294__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14454796497170498921ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__298__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8215077389635914001ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__298__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5444518472175050179ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__298__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15635825661576606403ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__299__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8753363095271161433ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__299__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 144141637795927185ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__299__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11926328737205313787ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__300__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17026015951100949937ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__304__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 867327676023176369ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__304__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13120015169427362537ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__304__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6951413292649831573ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__305__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3386245890523901868ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__305__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15403114486199397145ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__305__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16165055280273783109ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__306__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12378878712396907767ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__310__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7292607569295250200ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__310__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8783075825446608440ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__310__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4430325279960298406ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__311__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10357612932513127183ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__311__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13724026231840152979ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__311__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12440444029516835520ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__312__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9822907657904565885ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__316__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12947841604396722107ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__316__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17500208274006537725ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__316__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7948870329690766137ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__317__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10266477934081446403ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__317__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18133410359582326221ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__317__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4028113674326481578ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__318__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18206847930739347180ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__322__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6374523498602930086ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__322__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6668137190132398092ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__322__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10447367842046329736ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__323__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9643197498258699576ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__323__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 289056146909823645ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__323__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9991405295046562811ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__324__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3101087023043931611ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__328__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13619459819445010149ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__328__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10102786180594114831ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__328__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5833931694376557397ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__329__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9475747826877092823ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__329__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9309755258599714757ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__329__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1579074939856118611ull);
    vlSelf->__Vfunc_aes_mvm__330__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1845605319318986963ull);
    vlSelf->__Vfunc_aes_mvm__330__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10668986527420894572ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__330__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4514894691707597099ull);
    }
    vlSelf->__Vfunc_aes_mvm__330__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7793502690344306181ull);
    vlSelf->__Vfunc_aes_mvm__331__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9067168221248526309ull);
    vlSelf->__Vfunc_aes_mvm__331__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4907132923524368275ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__331__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 314781357177485996ull);
    }
    vlSelf->__Vfunc_aes_mvm__331__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16290269101599111496ull);
    vlSelf->__Vfunc_aes_mvm__332__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17259214336238874080ull);
    vlSelf->__Vfunc_aes_mvm__332__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3489212358460868345ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__332__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15239927640515163284ull);
    }
    vlSelf->__Vfunc_aes_mvm__332__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5515074849938650680ull);
    vlSelf->__Vfunc_aes_mvm__333__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14664713873872988166ull);
    vlSelf->__Vfunc_aes_mvm__333__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15641818555898503343ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__333__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5330699627098077946ull);
    }
    vlSelf->__Vfunc_aes_mvm__333__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7722958574129988066ull);
    vlSelf->__Vfunc_aes_mvm__334__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8750902276793031931ull);
    vlSelf->__Vfunc_aes_mvm__334__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12217738231691991876ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__334__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802670874389866715ull);
    }
    vlSelf->__Vfunc_aes_mvm__334__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7972128413471687440ull);
    vlSelf->__Vfunc_aes_mvm__335__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13500072432965251667ull);
    vlSelf->__Vfunc_aes_mvm__335__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6583411806328874446ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__335__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12379760191860610922ull);
    }
    vlSelf->__Vfunc_aes_mvm__335__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17365422668118814838ull);
    vlSelf->__Vfunc_aes_mvm__336__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15190551792149535689ull);
    vlSelf->__Vfunc_aes_mvm__336__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13436562547198052631ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__336__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16759672324789044552ull);
    }
    vlSelf->__Vfunc_aes_mvm__336__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8206970655397067071ull);
    vlSelf->__Vfunc_aes_mvm__337__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5972653939044993239ull);
    vlSelf->__Vfunc_aes_mvm__337__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18012366291445690165ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__337__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1243197261276246395ull);
    }
    vlSelf->__Vfunc_aes_mvm__337__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9270766320630713329ull);
    vlSelf->__Vfunc_aes_mvm__338__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14434880840897389863ull);
    vlSelf->__Vfunc_aes_mvm__338__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6437824988562294378ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__338__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6145986139666444680ull);
    }
    vlSelf->__Vfunc_aes_mvm__338__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5567777241360635569ull);
    vlSelf->__Vfunc_aes_mvm__339__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14022906084801434129ull);
    vlSelf->__Vfunc_aes_mvm__339__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4882085569765506509ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__339__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14162851926797750606ull);
    }
    vlSelf->__Vfunc_aes_mvm__339__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14192581182003691267ull);
    vlSelf->__Vfunc_aes_mvm__340__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1579901871395824192ull);
    vlSelf->__Vfunc_aes_mvm__340__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10102575300770524036ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__340__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4876120515713364034ull);
    }
    vlSelf->__Vfunc_aes_mvm__340__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15300608981113086523ull);
    vlSelf->__Vfunc_aes_mvm__341__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8385804498048803129ull);
    vlSelf->__Vfunc_aes_mvm__341__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10512465162468998731ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__341__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12237329992443773104ull);
    }
    vlSelf->__Vfunc_aes_mvm__341__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12684951663449080342ull);
    vlSelf->__Vfunc_aes_square_gf2p2__344__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16938174376602158689ull);
    vlSelf->__Vfunc_aes_square_gf2p2__344__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14271994503719477650ull);
    vlSelf->__Vfunc_aes_square_gf2p2__344__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13889279039362926015ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__345__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5336440147963112381ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__345__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2906243263639492845ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__345__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17731436614465879854ull);
    vlSelf->__Vfunc_aes_square_gf2p2__348__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6064546516977515915ull);
    vlSelf->__Vfunc_aes_square_gf2p2__348__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15001846880198129855ull);
    vlSelf->__Vfunc_aes_square_gf2p2__348__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1762219746777676309ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__349__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17821053797304699200ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__349__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1177870498292516884ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__349__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17627622411253001706ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__350__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4575511822678433427ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__354__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14714042089624149030ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__354__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2504092049314551753ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__354__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6284806839147816427ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__355__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3616902504660462274ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__355__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12895318032344096296ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__355__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15026418581700985464ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__356__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6976905185745150880ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__360__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2641079809643188192ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__360__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 533728027198219804ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__360__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6438667105733498054ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__361__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8094302446909535964ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__361__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7345730406568123768ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__361__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2404223308280827223ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__362__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14544711970543570384ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__366__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13746500066923847030ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__366__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8775791065045483258ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__366__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12556505854878784056ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__367__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1110117716320673131ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__367__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13463569155713303378ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__367__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10646286346128069623ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__368__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11439678968253633951ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__372__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3763462097766791991ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__372__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18329869925195120260ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__372__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5330064526614793512ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__373__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8561349379199948065ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__373__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1382782800134117807ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__373__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 664456499992494356ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__392__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15513149916968242979ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__396__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11849977966071691662ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__396__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6410640528467687822ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__396__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8404482395313195522ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__397__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10440986415287161104ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__397__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14689622513595477909ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__397__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4842881517447165930ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__398__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9042686136219081629ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__402__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12936903421257063821ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__402__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12266654807943496085ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__402__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8502378393032797405ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__403__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16960585838964963422ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__403__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14065143015244468259ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__403__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5837376773088053511ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__404__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8494390584017098892ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__408__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1359596027792889244ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__408__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 576900383584313065ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__408__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7817956868024487514ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__409__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 333637056145447337ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__409__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12940355507081888867ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__409__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4712589264925440710ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__410__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1427771129658949642ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__414__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14182935432532525571ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__414__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17308015325428001010ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__414__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10013424947848357630ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__415__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8637331835751125386ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__415__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4661502524665134065ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__415__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10355500023581678938ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__416__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10374532840520723866ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__420__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5186536366830042197ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__420__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2201697632600674930ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__420__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7348320911158246111ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__421__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16949496582833898199ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__421__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3447970164607347534ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__421__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17970173013417034187ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__422__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10567512763627180821ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__426__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11754299665424513874ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__426__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11652549565283261274ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__426__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6054257146538848825ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__427__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13582832513028807807ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__427__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11099509521014693282ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__427__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16122338545780637226ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__428__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2598652879468459349ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__432__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1966727403910534670ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__432__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16652033381743876246ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__432__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14351379255575143259ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__433__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5219959389349632987ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__433__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10274719467160367922ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__433__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7974065340991543585ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__434__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6361462269383662219ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__438__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9427321953968142736ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__438__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9186131218933784054ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__438__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1519097575397802878ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__439__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5194388645593454857ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__439__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2369476096628245792ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__439__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15144704216973102328ull);
    vlSelf->__Vfunc_aes_mvm__440__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10204936315294928725ull);
    vlSelf->__Vfunc_aes_mvm__440__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15888875863690206476ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__440__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2311267802778533371ull);
    }
    vlSelf->__Vfunc_aes_mvm__440__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10840245756688603343ull);
    vlSelf->__Vfunc_aes_mvm__441__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17709115855408296461ull);
    vlSelf->__Vfunc_aes_mvm__441__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17198905350377246706ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__441__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11185396739935563716ull);
    }
    vlSelf->__Vfunc_aes_mvm__441__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4603493521076362420ull);
    vlSelf->__Vfunc_aes_mvm__442__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13958931726554961481ull);
    vlSelf->__Vfunc_aes_mvm__442__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9855822582177896827ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__442__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5109121845006748938ull);
    }
    vlSelf->__Vfunc_aes_mvm__442__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9767450074460723677ull);
    vlSelf->__Vfunc_aes_mvm__443__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12003618459480258986ull);
    vlSelf->__Vfunc_aes_mvm__443__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11314726045404582540ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__443__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14459744223701448334ull);
    }
    vlSelf->__Vfunc_aes_mvm__443__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6581465952071480201ull);
    vlSelf->__Vfunc_aes_mvm__444__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1374673574429714036ull);
    vlSelf->__Vfunc_aes_mvm__444__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10149361170476271286ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__444__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12212413789133709214ull);
    }
    vlSelf->__Vfunc_aes_mvm__444__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16571344413208897908ull);
    vlSelf->__Vfunc_aes_mvm__445__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17095941953937956411ull);
    vlSelf->__Vfunc_aes_mvm__445__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13385287353580737473ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__445__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13314367813748382263ull);
    }
    vlSelf->__Vfunc_aes_mvm__445__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5551206995400632443ull);
    vlSelf->__Vfunc_aes_mvm__446__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8843836690506905865ull);
    vlSelf->__Vfunc_aes_mvm__446__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18231588142153714757ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__446__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8903921265227582460ull);
    }
    vlSelf->__Vfunc_aes_mvm__446__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18048187688032059327ull);
    vlSelf->__Vfunc_aes_mvm__447__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15544550638763753378ull);
    vlSelf->__Vfunc_aes_mvm__447__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11604322144278567045ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__447__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6376547782609122919ull);
    }
    vlSelf->__Vfunc_aes_mvm__447__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13168120291276329195ull);
    vlSelf->__Vfunc_aes_mvm__448__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6062234588400733570ull);
    vlSelf->__Vfunc_aes_mvm__448__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17212381796841326552ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__448__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7420261856530549841ull);
    }
    vlSelf->__Vfunc_aes_mvm__448__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4627183129701984136ull);
    vlSelf->__Vfunc_aes_mvm__449__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6693620717734935981ull);
    vlSelf->__Vfunc_aes_mvm__449__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11337559042716491350ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__449__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14013680333814922839ull);
    }
    vlSelf->__Vfunc_aes_mvm__449__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5475024021368778355ull);
    vlSelf->__Vfunc_aes_mvm__450__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18020972138817593966ull);
    vlSelf->__Vfunc_aes_mvm__450__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8303627801923008771ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__450__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12882050323143349375ull);
    }
    vlSelf->__Vfunc_aes_mvm__450__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12517596747142952138ull);
    vlSelf->__Vfunc_aes_mvm__451__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9199464336432669753ull);
    vlSelf->__Vfunc_aes_mvm__451__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6730573512094283338ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__451__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17193568096052672633ull);
    }
    vlSelf->__Vfunc_aes_mvm__451__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12269221596447498301ull);
    vlSelf->__Vfunc_aes_square_gf2p2__454__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7964473633758391755ull);
    vlSelf->__Vfunc_aes_square_gf2p2__454__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12283638142116183826ull);
    vlSelf->__Vfunc_aes_square_gf2p2__454__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8433072967167860915ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__455__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10687896208867497299ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__455__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13706773438541856363ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__455__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16074914557378284836ull);
    vlSelf->__Vfunc_aes_square_gf2p2__458__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6451842733771869998ull);
    vlSelf->__Vfunc_aes_square_gf2p2__458__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4871039731783858164ull);
    vlSelf->__Vfunc_aes_square_gf2p2__458__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11315865454860345872ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__459__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12368123276063726967ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__459__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11260684149856904740ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__459__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7257177178019284686ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__460__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3457935290843060380ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__464__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6121898584606382675ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__464__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2036171236219841895ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__464__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12213589795069107551ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__465__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12400826542713599220ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__465__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16045423920690587999ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__465__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2062437351307257914ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__466__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15199524973835231673ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__470__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13325143440268121155ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__470__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17962922962475672877ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__470__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6412922111888495427ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__471__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14319034084658735831ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__471__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9250160188851404380ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__471__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13283764872185087634ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__472__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1764538079728421700ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__476__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7595600018336909631ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__476__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10498504937584582499ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__476__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15213950619717242176ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__477__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14166724096133161029ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__477__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12904479783174272961ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__477__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7065171711271857598ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__478__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12147656243713941434ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__482__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17893892400449306425ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__482__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8633093491373289916ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__482__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5409582713247269970ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__483__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16681765146204628580ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__483__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3010844110209275925ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__483__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7820399013772379214ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__502__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6814291591259725102ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__506__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6912740300505965465ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__506__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5973186927025384202ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__506__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2238701594934231153ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__507__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15405787958027107026ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__507__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1058258424835165469ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__507__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12467153854623176104ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__508__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2239141835085550509ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__512__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5130218877633082783ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__512__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13594652419004410346ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__512__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8373609560497214685ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__513__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5317772886411523368ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__513__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17478879968600196164ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__513__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17011004969916593186ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__514__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13322905221665442218ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__518__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15767360274012422344ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__518__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18339620783821843655ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__518__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10377431350024156951ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__519__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8115309934027763889ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__519__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8530272119531793869ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__519__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11753223155077440662ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__520__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15016191212949079784ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__524__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4983348905792615421ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__524__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2517960380330775674ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__524__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5599659113600034044ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__525__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1236797567528764645ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__525__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2963933637823542786ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__525__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2917023073403393042ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__526__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 218193596915062843ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__530__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6048900210643764241ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__530__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13236618169653269982ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__530__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5835761908075660098ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__531__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15321492200372660066ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__531__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3761369604519395948ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__531__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7655489114215641062ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__532__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5147101049529418783ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__536__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10562803646442460127ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__536__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17200582758389687052ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__536__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18075928272327080525ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__537__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16147477761037129278ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__537__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7835169495186317930ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__537__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11619453702951992772ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__538__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15851762772837159471ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__542__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4305139360684114937ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__542__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8952538655917124070ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__542__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8678395018432888644ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__543__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6711813688195885837ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__543__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12307450607238333299ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__543__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3037309501323232816ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__544__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4555651209489420284ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__548__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16839638656910181300ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__548__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7634019786555259047ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__548__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13791848758590740500ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__549__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15709443769470684449ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__549__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6235763878052805857ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__549__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1718790631961314193ull);
    vlSelf->__Vfunc_aes_mvm__550__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5556287597285086324ull);
    vlSelf->__Vfunc_aes_mvm__550__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 884472861274762555ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__550__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4056209525269361022ull);
    }
    vlSelf->__Vfunc_aes_mvm__550__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6361476888892008273ull);
    vlSelf->__Vfunc_aes_mvm__551__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7216335398472697757ull);
    vlSelf->__Vfunc_aes_mvm__551__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2722326202272402103ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__551__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13717682640600025741ull);
    }
    vlSelf->__Vfunc_aes_mvm__551__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9580835359739526149ull);
    vlSelf->__Vfunc_aes_mvm__552__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18204682042723574935ull);
    vlSelf->__Vfunc_aes_mvm__552__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8595414805609059559ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__552__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4037294740903828973ull);
    }
    vlSelf->__Vfunc_aes_mvm__552__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4689311954425709936ull);
    vlSelf->__Vfunc_aes_mvm__553__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10716398060917027069ull);
    vlSelf->__Vfunc_aes_mvm__553__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16302466364494476236ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__553__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8448521928817839336ull);
    }
    vlSelf->__Vfunc_aes_mvm__553__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5095651000021557044ull);
    vlSelf->__Vfunc_aes_mvm__554__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12888486224556817364ull);
    vlSelf->__Vfunc_aes_mvm__554__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1140528518434645652ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__554__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7779430180679834761ull);
    }
    vlSelf->__Vfunc_aes_mvm__554__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7475906459369080345ull);
    vlSelf->__Vfunc_aes_mvm__555__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10030190032535085688ull);
    vlSelf->__Vfunc_aes_mvm__555__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13948654734182112474ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__555__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9947612754335339986ull);
    }
    vlSelf->__Vfunc_aes_mvm__555__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18084429250471872849ull);
    vlSelf->__Vfunc_aes_mvm__556__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13635617039788693024ull);
    vlSelf->__Vfunc_aes_mvm__556__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15517252860353745354ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__556__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4577311686448368769ull);
    }
    vlSelf->__Vfunc_aes_mvm__556__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13348771750876730628ull);
    vlSelf->__Vfunc_aes_mvm__557__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15984668913163728467ull);
    vlSelf->__Vfunc_aes_mvm__557__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5889652045706356967ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__557__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4292202125331820085ull);
    }
    vlSelf->__Vfunc_aes_mvm__557__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 779331104135927669ull);
    vlSelf->__Vfunc_aes_mvm__558__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787260605739254203ull);
    vlSelf->__Vfunc_aes_mvm__558__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7358035234879981928ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__558__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3929915994359468002ull);
    }
    vlSelf->__Vfunc_aes_mvm__558__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16888201450979067913ull);
    vlSelf->__Vfunc_aes_mvm__559__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12415123474290082073ull);
    vlSelf->__Vfunc_aes_mvm__559__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8237723743967251963ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__559__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4816436239934614675ull);
    }
    vlSelf->__Vfunc_aes_mvm__559__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8728177617609547801ull);
    vlSelf->__Vfunc_aes_mvm__560__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9422757058888791265ull);
    vlSelf->__Vfunc_aes_mvm__560__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15483725837757831736ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__560__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2936258602131757554ull);
    }
    vlSelf->__Vfunc_aes_mvm__560__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 509951178167995376ull);
    vlSelf->__Vfunc_aes_mvm__561__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9783078178851540039ull);
    vlSelf->__Vfunc_aes_mvm__561__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6490499167474658466ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__561__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5774012601167854610ull);
    }
    vlSelf->__Vfunc_aes_mvm__561__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8717938480074466114ull);
    vlSelf->__Vfunc_aes_square_gf2p2__564__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15258677890842694808ull);
    vlSelf->__Vfunc_aes_square_gf2p2__564__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3994903378425243031ull);
    vlSelf->__Vfunc_aes_square_gf2p2__564__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6400494937805809335ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__565__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17726799670385728713ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__565__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5168511759809175641ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__565__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7789047680509813273ull);
    vlSelf->__Vfunc_aes_square_gf2p2__568__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13055215906942851605ull);
    vlSelf->__Vfunc_aes_square_gf2p2__568__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2187120097336813600ull);
    vlSelf->__Vfunc_aes_square_gf2p2__568__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14749762591410372057ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__569__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10443319831054142308ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__569__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12062399955894353230ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__569__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17575123714491096752ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__570__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6097861444244117747ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__574__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 668399611161064333ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__574__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 106640850144406662ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__574__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1317570601157098647ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__575__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16031795791838069716ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__575__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15449784449393897745ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__575__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4251518118214906195ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__576__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5880084540988403693ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__580__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6856314088555670066ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__580__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8922887467205437037ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__580__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17847802257193317432ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__581__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10751307651028251952ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__581__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17751045961985894594ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__581__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7785281277177665712ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__582__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14446529224253459839ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__586__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11366350162491697068ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__586__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12301947343298535184ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__586__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10041721663943287158ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__587__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9965541067856600884ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__587__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4082171391358874338ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__587__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7415558302434651775ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__588__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15667714012996054800ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__592__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5451993032589336689ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__592__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5242061257224020729ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__592__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15003568937661717066ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__593__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2177168557996415679ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__593__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14715448983493490364ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__593__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2847498316082843502ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__612__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2190647013393065861ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__616__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16443311363206802976ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__616__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9376719939470246661ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__616__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10714447949261998771ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__617__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 407149695225767761ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__617__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2017638102199351074ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__617__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1406779401749550639ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__618__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15525378577272015325ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__622__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7031071853806435277ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__622__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14925938131726667563ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__622__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6122773715030705705ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__623__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17534357536778924692ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__623__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 103958859687246045ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__623__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7290097693162107163ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__624__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11183350200617083678ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__628__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9647006628027717703ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__628__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 859599777455787263ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__628__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8045738610930615137ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__629__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17669942640637497261ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__629__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12092224945215801378ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__629__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12236430778185657381ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__630__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8748177945143096949ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__634__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3516177211702896412ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__634__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 738667235101018955ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__634__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17653180094322777652ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__635__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6067494228739001431ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__635__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3587022454054584465ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__635__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1635310943222616131ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__636__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4901900243825872003ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__640__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12410803367361575197ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__640__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12660417082350800781ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__640__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3186084191504262971ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__641__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17279296344477316374ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__641__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9807409120461606259ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__641__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8275177905973842150ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__642__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15584715449126333733ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__646__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8317919083052252853ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__646__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13412547777532341870ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__646__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11880316563044563859ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__647__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6720567461337227206ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__647__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14187814839900417844ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__647__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9636809629653546105ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__648__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16713862352935022954ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__652__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16546458148193957853ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__652__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10860997218619908787ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__652__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8993181767056881237ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__653__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 225594012796048878ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__653__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7003604247743385977ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__653__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5490350380313895876ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__654__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13613260081055661229ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__658__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2493050846191025319ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__658__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2412726559522658696ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__658__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1549296116946882444ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__659__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9817629768874885185ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__659__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7835920373148420111ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__659__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10856163761681518734ull);
    vlSelf->__Vfunc_aes_mvm__660__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1690034820977904527ull);
    vlSelf->__Vfunc_aes_mvm__660__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4092234972833410519ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__660__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4410219311104521239ull);
    }
    vlSelf->__Vfunc_aes_mvm__660__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6806511886030162980ull);
    vlSelf->__Vfunc_aes_mvm__661__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12205998957911413099ull);
    vlSelf->__Vfunc_aes_mvm__661__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8823273606422421147ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__661__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9654053779140534272ull);
    }
    vlSelf->__Vfunc_aes_mvm__661__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7520033872586233080ull);
    vlSelf->__Vfunc_aes_mvm__662__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17700937684834314520ull);
    vlSelf->__Vfunc_aes_mvm__662__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3795386320536221694ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__662__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10866392247566590687ull);
    }
    vlSelf->__Vfunc_aes_mvm__662__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12179609414230053371ull);
    vlSelf->__Vfunc_aes_mvm__663__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18217630011345380666ull);
    vlSelf->__Vfunc_aes_mvm__663__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12223893822096090238ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__663__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6177480933588644686ull);
    }
    vlSelf->__Vfunc_aes_mvm__663__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14745782300899939099ull);
    vlSelf->__Vfunc_aes_mvm__664__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8611619822361327255ull);
    vlSelf->__Vfunc_aes_mvm__664__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15262868144182294005ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__664__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11660536604543338835ull);
    }
    vlSelf->__Vfunc_aes_mvm__664__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6905255756553581258ull);
    vlSelf->__Vfunc_aes_mvm__665__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17336702907528616819ull);
    vlSelf->__Vfunc_aes_mvm__665__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12607717022459269200ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__665__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13353694494167275829ull);
    }
    vlSelf->__Vfunc_aes_mvm__665__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5251073777230662973ull);
    vlSelf->__Vfunc_aes_mvm__666__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6455738370474438156ull);
    vlSelf->__Vfunc_aes_mvm__666__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4654021022863767372ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__666__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12066271238564520694ull);
    }
    vlSelf->__Vfunc_aes_mvm__666__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9526012164889211057ull);
    vlSelf->__Vfunc_aes_mvm__667__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16895628614058534461ull);
    vlSelf->__Vfunc_aes_mvm__667__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12511092798032357704ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__667__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15845041259301787497ull);
    }
    vlSelf->__Vfunc_aes_mvm__667__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10144980986311174331ull);
    vlSelf->__Vfunc_aes_mvm__668__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16218881160060404883ull);
    vlSelf->__Vfunc_aes_mvm__668__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11136566037897716410ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__668__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13936166403607821801ull);
    }
    vlSelf->__Vfunc_aes_mvm__668__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4152330897970800701ull);
    vlSelf->__Vfunc_aes_mvm__669__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13257444688974385336ull);
    vlSelf->__Vfunc_aes_mvm__669__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11899190336406501952ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__669__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17403696615631999373ull);
    }
    vlSelf->__Vfunc_aes_mvm__669__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17845515366564930858ull);
    vlSelf->__Vfunc_aes_mvm__670__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9738224053401617693ull);
    vlSelf->__Vfunc_aes_mvm__670__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13522641938596460781ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__670__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2341424313930068072ull);
    }
    vlSelf->__Vfunc_aes_mvm__670__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 114668121755850226ull);
    vlSelf->__Vfunc_aes_mvm__671__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9974153287495862983ull);
    vlSelf->__Vfunc_aes_mvm__671__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14940905357001238766ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__671__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4612341648640913834ull);
    }
    vlSelf->__Vfunc_aes_mvm__671__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16442329434288851343ull);
    vlSelf->__Vfunc_aes_square_gf2p2__674__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2381583968430376570ull);
    vlSelf->__Vfunc_aes_square_gf2p2__674__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11914605973984770530ull);
    vlSelf->__Vfunc_aes_square_gf2p2__674__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17728144354542286061ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__675__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6108278665625007929ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__675__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17022603336738546990ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__675__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10506737890397235620ull);
    vlSelf->__Vfunc_aes_square_gf2p2__678__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1730481756798053736ull);
    vlSelf->__Vfunc_aes_square_gf2p2__678__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12479901550814885875ull);
    vlSelf->__Vfunc_aes_square_gf2p2__678__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4341221732031102518ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__679__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 583131439158433415ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__679__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1841502053570645848ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__679__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11200510362104885352ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__680__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14742647637687338039ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__684__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6362295012211621791ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__684__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12667482988353254644ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__684__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14932661843466887078ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__685__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16845811802520578769ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__685__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3330906922340662565ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__685__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1070150990694671984ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__686__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17675923907373365172ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__690__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7510092206625257886ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__690__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9864244251634417462ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__690__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14786673622769753189ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__691__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11152373483645912974ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__691__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3739289978260559508ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__691__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15624491695109806325ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__692__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16686152350622296818ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__696__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1193169986046025815ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__696__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 470888326963375955ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__696__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3633868155692023448ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__697__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11974505990249710585ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__697__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16420953151556313808ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__697__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6730801497006552422ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__698__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6532085378728394984ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__702__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3685387412866575505ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__702__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9292728959537330998ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__702__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11609149997225563182ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__703__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9854370208262793928ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__703__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1658670394756624446ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__703__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16677534965146716319ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__722__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1228600365801109671ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__726__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9334243620098460624ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__726__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7034310293823154262ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__726__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13537159151234104446ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__727__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14142416791092704898ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__727__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14255791908291920857ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__727__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14023207543511540814ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__728__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12175662571071694069ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__732__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11301823184817076358ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__732__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6789936809705579914ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__732__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2169524744341784478ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__733__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2326483566128177251ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__733__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17344431607711571695ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__733__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12475476580641490012ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__734__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5098137027088792972ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__738__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 872299152109084302ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__738__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5248708170840699225ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__738__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9197745331502220915ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__739__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9151393728818185595ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__739__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13559354417885326425ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__739__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 537073144117711871ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__740__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5976012998977363497ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__744__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15227717633705075755ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__744__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9412899316201695581ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__744__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2780465966305122533ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__745__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9780651421587075843ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__745__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4225184848478846061ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__745__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7742867472453851479ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__746__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1940420199774219938ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__750__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3966025131226981201ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__750__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12614413483193906845ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__750__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15976178228973456811ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__751__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14560679442533550771ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__751__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15895748587865866942ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__751__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1302271375206530566ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__752__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4963963057915097451ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__756__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2075148737136100451ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__756__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15370260640498190951ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__756__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6238933244817318932ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__757__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10952019693384429931ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__757__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12569131163932336324ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__757__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15189012814292386959ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__758__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4566778490880983393ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__762__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5055136634531888208ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__762__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2178356482644633173ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__762__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15854884104733579881ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__763__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3634038117949573453ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__763__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17008582027522898361ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__763__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15663261489743908605ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__764__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16776609898520172899ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__768__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5332711480433694833ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__768__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5584027064802781671ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__768__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12721114477679873610ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__769__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5458984657656175976ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__769__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15547538818881925694ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__769__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5087055912899354506ull);
    vlSelf->__Vfunc_aes_mvm__770__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1728226542534434552ull);
    vlSelf->__Vfunc_aes_mvm__770__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8190538601023247351ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__770__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9110083717549170989ull);
    }
    vlSelf->__Vfunc_aes_mvm__770__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7864613807622517341ull);
    vlSelf->__Vfunc_aes_mvm__771__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 704668490404838718ull);
    vlSelf->__Vfunc_aes_mvm__771__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11635351184585258762ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__771__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9375561429817849857ull);
    }
    vlSelf->__Vfunc_aes_mvm__771__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13371853794859635441ull);
    vlSelf->__Vfunc_aes_mvm__772__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1047822323727192295ull);
    vlSelf->__Vfunc_aes_mvm__772__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7626164485953225321ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__772__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6490484015846212846ull);
    }
    vlSelf->__Vfunc_aes_mvm__772__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15905947373859054483ull);
    vlSelf->__Vfunc_aes_mvm__773__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1515366372669208550ull);
    vlSelf->__Vfunc_aes_mvm__773__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12137637502581343543ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__773__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2004633293413287331ull);
    }
    vlSelf->__Vfunc_aes_mvm__773__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7236774002710602710ull);
    vlSelf->__Vfunc_aes_mvm__774__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15390136058381400775ull);
    vlSelf->__Vfunc_aes_mvm__774__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15717008820059515734ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__774__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2665754579806103400ull);
    }
    vlSelf->__Vfunc_aes_mvm__774__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7815029133598106750ull);
    vlSelf->__Vfunc_aes_mvm__775__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5486887560449713456ull);
    vlSelf->__Vfunc_aes_mvm__775__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2973451731360569476ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__775__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11463492132645350464ull);
    }
    vlSelf->__Vfunc_aes_mvm__775__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16849615724852061434ull);
    vlSelf->__Vfunc_aes_mvm__776__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11510535532615847925ull);
    vlSelf->__Vfunc_aes_mvm__776__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10841021997952443077ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__776__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2404992911967548339ull);
    }
    vlSelf->__Vfunc_aes_mvm__776__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5832125485444690735ull);
    vlSelf->__Vfunc_aes_mvm__777__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1516578474911993266ull);
    vlSelf->__Vfunc_aes_mvm__777__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3657142503927757304ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__777__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16781532154387743406ull);
    }
    vlSelf->__Vfunc_aes_mvm__777__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13190854749043112773ull);
    vlSelf->__Vfunc_aes_mvm__778__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7742637698766964139ull);
    vlSelf->__Vfunc_aes_mvm__778__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 582760363755165853ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__778__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13478539800006108783ull);
    }
    vlSelf->__Vfunc_aes_mvm__778__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6043590720123297149ull);
    vlSelf->__Vfunc_aes_mvm__779__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11945565686231125006ull);
    vlSelf->__Vfunc_aes_mvm__779__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6937441549057461235ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__779__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17356247141461787213ull);
    }
    vlSelf->__Vfunc_aes_mvm__779__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 588811280319633099ull);
    vlSelf->__Vfunc_aes_mvm__780__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15628690990673357584ull);
    vlSelf->__Vfunc_aes_mvm__780__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8854492587981578016ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__780__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15923072905951992928ull);
    }
    vlSelf->__Vfunc_aes_mvm__780__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12340443679417659777ull);
    vlSelf->__Vfunc_aes_mvm__781__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 167825250442721986ull);
    vlSelf->__Vfunc_aes_mvm__781__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5983521569546969875ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__781__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3746188443192528277ull);
    }
    vlSelf->__Vfunc_aes_mvm__781__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9903465550395460301ull);
    vlSelf->__Vfunc_aes_square_gf2p2__784__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12042858191997443409ull);
    vlSelf->__Vfunc_aes_square_gf2p2__784__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8416189922970946730ull);
    vlSelf->__Vfunc_aes_square_gf2p2__784__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11439536804908564535ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__785__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2511743587448012963ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__785__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13277168633961540124ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__785__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12976503147808093205ull);
    vlSelf->__Vfunc_aes_square_gf2p2__788__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3087201389031295886ull);
    vlSelf->__Vfunc_aes_square_gf2p2__788__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4791051876909866994ull);
    vlSelf->__Vfunc_aes_square_gf2p2__788__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17858198324161589653ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__789__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10575192053464896458ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__789__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11213064309991237671ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__789__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5440035844697885871ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__790__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12317385378576562700ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__794__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10525865218214054944ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__794__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13178077156938910327ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__794__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 118300551541774846ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__795__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10045510502738100952ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__795__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6299083125577830340ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__795__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13520066597723845653ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__796__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5996196944212831006ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__800__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 35120640353650241ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__800__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8142657192709155142ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__800__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2349537747529762243ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__801__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2650639023227764438ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__801__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9085716373614843959ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__801__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3402432230365967687ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__802__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1410258083647801746ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__806__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1170491199198800412ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__806__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6035501188259475515ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__806__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10194137001733222140ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__807__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9621112610157781239ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__807__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10001928558288707049ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__807__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7908964745180460379ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__808__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16682781158324776665ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__812__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11756066995165225384ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__812__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10931687396560694441ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__812__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6696723663385745635ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__813__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2219230828571200673ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__813__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17601165436651207537ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__813__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12152359252789648168ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__832__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13589093539658264006ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__836__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9862158170825507968ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__836__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11626311339879038315ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__836__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17679570666751972444ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__837__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14816341172468085954ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__837__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1597504172644085303ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__837__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15363864974172966932ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__838__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15491097383502403737ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__842__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10704105824763278992ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__842__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17737746268675080133ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__842__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15404968518102659106ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__843__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2433901420437416075ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__843__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17568352267301897335ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__843__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16359124425489129017ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__844__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2275925543936977078ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__848__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6700476725645988930ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__848__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4000030255876141439ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__848__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16656764939851912793ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__849__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12369757549385106215ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__849__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18263409710195617640ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__849__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13248926338858656289ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__850__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13936225823257395187ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__854__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6932455683638933826ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__854__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10706943918307733011ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__854__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17893082751782697194ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__855__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11823675536997292672ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__855__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8508106313066201808ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__855__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15176732898805028195ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__856__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5192033705272071959ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__860__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4885421031103045985ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__860__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13655384273230335077ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__860__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13059368088961283948ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__861__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4370711579804008974ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__861__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13386156031171803799ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__861__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12568914215319054528ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__862__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17397198902870344539ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__866__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13460209597134793426ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__866__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4064586358314808974ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__866__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12916949077085654056ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__867__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8252430924217831807ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__867__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2726054395058549308ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__867__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11911562758862627938ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__868__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18220065046647904616ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__872__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11290931703979047393ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__872__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7321018176272171584ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__872__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15036472608021755015ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__873__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3699292866825275801ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__873__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11837646831386002059ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__873__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9173136683896123273ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__874__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4311310609106178153ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__878__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5648313205659177856ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__878__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3421052128663630685ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__878__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13280167558660516206ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__879__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6303391126814629066ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__879__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3279540870358274906ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__879__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15933165498888370225ull);
    vlSelf->__Vfunc_aes_mvm__880__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17828910523020862173ull);
    vlSelf->__Vfunc_aes_mvm__880__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14381868760958587599ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__880__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13254844270246475725ull);
    }
    vlSelf->__Vfunc_aes_mvm__880__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2537669624919419840ull);
    vlSelf->__Vfunc_aes_mvm__881__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8158364048116516205ull);
    vlSelf->__Vfunc_aes_mvm__881__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9340562120373617784ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__881__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 628910788302871348ull);
    }
    vlSelf->__Vfunc_aes_mvm__881__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4035131730142889461ull);
    vlSelf->__Vfunc_aes_mvm__882__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14892300673139265894ull);
    vlSelf->__Vfunc_aes_mvm__882__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13553700421665220433ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__882__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13206504738271786261ull);
    }
    vlSelf->__Vfunc_aes_mvm__882__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15029114366487452320ull);
    vlSelf->__Vfunc_aes_mvm__883__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7881408518575677846ull);
    vlSelf->__Vfunc_aes_mvm__883__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15340506520041398533ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__883__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17162270901080870668ull);
    }
    vlSelf->__Vfunc_aes_mvm__883__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13542018312740175795ull);
    vlSelf->__Vfunc_aes_mvm__884__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 939642046005505836ull);
    vlSelf->__Vfunc_aes_mvm__884__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11650949129647175125ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__884__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10924806962971734655ull);
    }
    vlSelf->__Vfunc_aes_mvm__884__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3272286455179364106ull);
    vlSelf->__Vfunc_aes_mvm__885__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13264454161666648860ull);
    vlSelf->__Vfunc_aes_mvm__885__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17901069464557841324ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__885__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13613045049363070439ull);
    }
    vlSelf->__Vfunc_aes_mvm__885__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5925642476403919789ull);
    vlSelf->__Vfunc_aes_mvm__886__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13072961394269040889ull);
    vlSelf->__Vfunc_aes_mvm__886__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8298601191480510212ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__886__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 570036658343427565ull);
    }
    vlSelf->__Vfunc_aes_mvm__886__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14924422907116094408ull);
    vlSelf->__Vfunc_aes_mvm__887__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18248188256960424288ull);
    vlSelf->__Vfunc_aes_mvm__887__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12765112018169362289ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__887__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2721227491033233327ull);
    }
    vlSelf->__Vfunc_aes_mvm__887__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1595850534896923176ull);
    vlSelf->__Vfunc_aes_mvm__888__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12270574713489804627ull);
    vlSelf->__Vfunc_aes_mvm__888__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14106168483283467143ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__888__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16592914338322323960ull);
    }
    vlSelf->__Vfunc_aes_mvm__888__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16907297959849358758ull);
    vlSelf->__Vfunc_aes_mvm__889__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2035115717393730907ull);
    vlSelf->__Vfunc_aes_mvm__889__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4339815235521039042ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__889__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5618882808690162461ull);
    }
    vlSelf->__Vfunc_aes_mvm__889__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15205651266776099027ull);
    vlSelf->__Vfunc_aes_mvm__890__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8217872544683693484ull);
    vlSelf->__Vfunc_aes_mvm__890__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5356451698677338733ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__890__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9494350096157053330ull);
    }
    vlSelf->__Vfunc_aes_mvm__890__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1045711067330430034ull);
    vlSelf->__Vfunc_aes_mvm__891__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13229141815656398870ull);
    vlSelf->__Vfunc_aes_mvm__891__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15665920292510142696ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__891__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6697088386746526826ull);
    }
    vlSelf->__Vfunc_aes_mvm__891__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16678704479907272886ull);
    vlSelf->__Vfunc_aes_square_gf2p2__894__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3876082924564228071ull);
    vlSelf->__Vfunc_aes_square_gf2p2__894__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13249774518884674155ull);
    vlSelf->__Vfunc_aes_square_gf2p2__894__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18192181223151568187ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__895__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2046141002146074872ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__895__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12631997558101553837ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__895__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15445458610379997389ull);
    vlSelf->__Vfunc_aes_square_gf2p2__898__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15289897944252291750ull);
    vlSelf->__Vfunc_aes_square_gf2p2__898__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 68815972891610675ull);
    vlSelf->__Vfunc_aes_square_gf2p2__898__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16832623422954579685ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__899__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12523264780663258249ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__899__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11842560837240956299ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__899__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3759181365292571195ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__900__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10056073083748197007ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__904__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13591548884020814655ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__904__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1349417534765137767ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__904__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10946984936823030897ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__905__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1272507366735901445ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__905__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9400318043164027825ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__905__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15391061520719932867ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__906__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17780366849667044156ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__910__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6690316628485657020ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__910__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10198684429292258525ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__910__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 760751204839496319ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__911__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11354295187958452691ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__911__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15260672914555313352ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__911__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9144974298533202301ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__912__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9346274795569056447ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__916__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6601038371720879182ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__916__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6616562148049088977ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__916__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10562454092610423520ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__917__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11440830235251272845ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__917__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14890949939812270895ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__917__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 196472499922996768ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__918__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15972280855075381362ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__922__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6826349331340623616ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__922__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8847998714126814523ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__922__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7712807081450421328ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__923__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2880051669285620333ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__923__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13154922665970422566ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__923__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15341965641724612700ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__942__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7211338747183023556ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__946__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12173379483145473568ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__946__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10670024406362775511ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__946__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16824708162298320492ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__947__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12536720272110707219ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__947__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11029133328748381827ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__947__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14814901674433383394ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__948__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18183982511998249165ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__952__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11316104631792319534ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__952__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5175962551953853461ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__952__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18404808983256244337ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__953__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15108507429920991537ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__953__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17475276477102315415ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__953__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10159800412712796513ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__954__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9676866960275454852ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__958__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5687908891323960116ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__958__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13642290387026911327ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__958__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6185738960622544895ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__959__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1775757327831006001ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__959__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8384815752158020895ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__959__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13704284705104863770ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__960__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5166926265684573653ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__964__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15687170742601325619ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__964__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5753402062052536620ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__964__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8838246011421818568ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__965__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15629740990707956567ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__965__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10257803164795182024ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__965__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2858431041136724010ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__966__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10129756639534162083ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__970__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17378899304562712455ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__970__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2083036998857706557ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__970__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15307960700198803730ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__971__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5051275725411853780ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__971__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5270156831641238908ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__971__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 637870525935086732ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__972__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13989744253751384531ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__976__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12747336239254580281ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__976__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14567929645312371202ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__976__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16112782555219449795ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__977__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12709181590839812027ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__977__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16470669346401656677ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__977__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14356148383080100163ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__978__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15695096145999962369ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__982__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16298431656646550541ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__982__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10749231245036633438ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__982__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15984804138714683919ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__983__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14395534593839762223ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__983__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15669967428023585809ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__983__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13052847622950246829ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__984__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1412679003706775232ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__988__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13898554791196436092ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__988__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14713195833773032176ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__988__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5864019162121326208ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__989__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15587253624416144243ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__989__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7619160552570114880ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__989__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8797966679179145150ull);
    vlSelf->__Vfunc_aes_mvm__990__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10667122020414230744ull);
    vlSelf->__Vfunc_aes_mvm__990__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7549035531669656742ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__990__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16549063849137757261ull);
    }
    vlSelf->__Vfunc_aes_mvm__990__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2738381912184081298ull);
    vlSelf->__Vfunc_aes_mvm__991__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18071915524401030428ull);
    vlSelf->__Vfunc_aes_mvm__991__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17736530119185681758ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__991__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15673946975434581770ull);
    }
    vlSelf->__Vfunc_aes_mvm__991__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 455342894968590851ull);
    vlSelf->__Vfunc_aes_mvm__992__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12235285783726762096ull);
    vlSelf->__Vfunc_aes_mvm__992__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 43557588752778022ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__992__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 46948149413697029ull);
    }
    vlSelf->__Vfunc_aes_mvm__992__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6370548045735676721ull);
    vlSelf->__Vfunc_aes_mvm__993__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10561391398983211881ull);
    vlSelf->__Vfunc_aes_mvm__993__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15832570858527197983ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__993__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8776864674856928775ull);
    }
    vlSelf->__Vfunc_aes_mvm__993__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 481275988213044410ull);
    vlSelf->__Vfunc_aes_mvm__994__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9854333200774034281ull);
    vlSelf->__Vfunc_aes_mvm__994__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5141566067125053141ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__994__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12176796740937415779ull);
    }
    vlSelf->__Vfunc_aes_mvm__994__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1682437782670169120ull);
    vlSelf->__Vfunc_aes_mvm__995__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11428827914738736252ull);
    vlSelf->__Vfunc_aes_mvm__995__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12957833695860870574ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__995__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13843884301026823735ull);
    }
    vlSelf->__Vfunc_aes_mvm__995__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2807976678018216764ull);
    vlSelf->__Vfunc_aes_mvm__996__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6394640204746340922ull);
    vlSelf->__Vfunc_aes_mvm__996__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5400017325922831363ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__996__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9579758138154456071ull);
    }
    vlSelf->__Vfunc_aes_mvm__996__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17495527938823052086ull);
    vlSelf->__Vfunc_aes_mvm__997__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5649041386107579802ull);
    vlSelf->__Vfunc_aes_mvm__997__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6118993942191540347ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__997__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10052169427485225841ull);
    }
    vlSelf->__Vfunc_aes_mvm__997__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1449097533346290664ull);
    vlSelf->__Vfunc_aes_mvm__998__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5814402363037911731ull);
    vlSelf->__Vfunc_aes_mvm__998__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7780387738626536410ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__998__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 92079728801293177ull);
    }
    vlSelf->__Vfunc_aes_mvm__998__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15452448498411056267ull);
    vlSelf->__Vfunc_aes_mvm__999__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12577093212680504221ull);
    vlSelf->__Vfunc_aes_mvm__999__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6291509626814172784ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__999__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16774613971153405507ull);
    }
    vlSelf->__Vfunc_aes_mvm__999__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14353648072806642070ull);
    vlSelf->__Vfunc_aes_mvm__1000__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4079737327679403287ull);
    vlSelf->__Vfunc_aes_mvm__1000__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5321973151137105732ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1000__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10596562498578633927ull);
    }
    vlSelf->__Vfunc_aes_mvm__1000__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7770419506254272857ull);
    vlSelf->__Vfunc_aes_mvm__1001__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15110755898985909603ull);
    vlSelf->__Vfunc_aes_mvm__1001__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6379790410178589588ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1001__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 287194419699700291ull);
    }
    vlSelf->__Vfunc_aes_mvm__1001__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12365088421735803167ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1004__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8733128319258207295ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1004__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7630552687684134548ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1004__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7569974133453043642ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1005__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 458370389798642499ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1005__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14006071406372629854ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1005__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2031920074403008667ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1008__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11086203120285194163ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1008__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1304056947952576226ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1008__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11831641356792095928ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1009__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7475628049074519509ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1009__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8106500338602304352ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1009__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17237827734283306095ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1010__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13965550047231497014ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1014__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6330129693203616435ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1014__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14949672891356836463ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1014__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6463019933707676744ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1015__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17558677279350136449ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1015__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7384096604636873067ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1015__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6947012923038251155ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1016__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8260813333157405850ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1020__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7682200837078688946ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1020__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13807253603906857241ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1020__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1491066952252527943ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1021__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9954772042160293524ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1021__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2660686584888140927ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1021__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 404606355898278034ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1022__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18276258519991902572ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1026__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13344977543212611451ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1026__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18169952259646448696ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1026__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3979851409635680613ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1027__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 533914644710700626ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1027__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9033922387241658705ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1027__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8596838705643016202ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1028__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1904473998041810106ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1032__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9096492484852811572ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1032__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10206448179275445704ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1032__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11779901644290621406ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1033__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8263903337654341442ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1033__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10460840393303376988ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1033__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7004982715945882307ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1052__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13582305811902617773ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1056__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10773321177256592473ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1056__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15917915908137261261ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1056__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15004172627448602487ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1057__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10501529278592064001ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1057__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18283067982147600708ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1057__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4430035507131180590ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1058__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14426248652122672843ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1062__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3991406865026245202ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1062__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1661524302021810805ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1062__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8938425659398588165ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1063__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2866022301690274899ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1063__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15225881847694809882ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1063__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12105608407412690901ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1064__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17180650608883045393ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1068__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4067479195439139151ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1068__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13434747384065074184ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1068__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6149356012702614592ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1069__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5675334599666064338ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1069__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17714666305077935040ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1069__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 32100136056628884ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1070__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2673822031609350594ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1074__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12598926568510224758ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1074__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9604237610370823164ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1074__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5337620234767123286ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1075__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12960431892070937014ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1075__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16459878690375211612ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1075__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16886988220068981821ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16634433077412544496ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1080__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8093811488665726022ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1080__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8976834152097707523ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1080__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4710216776494083985ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1081__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3153405936039313868ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1081__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 68920917076218282ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1081__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16259584761795906830ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1082__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15263906731810721442ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1086__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15508189282932145657ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1086__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1264436824801801833ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1086__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2837890289816940255ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1087__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2479765442259695248ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1087__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6442156719429682247ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1087__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6005073037831063455ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2609263745528464584ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1092__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14400122993162873166ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1092__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6381297300773119636ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1092__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 240765726812914845ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1093__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11496769264315572625ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1093__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6528221915109160336ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1093__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11121933513802455033ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1094__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6382004429410333094ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1098__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1224853630676046622ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1098__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8870081758156282950ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1098__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12317449421527891353ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1099__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10994309499817681901ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1099__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10359343320793623560ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1099__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3409536186506524467ull);
    vlSelf->__Vfunc_aes_mvm__1100__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11020022624326508910ull);
    vlSelf->__Vfunc_aes_mvm__1100__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9528761183175095183ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1100__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6583525922357034583ull);
    }
    vlSelf->__Vfunc_aes_mvm__1100__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18258457036581158627ull);
    vlSelf->__Vfunc_aes_mvm__1101__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12897894035878687429ull);
    vlSelf->__Vfunc_aes_mvm__1101__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7834121447835471683ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1101__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11541410994113725956ull);
    }
    vlSelf->__Vfunc_aes_mvm__1101__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2651278312114591741ull);
    vlSelf->__Vfunc_aes_mvm__1102__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6661473647180251977ull);
    vlSelf->__Vfunc_aes_mvm__1102__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5300187518825564653ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1102__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18203279398272593038ull);
    }
    vlSelf->__Vfunc_aes_mvm__1102__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 634148802220521277ull);
    vlSelf->__Vfunc_aes_mvm__1103__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13655613796573872498ull);
    vlSelf->__Vfunc_aes_mvm__1103__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14516893557850070268ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1103__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2363050391904022548ull);
    }
    vlSelf->__Vfunc_aes_mvm__1103__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4525964911340342630ull);
    vlSelf->__Vfunc_aes_mvm__1104__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7663357600114311090ull);
    vlSelf->__Vfunc_aes_mvm__1104__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1731148786471762187ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1104__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8834092090416763477ull);
    }
    vlSelf->__Vfunc_aes_mvm__1104__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3629818058336775072ull);
    vlSelf->__Vfunc_aes_mvm__1105__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17876427799503538574ull);
    vlSelf->__Vfunc_aes_mvm__1105__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12309938055249403717ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1105__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6583981168860068516ull);
    }
    vlSelf->__Vfunc_aes_mvm__1105__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4502461914984123505ull);
    vlSelf->__Vfunc_aes_mvm__1106__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1737245059433264696ull);
    vlSelf->__Vfunc_aes_mvm__1106__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18276574461115620600ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1106__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13442949737618698990ull);
    }
    vlSelf->__Vfunc_aes_mvm__1106__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13003686045038328522ull);
    vlSelf->__Vfunc_aes_mvm__1107__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2438565635738093650ull);
    vlSelf->__Vfunc_aes_mvm__1107__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17020560121079753328ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1107__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15780960778083425727ull);
    }
    vlSelf->__Vfunc_aes_mvm__1107__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15739943961693529750ull);
    vlSelf->__Vfunc_aes_mvm__1108__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12911113298670243744ull);
    vlSelf->__Vfunc_aes_mvm__1108__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10758519330650189885ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1108__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15483285862997117721ull);
    }
    vlSelf->__Vfunc_aes_mvm__1108__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15540683781385672058ull);
    vlSelf->__Vfunc_aes_mvm__1109__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6563535685312335733ull);
    vlSelf->__Vfunc_aes_mvm__1109__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8613250241101529210ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1109__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6414692427367779435ull);
    }
    vlSelf->__Vfunc_aes_mvm__1109__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6925063186368107623ull);
    vlSelf->__Vfunc_aes_mvm__1110__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14831607930106154768ull);
    vlSelf->__Vfunc_aes_mvm__1110__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9415571290914842455ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1110__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12132195360627511768ull);
    }
    vlSelf->__Vfunc_aes_mvm__1110__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8942250826232768664ull);
    vlSelf->__Vfunc_aes_mvm__1111__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16562450371750209201ull);
    vlSelf->__Vfunc_aes_mvm__1111__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1977238448862264295ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1111__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4897939969231039760ull);
    }
    vlSelf->__Vfunc_aes_mvm__1111__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3076881687778593541ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1114__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3565755901674849621ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1114__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13836171905704317303ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1114__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17053264682212900573ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1115__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5609782373833857639ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1115__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14387376820379832678ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1115__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6042313187183188860ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1118__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11113961384567583083ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1118__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16492924646428540297ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1118__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15702019085745838546ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1119__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14943954238915431731ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1119__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14594901810356897284ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1119__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4563930320748211066ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1120__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17709150897024104369ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1124__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11206842254975880222ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1124__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9246200450361122475ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1124__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11324514408908578530ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1125__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2600737888408085358ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1125__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9310713143347542861ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1125__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10968062667631532455ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1126__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14462456620667175612ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1130__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7351195672267144851ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1130__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13691892452181707815ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1130__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2605945795117869215ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1131__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5971989062253028322ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1131__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17889399451844890915ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1131__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6803452794781003419ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3276161048702446023ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1136__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15977813295616166744ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1136__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13498971288800462244ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1136__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17030235011441201086ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1137__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15627249959807335840ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1137__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13142519547523716320ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1137__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11391299812065857029ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11896431306387343279ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1142__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1628327860641959406ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1142__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16409030231636787437ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1142__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5323083574572755960ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1143__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10627460965268490629ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1143__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3309282309011871597ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1143__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5387596267559241431ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1162__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1111260794728093289ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1166__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9200820131921803100ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1166__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1995597934633910760ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1166__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 244378199176214085ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1167__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6314057148710281916ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1167__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6193104934297125866ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1167__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9724368656937730551ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9322565266556485078ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1172__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7483774890611618112ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1172__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6441289936454515307ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1172__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9972553659095169134ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1173__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3861427187531962937ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1173__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10638796936117640559ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1173__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14170060658758375268ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3709582323046538112ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1178__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10310807118310600287ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1178__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2418835079068237259ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1178__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9779632495713919203ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1179__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3278389342996570477ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1179__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11898825536829755438ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1179__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8273691603015369906ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1180__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14913167473967505299ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1184__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8041235170773736468ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1184__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 641942469373628608ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1184__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2720256427920968763ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1185__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 517265892460596879ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1185__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 706455162360041394ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1185__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2363804686644022600ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16243422777461864028ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1190__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 232124715403235762ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1190__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5087634471194205724ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1190__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12448431887839894096ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1191__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8590069234401152330ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1191__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10434630622278875615ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1191__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6809496688464684011ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9186196608838957368ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1196__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15374665450939218257ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1196__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10177196765911210606ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1196__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2722529138091929993ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1197__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 940522826395917242ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1197__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4538261566536066777ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1197__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2787041831078385770ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9592105277189730886ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1202__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3476984948556610587ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1202__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 668763952370632023ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1202__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1236948844078928087ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1203__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14317146054629118856ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1203__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9043263123456555695ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1203__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10980501719989330804ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1204__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15465304161082352712ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1208__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15611333619771777775ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1208__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13219138970337391649ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1208__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17671775207015883445ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1209__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16269007482326498937ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1209__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5020808266070244527ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1209__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10787580556608093685ull);
    vlSelf->__Vfunc_aes_mvm__1210__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2647936547781832441ull);
    vlSelf->__Vfunc_aes_mvm__1210__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5227530570949855954ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1210__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15635148987719509636ull);
    }
    vlSelf->__Vfunc_aes_mvm__1210__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12527707625640749310ull);
    vlSelf->__Vfunc_aes_mvm__1211__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2330842904711323932ull);
    vlSelf->__Vfunc_aes_mvm__1211__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 704623508409404599ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1211__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7257794905836322336ull);
    }
    vlSelf->__Vfunc_aes_mvm__1211__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14589369462948117582ull);
    vlSelf->__Vfunc_aes_mvm__1212__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12243872132030731776ull);
    vlSelf->__Vfunc_aes_mvm__1212__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9535235819092417553ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1212__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7406356990066239427ull);
    }
    vlSelf->__Vfunc_aes_mvm__1212__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1161832313242165233ull);
    vlSelf->__Vfunc_aes_mvm__1213__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2005924316380707266ull);
    vlSelf->__Vfunc_aes_mvm__1213__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7442973344691515761ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1213__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4237987544323679325ull);
    }
    vlSelf->__Vfunc_aes_mvm__1213__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3067673165245359801ull);
    vlSelf->__Vfunc_aes_mvm__1214__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7682467090310622735ull);
    vlSelf->__Vfunc_aes_mvm__1214__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7245604280744736373ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1214__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15781140825793316612ull);
    }
    vlSelf->__Vfunc_aes_mvm__1214__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 52223998410122965ull);
    vlSelf->__Vfunc_aes_mvm__1215__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18015727817858611781ull);
    vlSelf->__Vfunc_aes_mvm__1215__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11117549412541003165ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1215__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11071318785404621220ull);
    }
    vlSelf->__Vfunc_aes_mvm__1215__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5015488728036683458ull);
    vlSelf->__Vfunc_aes_mvm__1216__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2400297629661813991ull);
    vlSelf->__Vfunc_aes_mvm__1216__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8622141177239018814ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1216__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17594643151499225224ull);
    }
    vlSelf->__Vfunc_aes_mvm__1216__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4067492790287260561ull);
    vlSelf->__Vfunc_aes_mvm__1217__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2166894987385830145ull);
    vlSelf->__Vfunc_aes_mvm__1217__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10936409447293215270ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1217__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15651382458853941556ull);
    }
    vlSelf->__Vfunc_aes_mvm__1217__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18225242513932410287ull);
    vlSelf->__Vfunc_aes_mvm__1218__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3081497735548124494ull);
    vlSelf->__Vfunc_aes_mvm__1218__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16699140721138688493ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1218__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13655708664677988857ull);
    }
    vlSelf->__Vfunc_aes_mvm__1218__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6289260826013121732ull);
    vlSelf->__Vfunc_aes_mvm__1219__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18319615993448346963ull);
    vlSelf->__Vfunc_aes_mvm__1219__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11576262353823525057ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1219__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5827181340035811266ull);
    }
    vlSelf->__Vfunc_aes_mvm__1219__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17254177022747501162ull);
    vlSelf->__Vfunc_aes_mvm__1220__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7498913465381830268ull);
    vlSelf->__Vfunc_aes_mvm__1220__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13163809610254592467ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1220__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10578056751028848767ull);
    }
    vlSelf->__Vfunc_aes_mvm__1220__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8168335877661643431ull);
    vlSelf->__Vfunc_aes_mvm__1221__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4128153194400039230ull);
    vlSelf->__Vfunc_aes_mvm__1221__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10947047611114923363ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1221__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17470048853913105447ull);
    }
    vlSelf->__Vfunc_aes_mvm__1221__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9366256630202042427ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1224__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6295308434031737132ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1224__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 856295132356822523ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1224__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9897807885165633729ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1225__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5913331179634384876ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1225__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1254630599773708861ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1225__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5174118268821770337ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1228__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16451244880663687290ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1228__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8587287056784857038ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1228__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1102507546614324320ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1229__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 705880076587773846ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1229__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16701553912811934657ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1229__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 736932613444810479ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1230__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12956073075434960352ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1234__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11231478889373332541ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1234__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15143154671550176481ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1234__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11881805869253267320ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1235__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15954206304150230322ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1235__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4053943895538937154ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1235__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 960387211779878254ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1236__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14951679249971758526ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1240__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12906156852161766927ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1240__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6899490145388685379ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1240__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15349452194609919982ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1241__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9886128688189829655ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1241__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12414278415011131588ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1241__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2249704271985155215ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 673339850480107242ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1246__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8727306462204297535ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1246__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6706568982007504911ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1246__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3613012298248409195ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1247__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2517472775526798750ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1247__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9033306999414078971ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1247__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10970545595946887482ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16597604040498264040ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1252__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14297444907079830045ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1252__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7463802651837717355ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1252__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17787678899415426033ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1253__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2530991050191110495ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1253__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2413624005263463335ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1253__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17431227158138679436ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1272__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 166837685272533111ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1276__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15721337650174620198ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1276__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10434666552491697431ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1276__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5973540301827463935ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1277__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10766885317367331439ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1277__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18108388550455585ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1277__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5784880679088173275ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8540267401579525975ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1282__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13680105895117448067ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1282__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8236809508533802031ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1282__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11657460415382525140ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1283__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14196991988769364367ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1283__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3018838743421923843ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1283__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3587023635130245116ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14421647757669510805ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1288__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13264105783300662636ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1288__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15757873384127981249ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1288__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1931557665634596925ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1289__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1350881427228366318ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1289__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15569213761388598422ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1289__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7278553816719235260ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1290__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14834023080961833505ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1294__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4378908116924864135ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1294__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2429473924308791001ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1294__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14763887318500269694ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1295__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17383651552633554507ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1295__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11464928407383962872ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1295__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 321802447574148159ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9813389051709178982ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1300__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2009377481767634618ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1300__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11700401145714796984ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1300__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 530558429381932699ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1301__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2213863413420595144ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1301__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4564518317500332031ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1301__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5915968637070282082ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 737868609599040730ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1306__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6844327010222197098ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1306__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9159874460725239386ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1306__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18057517700732821850ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1307__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18146020101457607927ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1307__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16433511699154753377ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1307__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4033428988231725171ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7039745952747063164ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1312__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3185975920392403715ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1312__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16290240359148664411ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1312__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9759913521205536868ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1313__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15288722805418888546ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1313__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 545716734443861128ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1313__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4802359958142544669ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1314__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4336692787445501507ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1318__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12471730669304602959ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1318__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9668491802347645598ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1318__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13925135026046327790ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1319__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7971523593534013476ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1319__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12414710116098443599ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1319__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14409128015376858473ull);
    vlSelf->__Vfunc_aes_mvm__1320__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15281019534369083647ull);
    vlSelf->__Vfunc_aes_mvm__1320__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 306333431514005826ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1320__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17289420668758173273ull);
    }
    vlSelf->__Vfunc_aes_mvm__1320__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4155428068130929116ull);
    vlSelf->__Vfunc_aes_mvm__1321__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17489887301357630410ull);
    vlSelf->__Vfunc_aes_mvm__1321__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6611350967609194308ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1321__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483350140607219309ull);
    }
    vlSelf->__Vfunc_aes_mvm__1321__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10358243661302094979ull);
    vlSelf->__Vfunc_aes_mvm__1322__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14857416417509976340ull);
    vlSelf->__Vfunc_aes_mvm__1322__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1106222504082067438ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1322__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2007630442154641770ull);
    }
    vlSelf->__Vfunc_aes_mvm__1322__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13773662640459538841ull);
    vlSelf->__Vfunc_aes_mvm__1323__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8699391013737989917ull);
    vlSelf->__Vfunc_aes_mvm__1323__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15872153089593602165ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1323__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7201755356856278565ull);
    }
    vlSelf->__Vfunc_aes_mvm__1323__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5947486082100958785ull);
    vlSelf->__Vfunc_aes_mvm__1324__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14816767969332016987ull);
    vlSelf->__Vfunc_aes_mvm__1324__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10549819987350432264ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1324__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6710651004766738133ull);
    }
    vlSelf->__Vfunc_aes_mvm__1324__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14938902746890566755ull);
    vlSelf->__Vfunc_aes_mvm__1325__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1414074584066803985ull);
    vlSelf->__Vfunc_aes_mvm__1325__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9965712078479099349ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1325__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5074007742128268381ull);
    }
    vlSelf->__Vfunc_aes_mvm__1325__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4525031543864234543ull);
    vlSelf->__Vfunc_aes_mvm__1326__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16973440367003329351ull);
    vlSelf->__Vfunc_aes_mvm__1326__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17639422876188981823ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1326__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7381252963129137394ull);
    }
    vlSelf->__Vfunc_aes_mvm__1326__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1812840006095751873ull);
    vlSelf->__Vfunc_aes_mvm__1327__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8622623945481498952ull);
    vlSelf->__Vfunc_aes_mvm__1327__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16688135232821326540ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1327__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11186156383577792638ull);
    }
    vlSelf->__Vfunc_aes_mvm__1327__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1408573907125934092ull);
    vlSelf->__Vfunc_aes_mvm__1328__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8936191185741711389ull);
    vlSelf->__Vfunc_aes_mvm__1328__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3566080576656283931ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1328__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16848883633489677895ull);
    }
    vlSelf->__Vfunc_aes_mvm__1328__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16805597299706113755ull);
    vlSelf->__Vfunc_aes_mvm__1329__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6053737314975399831ull);
    vlSelf->__Vfunc_aes_mvm__1329__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14231756570853308526ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1329__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 357916515408995582ull);
    }
    vlSelf->__Vfunc_aes_mvm__1329__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13414618572557453264ull);
    vlSelf->__Vfunc_aes_mvm__1330__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 37758697752228309ull);
    vlSelf->__Vfunc_aes_mvm__1330__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7343676953907219469ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1330__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15538997742775385395ull);
    }
    vlSelf->__Vfunc_aes_mvm__1330__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5016938936500490745ull);
    vlSelf->__Vfunc_aes_mvm__1331__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4289393494537630108ull);
    vlSelf->__Vfunc_aes_mvm__1331__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2977611103474388772ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1331__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18090617784043600699ull);
    }
    vlSelf->__Vfunc_aes_mvm__1331__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2847579760745605437ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1334__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15621286327045161421ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1334__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5201496591686973415ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1334__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1497027309534776714ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1335__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6826647757347989336ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1335__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14561018426182195490ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1335__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12347612005933750509ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1338__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12689847874320650706ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1338__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14497470271623789358ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1338__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11486079925864339925ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1339__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14890657102535176234ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1339__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15554141385605052563ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1339__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13201921255122634150ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1340__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5593992903653605322ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1344__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14098466185152743803ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1344__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17822102234620476259ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1344__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3409998239164416873ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1345__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10500386610168915502ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1345__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5225730667608502249ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1345__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5989908572296753828ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1346__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6166150706485491732ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1350__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4959594191897316135ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1350__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2063685331843393701ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1350__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10540364137587788649ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1351__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16962390057749865672ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1351__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10008491044423718192ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1351__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16139048466479028494ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1352__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15576855963906699644ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1356__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8060163018718530976ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1356__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 722936095221500984ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1356__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7999837452598295768ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1357__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11849575687790971956ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1357__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8333641708645638158ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1357__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17872768390442587131ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1358__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16723593774242443849ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1362__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2324501340722986574ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1362__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12323812989119240134ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1362__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8057195613515694188ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1363__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16385208077195213918ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1363__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14231070710181689886ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1363__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1914884058527523779ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1382__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6072343587464036862ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1386__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18017439986177626060ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1386__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4392406831804013417ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1386__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11669308189180718793ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1387__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6137426660335330204ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1387__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2119527165343682691ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1387__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5313722512989785381ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1388__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7927631900098365286ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1392__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17597631587127683756ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1392__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2142563805955934752ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1392__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10872414927426024604ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1393__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1489627289882561004ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1393__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15035752877478341436ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1393__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2719566225824054026ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1394__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3321297783466523504ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1398__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8342161730842672227ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1398__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11245955507577186725ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1398__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6979338131973631551ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1399__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6197750888747349203ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1399__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2962244606122173069ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1399__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12922335722182460917ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1400__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18049948640074808946ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1404__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8308747907870704469ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1404__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16170437360841815767ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1404__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7542709041178060114ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1405__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6537234492159118539ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1405__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7596624224976692679ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1405__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17415639979022227009ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18321245999869884426ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1410__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5202679316333093268ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1410__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10553054664159880441ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1410__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1591226245339763210ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1411__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11659360963594012559ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1411__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15938464871848086316ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1411__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11140270246189436611ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1412__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16660892330294559767ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1416__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9543824868624571605ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1416__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4182994285165286013ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1416__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17831543733215993826ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1417__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 882977394975167337ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1417__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14055925223009640797ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1417__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2551982407520630002ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8488027393821995244ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1422__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17135985417707310133ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1422__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1698238049413816101ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1422__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11517253803459580322ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1423__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5926894127061142832ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1423__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2960867112586958244ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1423__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12779882866632566586ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1424__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2814600995552344026ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1428__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8907975121364524157ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1428__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13774921744128829465ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1428__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8976727118470109648ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1429__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10443414675769411946ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1429__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5201108608263587641ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1429__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 402913982604814625ull);
    vlSelf->__Vfunc_aes_mvm__1430__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13735395968929289080ull);
    vlSelf->__Vfunc_aes_mvm__1430__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6368704697047364832ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1430__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9502173165647047659ull);
    }
    vlSelf->__Vfunc_aes_mvm__1430__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1748219508978781054ull);
    vlSelf->__Vfunc_aes_mvm__1431__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17366686437956435259ull);
    vlSelf->__Vfunc_aes_mvm__1431__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9381071041970722781ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1431__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4032319456095303147ull);
    }
    vlSelf->__Vfunc_aes_mvm__1431__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1247128161555868600ull);
    vlSelf->__Vfunc_aes_mvm__1432__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17858238784568672599ull);
    vlSelf->__Vfunc_aes_mvm__1432__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14940163431357414021ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1432__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7386499127237166433ull);
    }
    vlSelf->__Vfunc_aes_mvm__1432__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17044191679261075331ull);
    vlSelf->__Vfunc_aes_mvm__1433__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14037051699954023122ull);
    vlSelf->__Vfunc_aes_mvm__1433__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8751620323866857525ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1433__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10441804289845921640ull);
    }
    vlSelf->__Vfunc_aes_mvm__1433__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16588746335838935550ull);
    vlSelf->__Vfunc_aes_mvm__1434__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3708102208523295799ull);
    vlSelf->__Vfunc_aes_mvm__1434__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 198084724098303467ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1434__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16858344450571439066ull);
    }
    vlSelf->__Vfunc_aes_mvm__1434__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5267381928843438115ull);
    vlSelf->__Vfunc_aes_mvm__1435__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17662229238429667062ull);
    vlSelf->__Vfunc_aes_mvm__1435__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 933546393444055168ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1435__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14218101110575336480ull);
    }
    vlSelf->__Vfunc_aes_mvm__1435__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5335385753083744199ull);
    vlSelf->__Vfunc_aes_mvm__1436__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14521300451291660213ull);
    vlSelf->__Vfunc_aes_mvm__1436__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13656611706995098125ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1436__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10616734036259986815ull);
    }
    vlSelf->__Vfunc_aes_mvm__1436__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11459569902896934616ull);
    vlSelf->__Vfunc_aes_mvm__1437__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2035269456367809844ull);
    vlSelf->__Vfunc_aes_mvm__1437__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6202757659346283737ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1437__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15943057303380270400ull);
    }
    vlSelf->__Vfunc_aes_mvm__1437__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18012931319380363309ull);
    vlSelf->__Vfunc_aes_mvm__1438__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14908113394927899998ull);
    vlSelf->__Vfunc_aes_mvm__1438__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5094198203670872296ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1438__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9208267582953842467ull);
    }
    vlSelf->__Vfunc_aes_mvm__1438__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 488767632699308697ull);
    vlSelf->__Vfunc_aes_mvm__1439__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17962778769581346026ull);
    vlSelf->__Vfunc_aes_mvm__1439__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7136371081310424695ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1439__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17077975953702453667ull);
    }
    vlSelf->__Vfunc_aes_mvm__1439__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10068015933850749283ull);
    vlSelf->__Vfunc_aes_mvm__1440__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15987642667260546247ull);
    vlSelf->__Vfunc_aes_mvm__1440__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9832370325287580626ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1440__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13030141658749851523ull);
    }
    vlSelf->__Vfunc_aes_mvm__1440__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18337306858326196800ull);
    vlSelf->__Vfunc_aes_mvm__1441__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8111608950651022509ull);
    vlSelf->__Vfunc_aes_mvm__1441__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2095570825868745240ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1441__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4669868979487004991ull);
    }
    vlSelf->__Vfunc_aes_mvm__1441__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12416960468360881722ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1444__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18296024014454683485ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1444__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10853964557895410456ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1444__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12537966521992147144ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1445__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7935757621912846341ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1445__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4960615083564426144ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1445__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 521913257580372736ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1448__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6670203327058936456ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1448__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1529410656814948905ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1448__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17123014804544443680ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1449__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17156288612531516740ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1449__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17461881885006039067ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1449__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 503548101300026442ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1450__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15064060664878380451ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1454__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4412555742844790768ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1454__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13432494473942356251ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1454__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14337747740645047681ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1455__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2008977480982657018ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1455__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10562129230438695880ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1455__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5763934604779794033ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1456__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16128225979937004043ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1460__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9736410689631157041ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1460__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16651186130552447298ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1460__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8023457810888569823ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1461__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12815876423891319585ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1461__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8077372994687193266ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1461__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17896388748732866108ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1462__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5389774426567160306ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1466__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14531144175136364450ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1466__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16986873941388133067ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1466__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12188679315729166870ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1467__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3823743145700472877ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1467__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1707312615692663210ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1467__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15355862063743486790ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1468__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2478459364049979053ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1472__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15459679807395995944ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1472__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4663743054875844280ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1472__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18312292502926628407ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1473__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11913827771908810222ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1473__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2127477910528351213ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1473__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3032731177231138727ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1492__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9148473583219553223ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1496__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10820887980945422900ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1496__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9869880756648783575ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1496__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1242152436984864594ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1497__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5999982035935516181ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1497__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9551843071975569736ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1497__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4753648446316722447ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1498__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1605896360341773847ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1502__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2102639106075604816ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1502__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8419746243401030167ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1502__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6668526507943335102ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1503__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6238665381991723706ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1503__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1105858134487521295ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1503__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18053070650545866706ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1504__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3354097969216181644ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1508__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13823831783369002737ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1508__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10434839377532651635ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1508__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7062877759444024990ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1509__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8599927454152619253ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1509__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7395197877572078150ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1509__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12156701594803053764ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1510__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 898184799076045007ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1514__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8387814179869564608ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1514__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14125466845933661707ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1514__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13520591045797393387ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1515__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7920831991919462072ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1515__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9494768495703746196ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1515__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3186444803205851063ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17097845890293972950ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1520__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4822969251683449066ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1520__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18097738898044148727ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1520__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3182258546975197690ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1521__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13141211569802242467ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1521__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2732797375160761190ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1521__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3580871339117793186ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1522__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1707396912859235874ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1526__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7709423599264250034ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1526__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8623524326102743732ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1526__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8018648525966600728ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1527__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2682300070885382399ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1527__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3992825975872765911ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1527__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3387950175736557991ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4206560513874002405ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1532__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10466328843177332327ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1532__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5356715426867197096ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1532__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4414771251736491047ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1533__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16074777629599337970ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1533__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10450539262226331922ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1533__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7078577644137656255ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1534__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5461591993310508797ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1538__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3034004789077355085ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1538__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17907090444834034678ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1538__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16407558887182797203ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1539__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 330877941059198162ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1539__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5562407055628608616ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1539__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3390222885907561493ull);
    vlSelf->__Vfunc_aes_mvm__1540__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2321205982245314948ull);
    vlSelf->__Vfunc_aes_mvm__1540__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11483568006383495305ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1540__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4512416931184997ull);
    }
    vlSelf->__Vfunc_aes_mvm__1540__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8031337215878535877ull);
    vlSelf->__Vfunc_aes_mvm__1541__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7716394759673089427ull);
    vlSelf->__Vfunc_aes_mvm__1541__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3335154749064622376ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1541__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11444821982586268337ull);
    }
    vlSelf->__Vfunc_aes_mvm__1541__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 171682630095657295ull);
    vlSelf->__Vfunc_aes_mvm__1542__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3313274071724280095ull);
    vlSelf->__Vfunc_aes_mvm__1542__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4512259118995968816ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1542__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14002296107326545358ull);
    }
    vlSelf->__Vfunc_aes_mvm__1542__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3425798522641711749ull);
    vlSelf->__Vfunc_aes_mvm__1543__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6479610892972774989ull);
    vlSelf->__Vfunc_aes_mvm__1543__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8669879573762546272ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1543__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9831923714904753262ull);
    }
    vlSelf->__Vfunc_aes_mvm__1543__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10054606015824177930ull);
    vlSelf->__Vfunc_aes_mvm__1544__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3908371790634815677ull);
    vlSelf->__Vfunc_aes_mvm__1544__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9821580824993345868ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1544__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10057686287525876180ull);
    }
    vlSelf->__Vfunc_aes_mvm__1544__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15755036716444148899ull);
    vlSelf->__Vfunc_aes_mvm__1545__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10276521699001393569ull);
    vlSelf->__Vfunc_aes_mvm__1545__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2638182888662091011ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1545__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9040083979231208451ull);
    }
    vlSelf->__Vfunc_aes_mvm__1545__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17765147924029504454ull);
    vlSelf->__Vfunc_aes_mvm__1546__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12671920590457341929ull);
    vlSelf->__Vfunc_aes_mvm__1546__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1404119151492115497ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1546__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6757453967214469390ull);
    }
    vlSelf->__Vfunc_aes_mvm__1546__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10646132485669662404ull);
    vlSelf->__Vfunc_aes_mvm__1547__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15183949538735287013ull);
    vlSelf->__Vfunc_aes_mvm__1547__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8111631918744039424ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1547__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14264861823103689547ull);
    }
    vlSelf->__Vfunc_aes_mvm__1547__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10647897063091582853ull);
    vlSelf->__Vfunc_aes_mvm__1548__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2261949346669364715ull);
    vlSelf->__Vfunc_aes_mvm__1548__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17341921944436337834ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1548__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10066307539791888078ull);
    }
    vlSelf->__Vfunc_aes_mvm__1548__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9103693045646351290ull);
    vlSelf->__Vfunc_aes_mvm__1549__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17529440012852305360ull);
    vlSelf->__Vfunc_aes_mvm__1549__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8536470647506869438ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1549__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7522693741199695760ull);
    }
    vlSelf->__Vfunc_aes_mvm__1549__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14913119586837426485ull);
    vlSelf->__Vfunc_aes_mvm__1550__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3266915206426920063ull);
    vlSelf->__Vfunc_aes_mvm__1550__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4876442192835209280ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1550__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14461259812952813187ull);
    }
    vlSelf->__Vfunc_aes_mvm__1550__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1669008574337117794ull);
    vlSelf->__Vfunc_aes_mvm__1551__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16873217413853551113ull);
    vlSelf->__Vfunc_aes_mvm__1551__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16957317106336160540ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1551__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12520338673849274154ull);
    }
    vlSelf->__Vfunc_aes_mvm__1551__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9512177120323754421ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1554__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4518250268554238273ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1554__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11617010236463734244ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1554__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1743569676373480050ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1555__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17330567750289370266ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1555__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16366725267122075964ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1555__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11583533808053153934ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1558__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9180568450714229806ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1558__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5089306139014958693ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1558__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15062656155972101466ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1559__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7681637787522787668ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1559__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11367322875205501696ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1559__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10372812461495557155ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1560__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7935123379022487317ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1564__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6488397115311012170ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1564__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10915588147243027878ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1564__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2261143071056213817ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1565__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4774246847841973186ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1565__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7959842706551421575ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1565__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7354966906415253815ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1566__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 437988300174815170ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1570__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5453489388145017418ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1570__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12006921916229390379ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1570__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14085235874776834786ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1571__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7426479830462180391ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1571__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4693033807315874499ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1571__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13728784133499835431ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1572__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15736098557627291912ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1576__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13785503224839981943ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1576__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11814000752848152496ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1576__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17355801622102427105ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1577__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8335614654650632987ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1577__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14811907244405450355ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1577__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15743877267631500171ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1578__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12335001349856834502ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1582__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12847765134947775607ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1582__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3989346989474335610ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1582__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8078198094635363421ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1583__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5817119635673714093ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1583__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4387959781616924946ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1583__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11748757198262581141ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1602__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10871619517342603726ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1606__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15775960086962207948ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1606__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6039990630845149224ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1606__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1241796005186355265ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1607__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11345750728887205540ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1607__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8702312885327113517ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1607__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17152274934548479836ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1608__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13796964484431521991ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1612__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12425213844278069998ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1612__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14175625102575325399ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1612__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4348119334543932641ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1613__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12170437815051931985ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1613__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9461030693076576292ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1613__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12544613224930621768ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1614__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15497169801740238370ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1618__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18040133632565744876ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1618__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11467306299048312538ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1618__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10721355136897303303ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1619__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4260305468420158202ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1619__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1217056115725434989ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1619__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6006760727398553876ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1620__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11874539878861303015ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1624__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7208625495131917069ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1624__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18064104669177445612ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1624__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2533151008784265848ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1625__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5898215935794445932ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1625__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13349510259678391328ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1625__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16433092791532772691ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6607704370549263906ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1630__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2312373662437230486ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1630__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13288650841021960048ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1630__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3291868816533626129ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1631__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9593850951728542797ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1631__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 19626661940207670ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1631__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14173036603523149318ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1632__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1057619790265014236ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1636__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17504219245227554483ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1636__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5044676263670791831ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1636__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15368552511248778757ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1637__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6928376777109938450ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1637__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8211859011684945991ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1637__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18030874765730743768ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2305188044366456925ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1642__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8110773526384919824ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1642__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2672251748408743691ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1642__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11122213797629958014ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1643__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16560277732146731506ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1643__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10700953520257882938ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1643__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1041239870764069892ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1644__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18285066340989490951ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1648__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 448838964837958242ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1648__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5161036205791854385ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1648__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2236755778489634821ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1649__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 253650183762666009ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1649__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8160426835268372313ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1649__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18147234707851810951ull);
    vlSelf->__Vfunc_aes_mvm__1650__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 464500295973718510ull);
    vlSelf->__Vfunc_aes_mvm__1650__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11179518606408529309ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1650__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13731690598664765059ull);
    }
    vlSelf->__Vfunc_aes_mvm__1650__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14594466166199842989ull);
    vlSelf->__Vfunc_aes_mvm__1651__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14992873754270443271ull);
    vlSelf->__Vfunc_aes_mvm__1651__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2324970153250797931ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1651__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11863976649261016708ull);
    }
    vlSelf->__Vfunc_aes_mvm__1651__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12146835280287734381ull);
    vlSelf->__Vfunc_aes_mvm__1652__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17153614804392555935ull);
    vlSelf->__Vfunc_aes_mvm__1652__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12654194013973537712ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1652__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13075306636559837668ull);
    }
    vlSelf->__Vfunc_aes_mvm__1652__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16332386476607353889ull);
    vlSelf->__Vfunc_aes_mvm__1653__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16916193321224126895ull);
    vlSelf->__Vfunc_aes_mvm__1653__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13802870945795583269ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1653__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6912059409395919310ull);
    }
    vlSelf->__Vfunc_aes_mvm__1653__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7675083755613732109ull);
    vlSelf->__Vfunc_aes_mvm__1654__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6352922017894990033ull);
    vlSelf->__Vfunc_aes_mvm__1654__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14691173469328932051ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1654__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14483295534466776909ull);
    }
    vlSelf->__Vfunc_aes_mvm__1654__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5313384954491461220ull);
    vlSelf->__Vfunc_aes_mvm__1655__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4786665033594860959ull);
    vlSelf->__Vfunc_aes_mvm__1655__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4604482096665421849ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1655__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2105764408500325771ull);
    }
    vlSelf->__Vfunc_aes_mvm__1655__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 137724024815240234ull);
    vlSelf->__Vfunc_aes_mvm__1656__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2551747845537007120ull);
    vlSelf->__Vfunc_aes_mvm__1656__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12818630024461473340ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1656__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2511423261799049640ull);
    }
    vlSelf->__Vfunc_aes_mvm__1656__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11936573313955064790ull);
    vlSelf->__Vfunc_aes_mvm__1657__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5275185845239491134ull);
    vlSelf->__Vfunc_aes_mvm__1657__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15968299488967631832ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1657__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7938610466223517413ull);
    }
    vlSelf->__Vfunc_aes_mvm__1657__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13860632137889890144ull);
    vlSelf->__Vfunc_aes_mvm__1658__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15528351626956029972ull);
    vlSelf->__Vfunc_aes_mvm__1658__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2905925250163208038ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1658__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8544943137754939997ull);
    }
    vlSelf->__Vfunc_aes_mvm__1658__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1157413676583995147ull);
    vlSelf->__Vfunc_aes_mvm__1659__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7604939598042026008ull);
    vlSelf->__Vfunc_aes_mvm__1659__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 856366624486445510ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1659__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3340054628212419043ull);
    }
    vlSelf->__Vfunc_aes_mvm__1659__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17895908380947026311ull);
    vlSelf->__Vfunc_aes_mvm__1660__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5383266564175172437ull);
    vlSelf->__Vfunc_aes_mvm__1660__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7360210974828205750ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1660__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 234026038075243764ull);
    }
    vlSelf->__Vfunc_aes_mvm__1660__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6650398160549189570ull);
    vlSelf->__Vfunc_aes_mvm__1661__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8601487096089890743ull);
    vlSelf->__Vfunc_aes_mvm__1661__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15375443273966544877ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1661__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15641775952480540370ull);
    }
    vlSelf->__Vfunc_aes_mvm__1661__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11769944093662504253ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1664__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7157920960468949172ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1664__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9010351569034181621ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1664__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11480733342816311995ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1665__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16092765521702395307ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1665__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4910062781944702585ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1665__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8422191656561743409ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1668__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15025515074420673916ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1668__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4345821732304936560ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1668__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12337259698923077683ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1669__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1867049387269664837ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1669__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3688103497793524085ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1669__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13588278006987937187ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1670__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16093957584409746916ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1674__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5958441043075288058ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1674__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16465260831276128312ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1674__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11667066205617150001ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1675__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14626615548151714545ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1675__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6728600165727693262ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1675__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17052476413305640028ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1676__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13356602535902732069ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1680__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9509784939737731977ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1680__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14267403787317948768ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1680__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17350986319172310428ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1681__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11498386619929188346ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1681__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4017153603995250951ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1681__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2071424993476824156ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1682__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7675765578366926172ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1686__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11991985380870715679ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1686__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6023429209967007585ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1686__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3266940901202419965ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1687__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5578418837693525587ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1687__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9190611957981171313ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1687__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 562883638317277431ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1688__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17343044854213038233ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1692__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2942285664113672443ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1692__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9129752539324608256ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1692__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8383801377173705946ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1693__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6451726820187005305ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1693__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4582950248363379789ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1693__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3669206967674844247ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1712__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5218665845888424104ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1716__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17183861430557882986ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1716__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17612368790215321872ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1716__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2612992379877390159ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1717__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6829327734720807186ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1717__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11748285229294880094ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1717__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9492205000304887354ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1718__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10683344674355101845ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1722__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8399594019482764917ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1722__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8638460642198130926ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1722__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10632878541476690120ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1723__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8087999177543441665ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1723__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6102195497850644763ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1723__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13379096855227529655ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1724__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16992543978343563583ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1728__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14441378884246490618ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1728__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13558746680458260559ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1728__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17006114343830117918ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1729__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15322116667586244585ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1729__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9933316903535239303ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1729__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13380684566906847830ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1730__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6526807174096189737ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1734__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14794636961734416982ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1734__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12976611677825415711ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1734__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10720531448835684792ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1735__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18377956018672083292ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1735__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15722829991576258862ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1735__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13887714196849725499ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14029708052322850784ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1740__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1587424286002890143ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1740__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2469237689324749384ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1740__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9746139046701441000ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1741__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6370169287047526927ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1741__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 353936979240604682ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1741__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7209873902354094751ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1742__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9106160847734822932ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1746__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7782798186851127234ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1746__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18375455078044895147ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1746__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10836891390956740984ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1747__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5523029868672208304ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1747__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10556706475599164871ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1747__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 839813523359543175ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13200052779290430545ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1752__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10866619430070881430ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1752__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12089872183050456137ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1752__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10254756388323756904ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1753__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5683191530495592920ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1753__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9553607038702849524ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1753__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13000974702074571321ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1754__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17843968323454670232ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1758__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5316490854901789719ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1758__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13180624527305502169ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1758__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2010781810972769657ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1759__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3590756378221230636ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1759__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3183546659708433272ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1759__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10460448017085110171ull);
    vlSelf->__Vfunc_aes_mvm__1760__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3281742258044124750ull);
    vlSelf->__Vfunc_aes_mvm__1760__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3806003503961434932ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1760__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16394836104763779602ull);
    }
    vlSelf->__Vfunc_aes_mvm__1760__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 41866067262289621ull);
    vlSelf->__Vfunc_aes_mvm__1763__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11510101436685555375ull);
    vlSelf->__Vfunc_aes_mvm__1763__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18289968808529931779ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1763__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17090593087514872858ull);
    }
    vlSelf->__Vfunc_aes_mvm__1763__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9694068270160808770ull);
    vlSelf->__Vfunc_aes_mvm__1766__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17129492617438073160ull);
    vlSelf->__Vfunc_aes_mvm__1766__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17434116065283772222ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1766__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3529086849674155243ull);
    }
    vlSelf->__Vfunc_aes_mvm__1766__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9082129134601856441ull);
    vlSelf->__Vfunc_aes_mvm__1769__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12363772174668042179ull);
    vlSelf->__Vfunc_aes_mvm__1769__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16861710991662790498ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1769__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5527104158050294100ull);
    }
    vlSelf->__Vfunc_aes_mvm__1769__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2009263321318245775ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1774__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14247993751424338955ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1774__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13330485797339202116ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1774__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17646991529239290472ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1775__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10766676566330030090ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1775__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1937292385342874451ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1775__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5042203676641577703ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1778__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13140122590562934051ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1778__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9666389843361564839ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1778__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6513120113827945365ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1779__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16722168897312527077ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1779__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8143491947747145305ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1779__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15226045080472320105ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1780__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5857782264324137261ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1784__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15618081696815404722ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1784__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11439966983975816811ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1784__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9183886754985922327ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1785__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15942637330205712028ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1785__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14186185297726609080ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1785__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12351069503000110535ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1786__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16773557178668583264ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1790__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13983790502278779092ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1790__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5154384088981270806ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1790__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13884235210451216213ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1791__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18437431110672013512ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1791__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7900602402732175959ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1791__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6065486608005535097ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1792__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13412095324508945955ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1796__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14953826619357965465ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1796__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11527619891334814648ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1796__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5640260633100272762ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1797__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 512373805437791573ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1797__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14694802639348871864ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1797__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3524959923016126936ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1798__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3915667581855461085ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1802__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18207796419795463881ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1802__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15575545880258751937ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1802__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18017644970323500934ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1803__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12065482519394287685ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1803__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16395123106664565161ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1803__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13133774304367996960ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1822__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14489657093383978544ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1826__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13007018479493890543ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1826__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12411607351864697943ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1826__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14853706441929627241ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1827__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16647402443881153490ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1827__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15914374336954182900ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1827__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9969835775973912563ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1828__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15013808336042119552ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1832__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 278302159804003445ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1832__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16189099155373018900ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1832__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6890202361558344569ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1833__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11256217545335640298ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1833__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15872545608618749948ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1833__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13757540741643515842ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1834__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10006748753396277911ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1838__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13496339462839866589ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1838__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12166644297986676025ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1838__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12734829189695012420ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1839__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16424142807621102518ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1839__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9965963390714431804ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1839__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1813410532221461023ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1840__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 110638206923678550ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1844__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5907358577182048252ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1844__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8688728496048999488ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1844__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6573723629073761894ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1845__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14252023384618233948ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1845__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3804857830093293338ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1845__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10076490614163168902ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1846__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8626182424603995980ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1850__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16675146868211666587ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1850__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6428672308039499247ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1850__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4313667441064195473ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1851__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1874970873737443463ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1851__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5677795948760566419ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1851__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11949428732830497287ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1852__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 482690032745439665ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1856__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5584064205480522008ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1856__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6569851243814429750ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1856__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6328760575195731929ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1857__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 619837379020773527ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1857__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1351880478702544386ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1857__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16537275750115400329ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1858__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3259403520984966225ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1862__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12240183712473994245ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1862__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15250692717402850036ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1862__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9306154156422465932ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1863__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1195181204459230131ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1863__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6547501519603577687ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1863__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7115686411311850728ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1864__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3429005869140251761ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1868__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8091473052772851708ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1868__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5524789967654896979ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1868__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3409785100679696397ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1869__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1860440443625334845ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1869__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6688680455378514046ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1869__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9130779545443396275ull);
    vlSelf->__Vfunc_aes_mvm__1870__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14883064447058723216ull);
    vlSelf->__Vfunc_aes_mvm__1870__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5740382914978653668ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1870__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5687906935337947352ull);
    }
    vlSelf->__Vfunc_aes_mvm__1870__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8685455831021805262ull);
    vlSelf->__Vfunc_aes_mvm__1873__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 524968857498273031ull);
    vlSelf->__Vfunc_aes_mvm__1873__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7208618715885538875ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1873__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7123446244096359392ull);
    }
    vlSelf->__Vfunc_aes_mvm__1873__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5773391239893925100ull);
    vlSelf->__Vfunc_aes_mvm__1876__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4920402893768401339ull);
    vlSelf->__Vfunc_aes_mvm__1876__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13638190817253836565ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1876__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7214109955113200756ull);
    }
    vlSelf->__Vfunc_aes_mvm__1876__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4846791152978740274ull);
    vlSelf->__Vfunc_aes_mvm__1879__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4933464413271946395ull);
    vlSelf->__Vfunc_aes_mvm__1879__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2723381893916263497ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1879__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3657086417312103983ull);
    }
    vlSelf->__Vfunc_aes_mvm__1879__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8517352611729634848ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1884__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2553292187733525305ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1884__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 558435719600501628ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1884__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10812407940762358870ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1885__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5811993809216370307ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1885__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13181284627999676743ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1885__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4022316080457037883ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1888__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10257699672551035418ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1888__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17438637261861433944ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1888__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 495738596605383777ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1889__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14410370073102662977ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1889__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13430580991596906170ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1889__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5384348617052882587ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1890__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13196654880141273782ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1894__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10055726897693915610ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1894__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2233656849160057680ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1894__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4675755939224886646ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1895__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14515586891463403061ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1895__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1148680390724946387ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1895__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16334075662137745768ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1896__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14926335260356966888ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1900__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18091203611609060800ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1900__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5228529339241470001ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1900__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10854226267764678258ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1901__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13253095524252595738ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1901__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14346395743666190966ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1901__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15530053944698677058ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1902__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7176363784520474219ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1906__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9542593978770393949ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1906__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2545443154318240211ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1906__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4539861053596741150ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1907__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2890323808873672461ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1907__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7976335364671735790ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1907__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9970753263950344073ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1908__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11295272101131440590ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1912__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15417562225720264475ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1912__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5651766483675794771ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1912__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7646184382954300942ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1913__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12987510862567395929ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1913__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7308820164851002489ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1913__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13077076593307940793ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1932__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17336387552457436389ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1936__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11627903783308076931ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1936__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10117916934988329724ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1936__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9848625371927310728ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1937__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1807542626892749146ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1937__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4144881636456920651ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1937__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11505679053102418610ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1938__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16253171567815336011ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1942__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13497529660659531453ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1942__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1862378168484513465ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1942__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3940692127031826131ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1943__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6840530161339107086ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1943__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1255722387320259323ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1943__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15993436467946617635ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1944__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5557404248840651350ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1948__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13326576605574594141ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1948__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8712273569927976487ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1948__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6540089400206933631ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1949__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5447002706427124353ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1949__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8439717887919913264ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1949__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6604602093193269313ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1950__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16074240625998901371ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1954__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 935149546209505248ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1954__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17184976416652560117ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1954__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9646412729564521900ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1955__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11830993876919285192ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1955__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3748160119033235247ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1955__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15077304939917900627ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1956__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16287076576181675212ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1960__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1641783839355644567ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1960__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13453653532210907191ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1960__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11618537737484473114ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1961__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11655625336769587793ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1961__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12046451214962104022ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1961__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4650447027807713316ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1962__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9554367232485402753ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1966__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7865535320590502953ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1966__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4064819157457589110ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1966__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6059237056736111715ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1967__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4780782805245405614ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1967__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8740646834391566886ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1967__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18195877456919697007ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1968__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5660516081480137979ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1972__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13772931975020660676ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1972__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 378529961877841213ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1972__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2456843920425185878ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1973__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11347373080576529352ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1973__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14875957321669643127ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1973__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5073684172241980743ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__1974__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16004963594214928364ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1978__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7416571372132235019ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1978__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 856777272647284077ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1978__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11764957659268722727ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1979__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16093081308005676926ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1979__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 584221590639205877ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1979__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17195849869622164611ull);
    vlSelf->__Vfunc_aes_mvm__1980__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3400516577255277539ull);
    vlSelf->__Vfunc_aes_mvm__1980__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15200000515208263337ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1980__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2522910920488677002ull);
    }
    vlSelf->__Vfunc_aes_mvm__1980__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14362576767634250496ull);
    vlSelf->__Vfunc_aes_mvm__1983__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 419975073707871593ull);
    vlSelf->__Vfunc_aes_mvm__1983__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4657986693101737362ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1983__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2712550676012336592ull);
    }
    vlSelf->__Vfunc_aes_mvm__1983__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14530917630946166434ull);
    vlSelf->__Vfunc_aes_mvm__1986__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15867379523516689999ull);
    vlSelf->__Vfunc_aes_mvm__1986__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9934581294818250662ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1986__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2637227978663952334ull);
    }
    vlSelf->__Vfunc_aes_mvm__1986__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14854463790552092456ull);
    vlSelf->__Vfunc_aes_mvm__1989__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16628971504190805320ull);
    vlSelf->__Vfunc_aes_mvm__1989__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17348037968955677461ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1989__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9523950236519478802ull);
    }
    vlSelf->__Vfunc_aes_mvm__1989__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10373656827078859644ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1994__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8580026652280449635ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1994__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8627487025724226699ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1994__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3342068005005846732ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1995__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12624658502381644072ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1995__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6210835106826230836ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1995__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11010913531070111685ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1998__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4702376658322845894ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1998__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2561699220045132973ull);
    vlSelf->__Vfunc_aes_square_gf2p2__1998__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12566103704068506412ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1999__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16261707799295091266ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1999__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10546159636515886593ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__1999__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8637450705287550837ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2000__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5249307914231779325ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2004__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17283486325932843016ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2004__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15528242195629182948ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2004__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9820549296274548195ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2005__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 398139725540627853ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2005__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12999610410288257741ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2005__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10479967763149392056ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2006__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4971937297070799134ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2010__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7008621403253336632ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2010__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11764206161867897223ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2010__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4045976115899728660ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2011__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 714360972285079097ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2011__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8884723421438586579ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2011__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16426671334883411790ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2012__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15643314743092009157ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2016__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12224857392550170253ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2016__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2073006839678568957ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2016__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16463262442887196032ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2017__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8217969627193193013ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2017__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16483958337046465753ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2017__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16048782995199729291ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2018__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3329542561789010338ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2022__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2129627066265555648ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2022__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8783951714383010568ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2022__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4895255362419879453ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2023__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6107712685726646864ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2023__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8479307568625868788ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2023__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1738145201522284949ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2042__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 901005617718756964ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2046__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17420942624678920638ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2046__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5972370944858673500ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2046__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6778885636112034224ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2047__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8746534640267853579ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2047__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3889158698523656466ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2047__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7882239504073510168ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2048__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11122795582720719430ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2052__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17832608602933442515ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2052__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10703323726154139379ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2052__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14528612413166224286ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2053__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4609161075505405247ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2053__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17777080382296862369ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2053__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16066713295485029686ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2054__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6989819827954112504ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2058__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4360080830826261971ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2058__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14685062192611347629ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2058__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9145161411794683460ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2059__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7929918398528514572ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2059__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3813966992738571001ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2059__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3809721985745692357ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2060__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14472110551045195501ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2064__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12531379041388089097ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2064__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8423993674984730939ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2064__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8419748667991852272ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2065__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2417706449284952550ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2065__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6217163546625185468ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2065__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6380710658170071952ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2066__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10185937525304532440ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2070__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6455674730273917737ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2070__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 117271998531698802ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2070__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 280819110076507202ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2071__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5505963158846769052ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2071__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4119351398160107785ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2071__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14416935091047410140ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2072__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5227356164796471787ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2076__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16896769200664094218ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2076__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12846464971713530218ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2076__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6106786742529037212ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2077__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13221908804072481905ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2077__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2773124403854102069ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2077__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11627724233238823280ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5783376924700311135ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2082__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 417731023197676526ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2082__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13121244579503711021ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2082__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14431135626369975440ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2083__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 345446935491397035ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2083__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17066391937957121045ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2083__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15356024851145549972ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2084__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7915426988251232204ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2088__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3720171970965505140ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2088__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6538016129764561664ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2088__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16761669663973740535ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2089__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11271775440047180969ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2089__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9360497143777600625ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2089__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17238029294297691750ull);
    vlSelf->__Vfunc_aes_mvm__2090__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13705478979685887931ull);
    vlSelf->__Vfunc_aes_mvm__2090__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8831011769498379756ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2090__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7270226493197925478ull);
    }
    vlSelf->__Vfunc_aes_mvm__2090__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8871740185077783909ull);
    vlSelf->__Vfunc_aes_mvm__2093__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16447759341356783987ull);
    vlSelf->__Vfunc_aes_mvm__2093__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2996192967908993369ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2093__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4217034341433525015ull);
    }
    vlSelf->__Vfunc_aes_mvm__2093__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17389438519153908783ull);
    vlSelf->__Vfunc_aes_mvm__2096__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12658149443560111469ull);
    vlSelf->__Vfunc_aes_mvm__2096__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12671359438095364260ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2096__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8439217678129433671ull);
    }
    vlSelf->__Vfunc_aes_mvm__2096__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2065664106319362554ull);
    vlSelf->__Vfunc_aes_mvm__2099__Vfuncout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7929080503644987925ull);
    vlSelf->__Vfunc_aes_mvm__2099__vec_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8648027388306623682ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2099__mat_a[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9340673935467088362ull);
    }
    vlSelf->__Vfunc_aes_mvm__2099__vec_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5268807395438076544ull);
    vlSelf->__Vfunc_aes_square_gf2p2__2104__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11700520990717065779ull);
    vlSelf->__Vfunc_aes_square_gf2p2__2104__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14139006268179777026ull);
    vlSelf->__Vfunc_aes_square_gf2p2__2104__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4416779016084046044ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__2105__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16694110151826046314ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__2105__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12927658612189688003ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__2105__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16720247642365162245ull);
    vlSelf->__Vfunc_aes_square_gf2p2__2108__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8185503709538630660ull);
    vlSelf->__Vfunc_aes_square_gf2p2__2108__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9467441120500208399ull);
    vlSelf->__Vfunc_aes_square_gf2p2__2108__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 168263582681075235ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__2109__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7594369440253910199ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__2109__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5650998944617919958ull);
    vlSelf->__Vfunc_aes_scale_omega_gf2p2__2109__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12126777733476961945ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2110__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2461614429454231272ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2114__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7864567293096012448ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2114__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15256892275905207714ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2114__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15056654255932551733ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2115__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11922417752325763755ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2115__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 404444605560537733ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2115__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15522341361607998350ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2116__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18060328852215155881ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2120__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17955910404242323728ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2120__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17689138127898971101ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2120__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4493915748771837080ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2121__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12555019880618050828ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2121__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1453147548578193752ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2121__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1252909528605442253ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2122__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1959015824353778234ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2126__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2917673946627530548ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2126__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7049849535148536467ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2126__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3020077821170789959ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2127__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13901609009744359495ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2127__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4940698046151854342ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2127__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6614374224535698408ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2128__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16388939503312394450ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2132__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6787293677913704183ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2132__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2953197540150441680ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2132__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1271031347780870202ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2133__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13058953831189846703ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2133__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4297567061269947623ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2133__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10748866204219974738ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2152__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13416184284064779871ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2156__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4550139117862781826ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2156__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2881279207997722210ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2156__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14615061809045893206ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2157__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3342557271344132078ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2157__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8486112757976275723ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2157__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18209358212410838449ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2158__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 976468517594248328ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2162__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12709485358504168839ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2162__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2740170603238506821ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2162__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1477484707213102755ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2163__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12811437332786817405ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2163__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10762723154000085034ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2163__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4049761681338859150ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2164__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18066045982544320305ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2168__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7752336001198083816ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2168__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12420056144635092996ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2168__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9536628365978657034ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2169__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5581593442316888962ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2169__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14896280396924274481ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2169__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4298867579292638226ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2170__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12160045954116016994ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2174__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12497581124182259906ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2174__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14919317037536411485ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2174__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17739337151241879070ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2175__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17405395720559415075ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2175__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17381758709731793245ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2175__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16929832511952435150ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2176__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17230590910913763990ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2180__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13847460374760883251ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2180__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8191001903257821733ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2180__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13610315716377939384ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2181__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13720415771318121701ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2181__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2242350819665402425ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2181__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7072908079984456019ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2182__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16242657313747265739ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2186__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3736820433963246274ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2186__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 961660657710167027ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2186__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2298268461099514450ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2187__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18055118410643293666ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2187__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5729901317239129110ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2187__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4720387736939347057ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2188__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 427792141733209874ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2192__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1866491923982460433ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2192__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16654973249042491483ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2192__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12625201535064681502ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2193__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10434054173476088773ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2193__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2849000112679478036ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2193__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9132507137091725095ull);
    vlSelf->__Vfunc_aes_mul_gf2p4__2194__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 565414387639504982ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2198__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13970466400122937348ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2198__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16185520330428687777ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2198__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15623758830719012767ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2199__Vfuncout = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12074747282606271434ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2199__g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13817859979134775100ull);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__2199__d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10934432200478633674ull);
}

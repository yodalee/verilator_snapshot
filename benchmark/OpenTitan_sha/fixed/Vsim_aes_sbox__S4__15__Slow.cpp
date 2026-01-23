// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1663__Vfuncout;
    __Vfunc_aes_square_gf2p2__1663__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1663__g;
    __Vfunc_aes_square_gf2p2__1663__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1663__d;
    __Vfunc_aes_square_gf2p2__1663__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1667__Vfuncout;
    __Vfunc_aes_square_gf2p2__1667__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1667__g;
    __Vfunc_aes_square_gf2p2__1667__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1667__d;
    __Vfunc_aes_square_gf2p2__1667__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1670__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1670__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1670__gamma;
    __Vfunc_aes_mul_gf2p4__1670__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1670__delta;
    __Vfunc_aes_mul_gf2p4__1670__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1670__a;
    __Vfunc_aes_mul_gf2p4__1670__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1670__b;
    __Vfunc_aes_mul_gf2p4__1670__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1670__c;
    __Vfunc_aes_mul_gf2p4__1670__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1671__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1671__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1671__g;
    __Vfunc_aes_mul_gf2p2__1671__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1671__d;
    __Vfunc_aes_mul_gf2p2__1671__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1671__f;
    __Vfunc_aes_mul_gf2p2__1671__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1671__a;
    __Vfunc_aes_mul_gf2p2__1671__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1671__b;
    __Vfunc_aes_mul_gf2p2__1671__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1671__c;
    __Vfunc_aes_mul_gf2p2__1671__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1672__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1672__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1672__g;
    __Vfunc_aes_mul_gf2p2__1672__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1672__d;
    __Vfunc_aes_mul_gf2p2__1672__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1672__f;
    __Vfunc_aes_mul_gf2p2__1672__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1672__a;
    __Vfunc_aes_mul_gf2p2__1672__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1672__b;
    __Vfunc_aes_mul_gf2p2__1672__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1672__c;
    __Vfunc_aes_mul_gf2p2__1672__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1673__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1673__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1673__g;
    __Vfunc_aes_mul_gf2p2__1673__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1673__d;
    __Vfunc_aes_mul_gf2p2__1673__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1673__f;
    __Vfunc_aes_mul_gf2p2__1673__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1673__a;
    __Vfunc_aes_mul_gf2p2__1673__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1673__b;
    __Vfunc_aes_mul_gf2p2__1673__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1673__c;
    __Vfunc_aes_mul_gf2p2__1673__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1676__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1676__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1676__gamma;
    __Vfunc_aes_mul_gf2p4__1676__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1676__delta;
    __Vfunc_aes_mul_gf2p4__1676__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1676__a;
    __Vfunc_aes_mul_gf2p4__1676__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1676__b;
    __Vfunc_aes_mul_gf2p4__1676__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1676__c;
    __Vfunc_aes_mul_gf2p4__1676__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1677__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1677__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1677__g;
    __Vfunc_aes_mul_gf2p2__1677__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1677__d;
    __Vfunc_aes_mul_gf2p2__1677__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1677__f;
    __Vfunc_aes_mul_gf2p2__1677__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1677__a;
    __Vfunc_aes_mul_gf2p2__1677__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1677__b;
    __Vfunc_aes_mul_gf2p2__1677__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1677__c;
    __Vfunc_aes_mul_gf2p2__1677__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1678__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1678__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1678__g;
    __Vfunc_aes_mul_gf2p2__1678__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1678__d;
    __Vfunc_aes_mul_gf2p2__1678__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1678__f;
    __Vfunc_aes_mul_gf2p2__1678__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1678__a;
    __Vfunc_aes_mul_gf2p2__1678__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1678__b;
    __Vfunc_aes_mul_gf2p2__1678__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1678__c;
    __Vfunc_aes_mul_gf2p2__1678__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1679__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1679__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1679__g;
    __Vfunc_aes_mul_gf2p2__1679__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1679__d;
    __Vfunc_aes_mul_gf2p2__1679__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1679__f;
    __Vfunc_aes_mul_gf2p2__1679__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1679__a;
    __Vfunc_aes_mul_gf2p2__1679__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1679__b;
    __Vfunc_aes_mul_gf2p2__1679__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1679__c;
    __Vfunc_aes_mul_gf2p2__1679__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1682__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1682__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1682__gamma;
    __Vfunc_aes_mul_gf2p4__1682__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1682__delta;
    __Vfunc_aes_mul_gf2p4__1682__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1682__a;
    __Vfunc_aes_mul_gf2p4__1682__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1682__b;
    __Vfunc_aes_mul_gf2p4__1682__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1682__c;
    __Vfunc_aes_mul_gf2p4__1682__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1683__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1683__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1683__g;
    __Vfunc_aes_mul_gf2p2__1683__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1683__d;
    __Vfunc_aes_mul_gf2p2__1683__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1683__f;
    __Vfunc_aes_mul_gf2p2__1683__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1683__a;
    __Vfunc_aes_mul_gf2p2__1683__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1683__b;
    __Vfunc_aes_mul_gf2p2__1683__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1683__c;
    __Vfunc_aes_mul_gf2p2__1683__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1684__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1684__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1684__g;
    __Vfunc_aes_mul_gf2p2__1684__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1684__d;
    __Vfunc_aes_mul_gf2p2__1684__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1684__f;
    __Vfunc_aes_mul_gf2p2__1684__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1684__a;
    __Vfunc_aes_mul_gf2p2__1684__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1684__b;
    __Vfunc_aes_mul_gf2p2__1684__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1684__c;
    __Vfunc_aes_mul_gf2p2__1684__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1685__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1685__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1685__g;
    __Vfunc_aes_mul_gf2p2__1685__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1685__d;
    __Vfunc_aes_mul_gf2p2__1685__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1685__f;
    __Vfunc_aes_mul_gf2p2__1685__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1685__a;
    __Vfunc_aes_mul_gf2p2__1685__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1685__b;
    __Vfunc_aes_mul_gf2p2__1685__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1685__c;
    __Vfunc_aes_mul_gf2p2__1685__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1688__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1688__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1688__gamma;
    __Vfunc_aes_mul_gf2p4__1688__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1688__delta;
    __Vfunc_aes_mul_gf2p4__1688__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1688__a;
    __Vfunc_aes_mul_gf2p4__1688__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1688__b;
    __Vfunc_aes_mul_gf2p4__1688__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1688__c;
    __Vfunc_aes_mul_gf2p4__1688__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1689__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1689__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1689__g;
    __Vfunc_aes_mul_gf2p2__1689__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1689__d;
    __Vfunc_aes_mul_gf2p2__1689__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1689__f;
    __Vfunc_aes_mul_gf2p2__1689__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1689__a;
    __Vfunc_aes_mul_gf2p2__1689__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1689__b;
    __Vfunc_aes_mul_gf2p2__1689__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1689__c;
    __Vfunc_aes_mul_gf2p2__1689__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1690__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1690__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1690__g;
    __Vfunc_aes_mul_gf2p2__1690__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1690__d;
    __Vfunc_aes_mul_gf2p2__1690__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1690__f;
    __Vfunc_aes_mul_gf2p2__1690__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1690__a;
    __Vfunc_aes_mul_gf2p2__1690__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1690__b;
    __Vfunc_aes_mul_gf2p2__1690__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1690__c;
    __Vfunc_aes_mul_gf2p2__1690__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1691__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1691__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1691__g;
    __Vfunc_aes_mul_gf2p2__1691__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1691__d;
    __Vfunc_aes_mul_gf2p2__1691__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1691__f;
    __Vfunc_aes_mul_gf2p2__1691__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1691__a;
    __Vfunc_aes_mul_gf2p2__1691__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1691__b;
    __Vfunc_aes_mul_gf2p2__1691__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1691__c;
    __Vfunc_aes_mul_gf2p2__1691__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1694__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1694__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1694__g;
    __Vfunc_aes_scale_omega2_gf2p2__1694__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1694__d;
    __Vfunc_aes_scale_omega2_gf2p2__1694__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1695__Vfuncout;
    __Vfunc_aes_square_gf2p2__1695__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1695__g;
    __Vfunc_aes_square_gf2p2__1695__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1695__d;
    __Vfunc_aes_square_gf2p2__1695__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1696__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1696__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1696__g;
    __Vfunc_aes_scale_omega2_gf2p2__1696__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1696__d;
    __Vfunc_aes_scale_omega2_gf2p2__1696__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1697__Vfuncout;
    __Vfunc_aes_square_gf2p2__1697__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1697__g;
    __Vfunc_aes_square_gf2p2__1697__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1697__d;
    __Vfunc_aes_square_gf2p2__1697__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1698__Vfuncout;
    __Vfunc_aes_square_gf2p2__1698__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1698__g;
    __Vfunc_aes_square_gf2p2__1698__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1698__d;
    __Vfunc_aes_square_gf2p2__1698__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1699__Vfuncout;
    __Vfunc_aes_square_gf2p2__1699__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1699__g;
    __Vfunc_aes_square_gf2p2__1699__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1699__d;
    __Vfunc_aes_square_gf2p2__1699__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1700__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1700__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1700__g;
    __Vfunc_aes_mul_gf2p2__1700__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1700__d;
    __Vfunc_aes_mul_gf2p2__1700__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1700__f;
    __Vfunc_aes_mul_gf2p2__1700__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1700__a;
    __Vfunc_aes_mul_gf2p2__1700__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1700__b;
    __Vfunc_aes_mul_gf2p2__1700__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1700__c;
    __Vfunc_aes_mul_gf2p2__1700__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1701__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1701__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1701__g;
    __Vfunc_aes_mul_gf2p2__1701__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1701__d;
    __Vfunc_aes_mul_gf2p2__1701__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1701__f;
    __Vfunc_aes_mul_gf2p2__1701__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1701__a;
    __Vfunc_aes_mul_gf2p2__1701__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1701__b;
    __Vfunc_aes_mul_gf2p2__1701__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1701__c;
    __Vfunc_aes_mul_gf2p2__1701__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1702__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1702__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1702__g;
    __Vfunc_aes_mul_gf2p2__1702__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1702__d;
    __Vfunc_aes_mul_gf2p2__1702__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1702__f;
    __Vfunc_aes_mul_gf2p2__1702__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1702__a;
    __Vfunc_aes_mul_gf2p2__1702__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1702__b;
    __Vfunc_aes_mul_gf2p2__1702__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1702__c;
    __Vfunc_aes_mul_gf2p2__1702__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1703__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1703__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1703__g;
    __Vfunc_aes_mul_gf2p2__1703__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1703__d;
    __Vfunc_aes_mul_gf2p2__1703__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1703__f;
    __Vfunc_aes_mul_gf2p2__1703__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1703__a;
    __Vfunc_aes_mul_gf2p2__1703__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1703__b;
    __Vfunc_aes_mul_gf2p2__1703__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1703__c;
    __Vfunc_aes_mul_gf2p2__1703__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1704__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1704__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1704__g;
    __Vfunc_aes_mul_gf2p2__1704__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1704__d;
    __Vfunc_aes_mul_gf2p2__1704__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1704__f;
    __Vfunc_aes_mul_gf2p2__1704__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1704__a;
    __Vfunc_aes_mul_gf2p2__1704__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1704__b;
    __Vfunc_aes_mul_gf2p2__1704__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1704__c;
    __Vfunc_aes_mul_gf2p2__1704__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1705__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1705__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1705__g;
    __Vfunc_aes_mul_gf2p2__1705__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1705__d;
    __Vfunc_aes_mul_gf2p2__1705__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1705__f;
    __Vfunc_aes_mul_gf2p2__1705__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1705__a;
    __Vfunc_aes_mul_gf2p2__1705__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1705__b;
    __Vfunc_aes_mul_gf2p2__1705__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1705__c;
    __Vfunc_aes_mul_gf2p2__1705__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1706__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1706__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1706__g;
    __Vfunc_aes_mul_gf2p2__1706__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1706__d;
    __Vfunc_aes_mul_gf2p2__1706__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1706__f;
    __Vfunc_aes_mul_gf2p2__1706__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1706__a;
    __Vfunc_aes_mul_gf2p2__1706__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1706__b;
    __Vfunc_aes_mul_gf2p2__1706__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1706__c;
    __Vfunc_aes_mul_gf2p2__1706__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1707__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1707__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1707__g;
    __Vfunc_aes_mul_gf2p2__1707__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1707__d;
    __Vfunc_aes_mul_gf2p2__1707__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1707__f;
    __Vfunc_aes_mul_gf2p2__1707__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1707__a;
    __Vfunc_aes_mul_gf2p2__1707__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1707__b;
    __Vfunc_aes_mul_gf2p2__1707__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1707__c;
    __Vfunc_aes_mul_gf2p2__1707__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1708__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1708__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1708__g;
    __Vfunc_aes_mul_gf2p2__1708__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1708__d;
    __Vfunc_aes_mul_gf2p2__1708__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1708__f;
    __Vfunc_aes_mul_gf2p2__1708__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1708__a;
    __Vfunc_aes_mul_gf2p2__1708__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1708__b;
    __Vfunc_aes_mul_gf2p2__1708__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1708__c;
    __Vfunc_aes_mul_gf2p2__1708__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1709__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1709__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1709__g;
    __Vfunc_aes_mul_gf2p2__1709__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1709__d;
    __Vfunc_aes_mul_gf2p2__1709__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1709__f;
    __Vfunc_aes_mul_gf2p2__1709__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1709__a;
    __Vfunc_aes_mul_gf2p2__1709__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1709__b;
    __Vfunc_aes_mul_gf2p2__1709__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1709__c;
    __Vfunc_aes_mul_gf2p2__1709__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1710__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1710__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1710__g;
    __Vfunc_aes_mul_gf2p2__1710__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1710__d;
    __Vfunc_aes_mul_gf2p2__1710__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1710__f;
    __Vfunc_aes_mul_gf2p2__1710__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1710__a;
    __Vfunc_aes_mul_gf2p2__1710__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1710__b;
    __Vfunc_aes_mul_gf2p2__1710__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1710__c;
    __Vfunc_aes_mul_gf2p2__1710__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1711__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1711__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1711__g;
    __Vfunc_aes_mul_gf2p2__1711__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1711__d;
    __Vfunc_aes_mul_gf2p2__1711__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1711__f;
    __Vfunc_aes_mul_gf2p2__1711__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1711__a;
    __Vfunc_aes_mul_gf2p2__1711__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1711__b;
    __Vfunc_aes_mul_gf2p2__1711__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1711__c;
    __Vfunc_aes_mul_gf2p2__1711__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1712__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1712__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1712__gamma;
    __Vfunc_aes_mul_gf2p4__1712__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1712__delta;
    __Vfunc_aes_mul_gf2p4__1712__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1712__a;
    __Vfunc_aes_mul_gf2p4__1712__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1712__b;
    __Vfunc_aes_mul_gf2p4__1712__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1712__c;
    __Vfunc_aes_mul_gf2p4__1712__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1713__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1713__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1713__g;
    __Vfunc_aes_mul_gf2p2__1713__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1713__d;
    __Vfunc_aes_mul_gf2p2__1713__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1713__f;
    __Vfunc_aes_mul_gf2p2__1713__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1713__a;
    __Vfunc_aes_mul_gf2p2__1713__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1713__b;
    __Vfunc_aes_mul_gf2p2__1713__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1713__c;
    __Vfunc_aes_mul_gf2p2__1713__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1714__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1714__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1714__g;
    __Vfunc_aes_mul_gf2p2__1714__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1714__d;
    __Vfunc_aes_mul_gf2p2__1714__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1714__f;
    __Vfunc_aes_mul_gf2p2__1714__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1714__a;
    __Vfunc_aes_mul_gf2p2__1714__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1714__b;
    __Vfunc_aes_mul_gf2p2__1714__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1714__c;
    __Vfunc_aes_mul_gf2p2__1714__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1715__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1715__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1715__g;
    __Vfunc_aes_mul_gf2p2__1715__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1715__d;
    __Vfunc_aes_mul_gf2p2__1715__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1715__f;
    __Vfunc_aes_mul_gf2p2__1715__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1715__a;
    __Vfunc_aes_mul_gf2p2__1715__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1715__b;
    __Vfunc_aes_mul_gf2p2__1715__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1715__c;
    __Vfunc_aes_mul_gf2p2__1715__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1718__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1718__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1718__gamma;
    __Vfunc_aes_mul_gf2p4__1718__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1718__delta;
    __Vfunc_aes_mul_gf2p4__1718__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1718__a;
    __Vfunc_aes_mul_gf2p4__1718__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1718__b;
    __Vfunc_aes_mul_gf2p4__1718__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1718__c;
    __Vfunc_aes_mul_gf2p4__1718__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1719__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1719__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1719__g;
    __Vfunc_aes_mul_gf2p2__1719__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1719__d;
    __Vfunc_aes_mul_gf2p2__1719__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1719__f;
    __Vfunc_aes_mul_gf2p2__1719__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1719__a;
    __Vfunc_aes_mul_gf2p2__1719__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1719__b;
    __Vfunc_aes_mul_gf2p2__1719__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1719__c;
    __Vfunc_aes_mul_gf2p2__1719__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1720__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1720__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1720__g;
    __Vfunc_aes_mul_gf2p2__1720__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1720__d;
    __Vfunc_aes_mul_gf2p2__1720__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1720__f;
    __Vfunc_aes_mul_gf2p2__1720__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1720__a;
    __Vfunc_aes_mul_gf2p2__1720__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1720__b;
    __Vfunc_aes_mul_gf2p2__1720__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1720__c;
    __Vfunc_aes_mul_gf2p2__1720__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1721__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1721__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1721__g;
    __Vfunc_aes_mul_gf2p2__1721__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1721__d;
    __Vfunc_aes_mul_gf2p2__1721__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1721__f;
    __Vfunc_aes_mul_gf2p2__1721__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1721__a;
    __Vfunc_aes_mul_gf2p2__1721__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1721__b;
    __Vfunc_aes_mul_gf2p2__1721__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1721__c;
    __Vfunc_aes_mul_gf2p2__1721__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1724__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1724__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1724__gamma;
    __Vfunc_aes_mul_gf2p4__1724__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1724__delta;
    __Vfunc_aes_mul_gf2p4__1724__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1724__a;
    __Vfunc_aes_mul_gf2p4__1724__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1724__b;
    __Vfunc_aes_mul_gf2p4__1724__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1724__c;
    __Vfunc_aes_mul_gf2p4__1724__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1725__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1725__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1725__g;
    __Vfunc_aes_mul_gf2p2__1725__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1725__d;
    __Vfunc_aes_mul_gf2p2__1725__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1725__f;
    __Vfunc_aes_mul_gf2p2__1725__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1725__a;
    __Vfunc_aes_mul_gf2p2__1725__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1725__b;
    __Vfunc_aes_mul_gf2p2__1725__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1725__c;
    __Vfunc_aes_mul_gf2p2__1725__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1726__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1726__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1726__g;
    __Vfunc_aes_mul_gf2p2__1726__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1726__d;
    __Vfunc_aes_mul_gf2p2__1726__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1726__f;
    __Vfunc_aes_mul_gf2p2__1726__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1726__a;
    __Vfunc_aes_mul_gf2p2__1726__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1726__b;
    __Vfunc_aes_mul_gf2p2__1726__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1726__c;
    __Vfunc_aes_mul_gf2p2__1726__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1727__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1727__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1727__g;
    __Vfunc_aes_mul_gf2p2__1727__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1727__d;
    __Vfunc_aes_mul_gf2p2__1727__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1727__f;
    __Vfunc_aes_mul_gf2p2__1727__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1727__a;
    __Vfunc_aes_mul_gf2p2__1727__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1727__b;
    __Vfunc_aes_mul_gf2p2__1727__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1727__c;
    __Vfunc_aes_mul_gf2p2__1727__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1730__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1730__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1730__gamma;
    __Vfunc_aes_mul_gf2p4__1730__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1730__delta;
    __Vfunc_aes_mul_gf2p4__1730__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1730__a;
    __Vfunc_aes_mul_gf2p4__1730__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1730__b;
    __Vfunc_aes_mul_gf2p4__1730__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1730__c;
    __Vfunc_aes_mul_gf2p4__1730__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1731__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1731__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1731__g;
    __Vfunc_aes_mul_gf2p2__1731__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1731__d;
    __Vfunc_aes_mul_gf2p2__1731__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1731__f;
    __Vfunc_aes_mul_gf2p2__1731__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1731__a;
    __Vfunc_aes_mul_gf2p2__1731__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1731__b;
    __Vfunc_aes_mul_gf2p2__1731__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1731__c;
    __Vfunc_aes_mul_gf2p2__1731__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1732__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1732__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1732__g;
    __Vfunc_aes_mul_gf2p2__1732__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1732__d;
    __Vfunc_aes_mul_gf2p2__1732__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1732__f;
    __Vfunc_aes_mul_gf2p2__1732__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1732__a;
    __Vfunc_aes_mul_gf2p2__1732__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1732__b;
    __Vfunc_aes_mul_gf2p2__1732__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1732__c;
    __Vfunc_aes_mul_gf2p2__1732__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1733__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1733__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1733__g;
    __Vfunc_aes_mul_gf2p2__1733__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1733__d;
    __Vfunc_aes_mul_gf2p2__1733__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1733__f;
    __Vfunc_aes_mul_gf2p2__1733__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1733__a;
    __Vfunc_aes_mul_gf2p2__1733__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1733__b;
    __Vfunc_aes_mul_gf2p2__1733__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1733__c;
    __Vfunc_aes_mul_gf2p2__1733__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1736__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1736__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1736__gamma;
    __Vfunc_aes_mul_gf2p4__1736__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1736__delta;
    __Vfunc_aes_mul_gf2p4__1736__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1736__a;
    __Vfunc_aes_mul_gf2p4__1736__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1736__b;
    __Vfunc_aes_mul_gf2p4__1736__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1736__c;
    __Vfunc_aes_mul_gf2p4__1736__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1737__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1737__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1737__g;
    __Vfunc_aes_mul_gf2p2__1737__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1737__d;
    __Vfunc_aes_mul_gf2p2__1737__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1737__f;
    __Vfunc_aes_mul_gf2p2__1737__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1737__a;
    __Vfunc_aes_mul_gf2p2__1737__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1737__b;
    __Vfunc_aes_mul_gf2p2__1737__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1737__c;
    __Vfunc_aes_mul_gf2p2__1737__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1738__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1738__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1738__g;
    __Vfunc_aes_mul_gf2p2__1738__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1738__d;
    __Vfunc_aes_mul_gf2p2__1738__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1738__f;
    __Vfunc_aes_mul_gf2p2__1738__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1738__a;
    __Vfunc_aes_mul_gf2p2__1738__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1738__b;
    __Vfunc_aes_mul_gf2p2__1738__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1738__c;
    __Vfunc_aes_mul_gf2p2__1738__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1739__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1739__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1739__g;
    __Vfunc_aes_mul_gf2p2__1739__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1739__d;
    __Vfunc_aes_mul_gf2p2__1739__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1739__f;
    __Vfunc_aes_mul_gf2p2__1739__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1739__a;
    __Vfunc_aes_mul_gf2p2__1739__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1739__b;
    __Vfunc_aes_mul_gf2p2__1739__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1739__c;
    __Vfunc_aes_mul_gf2p2__1739__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1742__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1742__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1742__gamma;
    __Vfunc_aes_mul_gf2p4__1742__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1742__delta;
    __Vfunc_aes_mul_gf2p4__1742__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1742__a;
    __Vfunc_aes_mul_gf2p4__1742__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1742__b;
    __Vfunc_aes_mul_gf2p4__1742__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1742__c;
    __Vfunc_aes_mul_gf2p4__1742__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1743__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1743__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1743__g;
    __Vfunc_aes_mul_gf2p2__1743__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1743__d;
    __Vfunc_aes_mul_gf2p2__1743__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1743__f;
    __Vfunc_aes_mul_gf2p2__1743__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1743__a;
    __Vfunc_aes_mul_gf2p2__1743__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1743__b;
    __Vfunc_aes_mul_gf2p2__1743__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1743__c;
    __Vfunc_aes_mul_gf2p2__1743__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1744__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1744__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1744__g;
    __Vfunc_aes_mul_gf2p2__1744__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1744__d;
    __Vfunc_aes_mul_gf2p2__1744__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1744__f;
    __Vfunc_aes_mul_gf2p2__1744__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1744__a;
    __Vfunc_aes_mul_gf2p2__1744__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1744__b;
    __Vfunc_aes_mul_gf2p2__1744__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1744__c;
    __Vfunc_aes_mul_gf2p2__1744__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1745__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1745__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1745__g;
    __Vfunc_aes_mul_gf2p2__1745__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1745__d;
    __Vfunc_aes_mul_gf2p2__1745__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1745__f;
    __Vfunc_aes_mul_gf2p2__1745__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1745__a;
    __Vfunc_aes_mul_gf2p2__1745__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1745__b;
    __Vfunc_aes_mul_gf2p2__1745__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1745__c;
    __Vfunc_aes_mul_gf2p2__1745__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1748__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1748__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1748__gamma;
    __Vfunc_aes_mul_gf2p4__1748__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1748__delta;
    __Vfunc_aes_mul_gf2p4__1748__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1748__a;
    __Vfunc_aes_mul_gf2p4__1748__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1748__b;
    __Vfunc_aes_mul_gf2p4__1748__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1748__c;
    __Vfunc_aes_mul_gf2p4__1748__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1749__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__g;
    __Vfunc_aes_mul_gf2p2__1749__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__d;
    __Vfunc_aes_mul_gf2p2__1749__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__f;
    __Vfunc_aes_mul_gf2p2__1749__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1749__a;
    __Vfunc_aes_mul_gf2p2__1749__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1749__b;
    __Vfunc_aes_mul_gf2p2__1749__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1749__c;
    __Vfunc_aes_mul_gf2p2__1749__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1750__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__g;
    __Vfunc_aes_mul_gf2p2__1750__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__d;
    __Vfunc_aes_mul_gf2p2__1750__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__f;
    __Vfunc_aes_mul_gf2p2__1750__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1750__a;
    __Vfunc_aes_mul_gf2p2__1750__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1750__b;
    __Vfunc_aes_mul_gf2p2__1750__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1750__c;
    __Vfunc_aes_mul_gf2p2__1750__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1751__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__g;
    __Vfunc_aes_mul_gf2p2__1751__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__d;
    __Vfunc_aes_mul_gf2p2__1751__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__f;
    __Vfunc_aes_mul_gf2p2__1751__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1751__a;
    __Vfunc_aes_mul_gf2p2__1751__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1751__b;
    __Vfunc_aes_mul_gf2p2__1751__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1751__c;
    __Vfunc_aes_mul_gf2p2__1751__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1754__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1754__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1754__gamma;
    __Vfunc_aes_mul_gf2p4__1754__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1754__delta;
    __Vfunc_aes_mul_gf2p4__1754__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1754__a;
    __Vfunc_aes_mul_gf2p4__1754__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1754__b;
    __Vfunc_aes_mul_gf2p4__1754__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1754__c;
    __Vfunc_aes_mul_gf2p4__1754__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1755__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1755__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1755__g;
    __Vfunc_aes_mul_gf2p2__1755__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1755__d;
    __Vfunc_aes_mul_gf2p2__1755__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1755__f;
    __Vfunc_aes_mul_gf2p2__1755__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1755__a;
    __Vfunc_aes_mul_gf2p2__1755__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1755__b;
    __Vfunc_aes_mul_gf2p2__1755__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1755__c;
    __Vfunc_aes_mul_gf2p2__1755__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1756__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1756__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1756__g;
    __Vfunc_aes_mul_gf2p2__1756__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1756__d;
    __Vfunc_aes_mul_gf2p2__1756__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1756__f;
    __Vfunc_aes_mul_gf2p2__1756__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1756__a;
    __Vfunc_aes_mul_gf2p2__1756__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1756__b;
    __Vfunc_aes_mul_gf2p2__1756__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1756__c;
    __Vfunc_aes_mul_gf2p2__1756__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1757__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1757__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1757__g;
    __Vfunc_aes_mul_gf2p2__1757__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1757__d;
    __Vfunc_aes_mul_gf2p2__1757__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1757__f;
    __Vfunc_aes_mul_gf2p2__1757__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1757__a;
    __Vfunc_aes_mul_gf2p2__1757__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1757__b;
    __Vfunc_aes_mul_gf2p2__1757__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1757__c;
    __Vfunc_aes_mul_gf2p2__1757__c = 0;
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
    __Vfunc_aes_mul_gf2p2__1704__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__447__03a420__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1704__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1704__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1704__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1704__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1704__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1704__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1704__d)));
    __Vfunc_aes_mul_gf2p2__1704__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1704__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1704__d)));
    __Vfunc_aes_mul_gf2p2__1704__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1704__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1704__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1704__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1704__b)));
    __Vfunc_aes_mul_gf2p2__1704__Vfuncout = __Vfunc_aes_mul_gf2p2__1704__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1704__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1705__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__447__03a420__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1705__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1705__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1705__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1705__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1705__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1705__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1705__d)));
    __Vfunc_aes_mul_gf2p2__1705__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1705__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1705__d)));
    __Vfunc_aes_mul_gf2p2__1705__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1705__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1705__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1705__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1705__b)));
    __Vfunc_aes_mul_gf2p2__1705__Vfuncout = __Vfunc_aes_mul_gf2p2__1705__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1705__Vfuncout;
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
                vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_b 
                    = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [0U][3U] >> 0x00000018U);
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1650__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1650__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1650__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1650__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1650__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][3U] 
                                                      >> 0x00000018U))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1651__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1651__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1651__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1651__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [0U][3U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1652__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1652__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1652__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1652__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_b 
                    = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [1U][3U] >> 0x00000018U);
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1653__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1653__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1653__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1653__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1653__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][3U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1654__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1654__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1654__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1654__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][3U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1655__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1655__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1655__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1655__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__1702__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1702__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1702__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1702__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1702__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1702__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1702__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1702__d)));
    __Vfunc_aes_mul_gf2p2__1702__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1702__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1702__d)));
    __Vfunc_aes_mul_gf2p2__1702__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1702__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1702__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1702__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1702__b)));
    __Vfunc_aes_mul_gf2p2__1702__Vfuncout = __Vfunc_aes_mul_gf2p2__1702__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1702__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1703__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1703__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1703__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1703__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1703__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1703__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1703__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1703__d)));
    __Vfunc_aes_mul_gf2p2__1703__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1703__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1703__d)));
    __Vfunc_aes_mul_gf2p2__1703__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1703__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1703__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1703__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1703__b)));
    __Vfunc_aes_mul_gf2p2__1703__Vfuncout = __Vfunc_aes_mul_gf2p2__1703__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1703__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1682__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__1682__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1682__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7675765578366926172ull);
    __Vfunc_aes_mul_gf2p2__1683__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1682__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1683__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1682__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1683__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1683__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1683__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1683__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1683__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1683__d)));
    __Vfunc_aes_mul_gf2p2__1683__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1683__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1683__d)));
    __Vfunc_aes_mul_gf2p2__1683__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1683__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1683__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1683__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1683__b)));
    __Vfunc_aes_mul_gf2p2__1683__Vfuncout = __Vfunc_aes_mul_gf2p2__1683__f;
    __Vfunc_aes_mul_gf2p4__1682__a = __Vfunc_aes_mul_gf2p2__1683__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1684__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1682__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1682__delta)));
    __Vfunc_aes_mul_gf2p2__1684__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1682__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1682__gamma)));
    __Vfunc_aes_mul_gf2p2__1684__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1684__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1684__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1684__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1684__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1684__d)));
    __Vfunc_aes_mul_gf2p2__1684__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1684__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1684__d)));
    __Vfunc_aes_mul_gf2p2__1684__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1684__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1684__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1684__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1684__b)));
    __Vfunc_aes_mul_gf2p2__1684__Vfuncout = __Vfunc_aes_mul_gf2p2__1684__f;
    __Vfunc_aes_mul_gf2p4__1682__b = __Vfunc_aes_mul_gf2p2__1684__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1685__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1682__delta));
    __Vfunc_aes_mul_gf2p2__1685__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1682__gamma));
    __Vfunc_aes_mul_gf2p2__1685__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1685__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1685__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1685__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1685__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1685__d)));
    __Vfunc_aes_mul_gf2p2__1685__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1685__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1685__d)));
    __Vfunc_aes_mul_gf2p2__1685__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1685__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1685__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1685__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1685__b)));
    __Vfunc_aes_mul_gf2p2__1685__Vfuncout = __Vfunc_aes_mul_gf2p2__1685__f;
    __Vfunc_aes_mul_gf2p4__1682__c = __Vfunc_aes_mul_gf2p2__1685__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1682__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1682__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1686__g 
                        = __Vfunc_aes_mul_gf2p4__1682__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1686__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1686__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1686__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1686__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1686__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1686__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1682__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1682__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1687__g 
                        = __Vfunc_aes_mul_gf2p4__1682__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1687__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1687__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1687__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1687__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1687__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1687__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1682__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1682__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1682__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1688__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__1688__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1688__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17343044854213038233ull);
    __Vfunc_aes_mul_gf2p2__1689__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1688__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1689__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1688__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1689__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1689__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1689__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1689__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1689__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1689__d)));
    __Vfunc_aes_mul_gf2p2__1689__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1689__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1689__d)));
    __Vfunc_aes_mul_gf2p2__1689__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1689__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1689__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1689__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1689__b)));
    __Vfunc_aes_mul_gf2p2__1689__Vfuncout = __Vfunc_aes_mul_gf2p2__1689__f;
    __Vfunc_aes_mul_gf2p4__1688__a = __Vfunc_aes_mul_gf2p2__1689__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1690__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1688__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1688__delta)));
    __Vfunc_aes_mul_gf2p2__1690__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1688__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1688__gamma)));
    __Vfunc_aes_mul_gf2p2__1690__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1690__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1690__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1690__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1690__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1690__d)));
    __Vfunc_aes_mul_gf2p2__1690__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1690__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1690__d)));
    __Vfunc_aes_mul_gf2p2__1690__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1690__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1690__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1690__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1690__b)));
    __Vfunc_aes_mul_gf2p2__1690__Vfuncout = __Vfunc_aes_mul_gf2p2__1690__f;
    __Vfunc_aes_mul_gf2p4__1688__b = __Vfunc_aes_mul_gf2p2__1690__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1691__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1688__delta));
    __Vfunc_aes_mul_gf2p2__1691__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1688__gamma));
    __Vfunc_aes_mul_gf2p2__1691__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1691__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1691__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1691__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1691__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1691__d)));
    __Vfunc_aes_mul_gf2p2__1691__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1691__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1691__d)));
    __Vfunc_aes_mul_gf2p2__1691__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1691__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1691__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1691__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1691__b)));
    __Vfunc_aes_mul_gf2p2__1691__Vfuncout = __Vfunc_aes_mul_gf2p2__1691__f;
    __Vfunc_aes_mul_gf2p4__1688__c = __Vfunc_aes_mul_gf2p2__1691__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1688__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1688__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1692__g 
                        = __Vfunc_aes_mul_gf2p4__1688__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1692__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1692__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1692__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1692__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1692__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1692__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1688__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1688__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1693__g 
                        = __Vfunc_aes_mul_gf2p4__1688__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1693__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1693__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1693__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1693__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1693__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1693__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1688__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1688__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1688__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1706__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1706__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1706__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1706__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1706__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1706__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1706__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1706__d)));
    __Vfunc_aes_mul_gf2p2__1706__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1706__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1706__d)));
    __Vfunc_aes_mul_gf2p2__1706__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1706__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1706__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1706__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1706__b)));
    __Vfunc_aes_mul_gf2p2__1706__Vfuncout = __Vfunc_aes_mul_gf2p2__1706__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1706__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1707__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1707__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1707__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1707__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1707__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1707__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1707__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1707__d)));
    __Vfunc_aes_mul_gf2p2__1707__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1707__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1707__d)));
    __Vfunc_aes_mul_gf2p2__1707__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1707__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1707__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1707__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1707__b)));
    __Vfunc_aes_mul_gf2p2__1707__Vfuncout = __Vfunc_aes_mul_gf2p2__1707__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1707__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1710__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1710__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1710__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1710__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1710__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1710__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1710__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1710__d)));
    __Vfunc_aes_mul_gf2p2__1710__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1710__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1710__d)));
    __Vfunc_aes_mul_gf2p2__1710__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1710__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1710__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1710__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1710__b)));
    __Vfunc_aes_mul_gf2p2__1710__Vfuncout = __Vfunc_aes_mul_gf2p2__1710__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1710__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1711__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1711__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1711__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1711__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1711__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1711__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1711__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1711__d)));
    __Vfunc_aes_mul_gf2p2__1711__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1711__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1711__d)));
    __Vfunc_aes_mul_gf2p2__1711__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1711__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1711__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1711__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1711__b)));
    __Vfunc_aes_mul_gf2p2__1711__Vfuncout = __Vfunc_aes_mul_gf2p2__1711__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1711__Vfuncout;
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1656__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1656__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1656__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1656__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1657__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1657__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1657__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1657__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1658__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1658__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1658__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__1658__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1658__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1659__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1659__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1659__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1659__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1659__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1660__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1660__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1660__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1660__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1661__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1661__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1661__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1661__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma)));
    __Vfunc_aes_square_gf2p2__1663__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma));
    __Vfunc_aes_square_gf2p2__1663__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1663__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1663__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1663__Vfuncout = __Vfunc_aes_square_gf2p2__1663__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__b = __Vfunc_aes_square_gf2p2__1663__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1664__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1664__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1664__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1664__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1664__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1664__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1664__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1665__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1665__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1665__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1665__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1665__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1665__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1665__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1670__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__447__03a420__KET__);
    __Vfunc_aes_mul_gf2p4__1670__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1670__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16093957584409746916ull);
    __Vfunc_aes_mul_gf2p2__1671__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1670__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1671__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1670__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1671__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1671__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1671__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1671__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1671__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1671__d)));
    __Vfunc_aes_mul_gf2p2__1671__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1671__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1671__d)));
    __Vfunc_aes_mul_gf2p2__1671__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1671__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1671__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1671__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1671__b)));
    __Vfunc_aes_mul_gf2p2__1671__Vfuncout = __Vfunc_aes_mul_gf2p2__1671__f;
    __Vfunc_aes_mul_gf2p4__1670__a = __Vfunc_aes_mul_gf2p2__1671__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1672__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1670__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1670__delta)));
    __Vfunc_aes_mul_gf2p2__1672__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1670__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1670__gamma)));
    __Vfunc_aes_mul_gf2p2__1672__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1672__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1672__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1672__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1672__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1672__d)));
    __Vfunc_aes_mul_gf2p2__1672__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1672__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1672__d)));
    __Vfunc_aes_mul_gf2p2__1672__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1672__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1672__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1672__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1672__b)));
    __Vfunc_aes_mul_gf2p2__1672__Vfuncout = __Vfunc_aes_mul_gf2p2__1672__f;
    __Vfunc_aes_mul_gf2p4__1670__b = __Vfunc_aes_mul_gf2p2__1672__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1673__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1670__delta));
    __Vfunc_aes_mul_gf2p2__1673__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1670__gamma));
    __Vfunc_aes_mul_gf2p2__1673__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1673__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1673__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1673__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1673__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1673__d)));
    __Vfunc_aes_mul_gf2p2__1673__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1673__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1673__d)));
    __Vfunc_aes_mul_gf2p2__1673__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1673__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1673__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1673__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1673__b)));
    __Vfunc_aes_mul_gf2p2__1673__Vfuncout = __Vfunc_aes_mul_gf2p2__1673__f;
    __Vfunc_aes_mul_gf2p4__1670__c = __Vfunc_aes_mul_gf2p2__1673__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1670__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1670__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1674__g 
                        = __Vfunc_aes_mul_gf2p4__1670__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1674__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1674__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1674__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1674__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1674__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1674__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1670__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1670__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1675__g 
                        = __Vfunc_aes_mul_gf2p4__1670__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1675__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1675__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1675__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1675__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1675__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1675__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1670__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1670__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__1670__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma)));
    __Vfunc_aes_square_gf2p2__1667__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma));
    __Vfunc_aes_square_gf2p2__1667__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1667__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1667__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1667__Vfuncout = __Vfunc_aes_square_gf2p2__1667__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__b = __Vfunc_aes_square_gf2p2__1667__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1668__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1668__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1668__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1668__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1668__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1668__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1668__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1669__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1669__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1669__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1669__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1669__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1669__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1669__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1676__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__447__03a420__KET__);
    __Vfunc_aes_mul_gf2p4__1676__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1676__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13356602535902732069ull);
    __Vfunc_aes_mul_gf2p2__1677__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1676__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1677__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1676__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1677__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1677__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1677__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1677__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1677__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1677__d)));
    __Vfunc_aes_mul_gf2p2__1677__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1677__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1677__d)));
    __Vfunc_aes_mul_gf2p2__1677__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1677__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1677__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1677__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1677__b)));
    __Vfunc_aes_mul_gf2p2__1677__Vfuncout = __Vfunc_aes_mul_gf2p2__1677__f;
    __Vfunc_aes_mul_gf2p4__1676__a = __Vfunc_aes_mul_gf2p2__1677__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1678__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1676__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1676__delta)));
    __Vfunc_aes_mul_gf2p2__1678__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1676__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1676__gamma)));
    __Vfunc_aes_mul_gf2p2__1678__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1678__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1678__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1678__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1678__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1678__d)));
    __Vfunc_aes_mul_gf2p2__1678__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1678__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1678__d)));
    __Vfunc_aes_mul_gf2p2__1678__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1678__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1678__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1678__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1678__b)));
    __Vfunc_aes_mul_gf2p2__1678__Vfuncout = __Vfunc_aes_mul_gf2p2__1678__f;
    __Vfunc_aes_mul_gf2p4__1676__b = __Vfunc_aes_mul_gf2p2__1678__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1679__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1676__delta));
    __Vfunc_aes_mul_gf2p2__1679__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1676__gamma));
    __Vfunc_aes_mul_gf2p2__1679__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1679__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1679__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1679__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1679__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1679__d)));
    __Vfunc_aes_mul_gf2p2__1679__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1679__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1679__d)));
    __Vfunc_aes_mul_gf2p2__1679__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1679__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1679__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1679__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1679__b)));
    __Vfunc_aes_mul_gf2p2__1679__Vfuncout = __Vfunc_aes_mul_gf2p2__1679__f;
    __Vfunc_aes_mul_gf2p4__1676__c = __Vfunc_aes_mul_gf2p2__1679__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1676__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1676__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1680__g 
                        = __Vfunc_aes_mul_gf2p4__1676__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1680__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1680__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1680__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1680__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1680__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1680__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1676__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1676__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1681__g 
                        = __Vfunc_aes_mul_gf2p4__1676__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1681__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1681__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1681__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1681__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1681__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1681__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1676__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1676__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__1676__Vfuncout;
    __Vfunc_aes_square_gf2p2__1698__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__1698__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1698__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1698__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1698__Vfuncout = __Vfunc_aes_square_gf2p2__1698__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1698__Vfuncout;
    __Vfunc_aes_square_gf2p2__1699__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1699__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1699__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1699__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1699__Vfuncout = __Vfunc_aes_square_gf2p2__1699__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1699__Vfuncout;
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
    __Vfunc_aes_mul_gf2p2__1708__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__447__03a420__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1708__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__1708__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1708__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1708__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1708__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1708__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1708__d)));
    __Vfunc_aes_mul_gf2p2__1708__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1708__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1708__d)));
    __Vfunc_aes_mul_gf2p2__1708__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1708__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1708__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1708__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1708__b)));
    __Vfunc_aes_mul_gf2p2__1708__Vfuncout = __Vfunc_aes_mul_gf2p2__1708__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1708__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1709__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__447__03a420__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1709__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__1709__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1709__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1709__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1709__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1709__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1709__d)));
    __Vfunc_aes_mul_gf2p2__1709__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1709__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1709__d)));
    __Vfunc_aes_mul_gf2p2__1709__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1709__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1709__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1709__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1709__b)));
    __Vfunc_aes_mul_gf2p2__1709__Vfuncout = __Vfunc_aes_mul_gf2p2__1709__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1709__Vfuncout;
    __Vfunc_aes_square_gf2p2__1695__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__1695__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1695__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1695__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1695__Vfuncout = __Vfunc_aes_square_gf2p2__1695__d;
    __Vfunc_aes_scale_omega2_gf2p2__1694__g = __Vfunc_aes_square_gf2p2__1695__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1694__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1694__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1694__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1694__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1694__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1694__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1700__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__447__03a420__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1700__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1700__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1700__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1700__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1700__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1700__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1700__d)));
    __Vfunc_aes_mul_gf2p2__1700__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1700__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1700__d)));
    __Vfunc_aes_mul_gf2p2__1700__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1700__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1700__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1700__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1700__b)));
    __Vfunc_aes_mul_gf2p2__1700__Vfuncout = __Vfunc_aes_mul_gf2p2__1700__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1700__Vfuncout;
    __Vfunc_aes_square_gf2p2__1697__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__1697__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1697__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1697__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1697__Vfuncout = __Vfunc_aes_square_gf2p2__1697__d;
    __Vfunc_aes_scale_omega2_gf2p2__1696__g = __Vfunc_aes_square_gf2p2__1697__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1696__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1696__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1696__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1696__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1696__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1696__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1701__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__447__03a420__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1701__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1701__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1701__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1701__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1701__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1701__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1701__d)));
    __Vfunc_aes_mul_gf2p2__1701__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1701__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1701__d)));
    __Vfunc_aes_mul_gf2p2__1701__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1701__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1701__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1701__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1701__b)));
    __Vfunc_aes_mul_gf2p2__1701__Vfuncout = __Vfunc_aes_mul_gf2p2__1701__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1701__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1712__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__1712__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1712__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5218665845888424104ull);
    __Vfunc_aes_mul_gf2p2__1713__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1712__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1713__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1712__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1713__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1713__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1713__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1713__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1713__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1713__d)));
    __Vfunc_aes_mul_gf2p2__1713__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1713__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1713__d)));
    __Vfunc_aes_mul_gf2p2__1713__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1713__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1713__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1713__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1713__b)));
    __Vfunc_aes_mul_gf2p2__1713__Vfuncout = __Vfunc_aes_mul_gf2p2__1713__f;
    __Vfunc_aes_mul_gf2p4__1712__a = __Vfunc_aes_mul_gf2p2__1713__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1714__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1712__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1712__delta)));
    __Vfunc_aes_mul_gf2p2__1714__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1712__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1712__gamma)));
    __Vfunc_aes_mul_gf2p2__1714__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1714__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1714__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1714__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1714__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1714__d)));
    __Vfunc_aes_mul_gf2p2__1714__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1714__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1714__d)));
    __Vfunc_aes_mul_gf2p2__1714__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1714__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1714__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1714__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1714__b)));
    __Vfunc_aes_mul_gf2p2__1714__Vfuncout = __Vfunc_aes_mul_gf2p2__1714__f;
    __Vfunc_aes_mul_gf2p4__1712__b = __Vfunc_aes_mul_gf2p2__1714__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1715__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1712__delta));
    __Vfunc_aes_mul_gf2p2__1715__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1712__gamma));
    __Vfunc_aes_mul_gf2p2__1715__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1715__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1715__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1715__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1715__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1715__d)));
    __Vfunc_aes_mul_gf2p2__1715__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1715__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1715__d)));
    __Vfunc_aes_mul_gf2p2__1715__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1715__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1715__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1715__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1715__b)));
    __Vfunc_aes_mul_gf2p2__1715__Vfuncout = __Vfunc_aes_mul_gf2p2__1715__f;
    __Vfunc_aes_mul_gf2p4__1712__c = __Vfunc_aes_mul_gf2p2__1715__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1712__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1712__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1716__g 
                        = __Vfunc_aes_mul_gf2p4__1712__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1716__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1716__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1716__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1716__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1716__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1716__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1712__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1712__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1717__g 
                        = __Vfunc_aes_mul_gf2p4__1712__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1717__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1717__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1717__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1717__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1717__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1717__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1712__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1712__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1712__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1730__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__1730__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1730__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6526807174096189737ull);
    __Vfunc_aes_mul_gf2p2__1731__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1730__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1731__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1730__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1731__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1731__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1731__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1731__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1731__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1731__d)));
    __Vfunc_aes_mul_gf2p2__1731__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1731__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1731__d)));
    __Vfunc_aes_mul_gf2p2__1731__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1731__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1731__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1731__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1731__b)));
    __Vfunc_aes_mul_gf2p2__1731__Vfuncout = __Vfunc_aes_mul_gf2p2__1731__f;
    __Vfunc_aes_mul_gf2p4__1730__a = __Vfunc_aes_mul_gf2p2__1731__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1732__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1730__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1730__delta)));
    __Vfunc_aes_mul_gf2p2__1732__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1730__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1730__gamma)));
    __Vfunc_aes_mul_gf2p2__1732__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1732__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1732__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1732__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1732__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1732__d)));
    __Vfunc_aes_mul_gf2p2__1732__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1732__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1732__d)));
    __Vfunc_aes_mul_gf2p2__1732__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1732__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1732__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1732__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1732__b)));
    __Vfunc_aes_mul_gf2p2__1732__Vfuncout = __Vfunc_aes_mul_gf2p2__1732__f;
    __Vfunc_aes_mul_gf2p4__1730__b = __Vfunc_aes_mul_gf2p2__1732__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1733__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1730__delta));
    __Vfunc_aes_mul_gf2p2__1733__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1730__gamma));
    __Vfunc_aes_mul_gf2p2__1733__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1733__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1733__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1733__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1733__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1733__d)));
    __Vfunc_aes_mul_gf2p2__1733__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1733__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1733__d)));
    __Vfunc_aes_mul_gf2p2__1733__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1733__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1733__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1733__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1733__b)));
    __Vfunc_aes_mul_gf2p2__1733__Vfuncout = __Vfunc_aes_mul_gf2p2__1733__f;
    __Vfunc_aes_mul_gf2p4__1730__c = __Vfunc_aes_mul_gf2p2__1733__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1730__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1730__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1734__g 
                        = __Vfunc_aes_mul_gf2p4__1730__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1734__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1734__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1734__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1734__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1734__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1734__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1730__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1730__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1735__g 
                        = __Vfunc_aes_mul_gf2p4__1730__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1735__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1735__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1735__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1735__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1735__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1735__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1730__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1730__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1730__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1736__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__1736__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14029708052322850784ull);
    __Vfunc_aes_mul_gf2p2__1737__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1736__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1737__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1736__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1737__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1737__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1737__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1737__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1737__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1737__d)));
    __Vfunc_aes_mul_gf2p2__1737__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1737__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1737__d)));
    __Vfunc_aes_mul_gf2p2__1737__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1737__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1737__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1737__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1737__b)));
    __Vfunc_aes_mul_gf2p2__1737__Vfuncout = __Vfunc_aes_mul_gf2p2__1737__f;
    __Vfunc_aes_mul_gf2p4__1736__a = __Vfunc_aes_mul_gf2p2__1737__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1738__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1736__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1736__delta)));
    __Vfunc_aes_mul_gf2p2__1738__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1736__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1736__gamma)));
    __Vfunc_aes_mul_gf2p2__1738__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1738__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1738__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1738__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1738__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1738__d)));
    __Vfunc_aes_mul_gf2p2__1738__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1738__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1738__d)));
    __Vfunc_aes_mul_gf2p2__1738__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1738__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1738__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1738__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1738__b)));
    __Vfunc_aes_mul_gf2p2__1738__Vfuncout = __Vfunc_aes_mul_gf2p2__1738__f;
    __Vfunc_aes_mul_gf2p4__1736__b = __Vfunc_aes_mul_gf2p2__1738__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1739__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1736__delta));
    __Vfunc_aes_mul_gf2p2__1739__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1736__gamma));
    __Vfunc_aes_mul_gf2p2__1739__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1739__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1739__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1739__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1739__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1739__d)));
    __Vfunc_aes_mul_gf2p2__1739__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1739__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1739__d)));
    __Vfunc_aes_mul_gf2p2__1739__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1739__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1739__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1739__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1739__b)));
    __Vfunc_aes_mul_gf2p2__1739__Vfuncout = __Vfunc_aes_mul_gf2p2__1739__f;
    __Vfunc_aes_mul_gf2p4__1736__c = __Vfunc_aes_mul_gf2p2__1739__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1736__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1736__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1740__g 
                        = __Vfunc_aes_mul_gf2p4__1736__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1740__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1740__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1740__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1740__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1740__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1740__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1736__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1736__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1741__g 
                        = __Vfunc_aes_mul_gf2p4__1736__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1741__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1741__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1741__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1741__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1741__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1741__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1736__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1736__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1736__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1748__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1748__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13200052779290430545ull);
    __Vfunc_aes_mul_gf2p2__1749__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1748__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1749__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1748__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1749__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1749__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1749__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1749__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1749__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1749__d)));
    __Vfunc_aes_mul_gf2p2__1749__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1749__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1749__d)));
    __Vfunc_aes_mul_gf2p2__1749__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1749__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1749__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1749__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1749__b)));
    __Vfunc_aes_mul_gf2p2__1749__Vfuncout = __Vfunc_aes_mul_gf2p2__1749__f;
    __Vfunc_aes_mul_gf2p4__1748__a = __Vfunc_aes_mul_gf2p2__1749__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1750__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1748__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1748__delta)));
    __Vfunc_aes_mul_gf2p2__1750__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1748__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1748__gamma)));
    __Vfunc_aes_mul_gf2p2__1750__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1750__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1750__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1750__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1750__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1750__d)));
    __Vfunc_aes_mul_gf2p2__1750__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1750__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1750__d)));
    __Vfunc_aes_mul_gf2p2__1750__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1750__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1750__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1750__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1750__b)));
    __Vfunc_aes_mul_gf2p2__1750__Vfuncout = __Vfunc_aes_mul_gf2p2__1750__f;
    __Vfunc_aes_mul_gf2p4__1748__b = __Vfunc_aes_mul_gf2p2__1750__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1751__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1748__delta));
    __Vfunc_aes_mul_gf2p2__1751__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1748__gamma));
    __Vfunc_aes_mul_gf2p2__1751__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1751__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1751__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1751__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1751__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1751__d)));
    __Vfunc_aes_mul_gf2p2__1751__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1751__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1751__d)));
    __Vfunc_aes_mul_gf2p2__1751__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1751__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1751__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1751__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1751__b)));
    __Vfunc_aes_mul_gf2p2__1751__Vfuncout = __Vfunc_aes_mul_gf2p2__1751__f;
    __Vfunc_aes_mul_gf2p4__1748__c = __Vfunc_aes_mul_gf2p2__1751__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1748__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1748__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1752__g 
                        = __Vfunc_aes_mul_gf2p4__1748__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1752__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1752__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1752__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1752__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1752__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1752__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1748__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1748__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1753__g 
                        = __Vfunc_aes_mul_gf2p4__1748__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1753__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1753__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1753__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1753__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1753__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1753__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1748__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1748__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1748__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1718__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1718__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1718__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10683344674355101845ull);
    __Vfunc_aes_mul_gf2p2__1719__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1718__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1719__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1718__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1719__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1719__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1719__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1719__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1719__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1719__d)));
    __Vfunc_aes_mul_gf2p2__1719__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1719__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1719__d)));
    __Vfunc_aes_mul_gf2p2__1719__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1719__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1719__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1719__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1719__b)));
    __Vfunc_aes_mul_gf2p2__1719__Vfuncout = __Vfunc_aes_mul_gf2p2__1719__f;
    __Vfunc_aes_mul_gf2p4__1718__a = __Vfunc_aes_mul_gf2p2__1719__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1720__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1718__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1718__delta)));
    __Vfunc_aes_mul_gf2p2__1720__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1718__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1718__gamma)));
    __Vfunc_aes_mul_gf2p2__1720__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1720__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1720__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1720__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1720__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1720__d)));
    __Vfunc_aes_mul_gf2p2__1720__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1720__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1720__d)));
    __Vfunc_aes_mul_gf2p2__1720__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1720__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1720__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1720__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1720__b)));
    __Vfunc_aes_mul_gf2p2__1720__Vfuncout = __Vfunc_aes_mul_gf2p2__1720__f;
    __Vfunc_aes_mul_gf2p4__1718__b = __Vfunc_aes_mul_gf2p2__1720__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1721__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1718__delta));
    __Vfunc_aes_mul_gf2p2__1721__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1718__gamma));
    __Vfunc_aes_mul_gf2p2__1721__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1721__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1721__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1721__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1721__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1721__d)));
    __Vfunc_aes_mul_gf2p2__1721__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1721__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1721__d)));
    __Vfunc_aes_mul_gf2p2__1721__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1721__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1721__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1721__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1721__b)));
    __Vfunc_aes_mul_gf2p2__1721__Vfuncout = __Vfunc_aes_mul_gf2p2__1721__f;
    __Vfunc_aes_mul_gf2p4__1718__c = __Vfunc_aes_mul_gf2p2__1721__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1718__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1718__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1722__g 
                        = __Vfunc_aes_mul_gf2p4__1718__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1722__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1722__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1722__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1722__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1722__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1722__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1718__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1718__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1723__g 
                        = __Vfunc_aes_mul_gf2p4__1718__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1723__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1723__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1723__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1723__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1723__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1723__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1718__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1718__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1718__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1724__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1724__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1724__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16992543978343563583ull);
    __Vfunc_aes_mul_gf2p2__1725__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1724__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1725__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1724__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1725__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1725__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1725__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1725__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1725__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1725__d)));
    __Vfunc_aes_mul_gf2p2__1725__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1725__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1725__d)));
    __Vfunc_aes_mul_gf2p2__1725__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1725__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1725__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1725__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1725__b)));
    __Vfunc_aes_mul_gf2p2__1725__Vfuncout = __Vfunc_aes_mul_gf2p2__1725__f;
    __Vfunc_aes_mul_gf2p4__1724__a = __Vfunc_aes_mul_gf2p2__1725__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1726__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1724__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1724__delta)));
    __Vfunc_aes_mul_gf2p2__1726__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1724__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1724__gamma)));
    __Vfunc_aes_mul_gf2p2__1726__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1726__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1726__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1726__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1726__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1726__d)));
    __Vfunc_aes_mul_gf2p2__1726__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1726__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1726__d)));
    __Vfunc_aes_mul_gf2p2__1726__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1726__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1726__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1726__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1726__b)));
    __Vfunc_aes_mul_gf2p2__1726__Vfuncout = __Vfunc_aes_mul_gf2p2__1726__f;
    __Vfunc_aes_mul_gf2p4__1724__b = __Vfunc_aes_mul_gf2p2__1726__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1727__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1724__delta));
    __Vfunc_aes_mul_gf2p2__1727__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1724__gamma));
    __Vfunc_aes_mul_gf2p2__1727__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1727__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1727__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1727__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1727__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1727__d)));
    __Vfunc_aes_mul_gf2p2__1727__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1727__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1727__d)));
    __Vfunc_aes_mul_gf2p2__1727__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1727__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1727__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1727__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1727__b)));
    __Vfunc_aes_mul_gf2p2__1727__Vfuncout = __Vfunc_aes_mul_gf2p2__1727__f;
    __Vfunc_aes_mul_gf2p4__1724__c = __Vfunc_aes_mul_gf2p2__1727__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1724__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1724__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1728__g 
                        = __Vfunc_aes_mul_gf2p4__1724__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1728__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1728__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1728__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1728__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1728__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1728__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1724__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1724__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1729__g 
                        = __Vfunc_aes_mul_gf2p4__1724__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1729__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1729__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1729__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1729__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1729__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1729__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1724__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1724__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1724__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1742__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1742__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1742__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9106160847734822932ull);
    __Vfunc_aes_mul_gf2p2__1743__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1742__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1743__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1742__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1743__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1743__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1743__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1743__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1743__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1743__d)));
    __Vfunc_aes_mul_gf2p2__1743__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1743__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1743__d)));
    __Vfunc_aes_mul_gf2p2__1743__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1743__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1743__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1743__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1743__b)));
    __Vfunc_aes_mul_gf2p2__1743__Vfuncout = __Vfunc_aes_mul_gf2p2__1743__f;
    __Vfunc_aes_mul_gf2p4__1742__a = __Vfunc_aes_mul_gf2p2__1743__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1744__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1742__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1742__delta)));
    __Vfunc_aes_mul_gf2p2__1744__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1742__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1742__gamma)));
    __Vfunc_aes_mul_gf2p2__1744__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1744__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1744__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1744__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1744__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1744__d)));
    __Vfunc_aes_mul_gf2p2__1744__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1744__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1744__d)));
    __Vfunc_aes_mul_gf2p2__1744__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1744__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1744__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1744__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1744__b)));
    __Vfunc_aes_mul_gf2p2__1744__Vfuncout = __Vfunc_aes_mul_gf2p2__1744__f;
    __Vfunc_aes_mul_gf2p4__1742__b = __Vfunc_aes_mul_gf2p2__1744__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1745__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1742__delta));
    __Vfunc_aes_mul_gf2p2__1745__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1742__gamma));
    __Vfunc_aes_mul_gf2p2__1745__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1745__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1745__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1745__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1745__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1745__d)));
    __Vfunc_aes_mul_gf2p2__1745__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1745__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1745__d)));
    __Vfunc_aes_mul_gf2p2__1745__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1745__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1745__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1745__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1745__b)));
    __Vfunc_aes_mul_gf2p2__1745__Vfuncout = __Vfunc_aes_mul_gf2p2__1745__f;
    __Vfunc_aes_mul_gf2p4__1742__c = __Vfunc_aes_mul_gf2p2__1745__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1742__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1742__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1746__g 
                        = __Vfunc_aes_mul_gf2p4__1742__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1746__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1746__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1746__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1746__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1746__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1746__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1742__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1742__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1747__g 
                        = __Vfunc_aes_mul_gf2p4__1742__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1747__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1747__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1747__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1747__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1747__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1747__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1742__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1742__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1742__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1754__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1754__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1754__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17843968323454670232ull);
    __Vfunc_aes_mul_gf2p2__1755__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1754__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1755__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1754__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1755__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1755__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1755__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1755__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1755__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1755__d)));
    __Vfunc_aes_mul_gf2p2__1755__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1755__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1755__d)));
    __Vfunc_aes_mul_gf2p2__1755__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1755__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1755__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1755__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1755__b)));
    __Vfunc_aes_mul_gf2p2__1755__Vfuncout = __Vfunc_aes_mul_gf2p2__1755__f;
    __Vfunc_aes_mul_gf2p4__1754__a = __Vfunc_aes_mul_gf2p2__1755__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1756__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1754__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1754__delta)));
    __Vfunc_aes_mul_gf2p2__1756__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1754__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1754__gamma)));
    __Vfunc_aes_mul_gf2p2__1756__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1756__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1756__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1756__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1756__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1756__d)));
    __Vfunc_aes_mul_gf2p2__1756__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1756__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1756__d)));
    __Vfunc_aes_mul_gf2p2__1756__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1756__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1756__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1756__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1756__b)));
    __Vfunc_aes_mul_gf2p2__1756__Vfuncout = __Vfunc_aes_mul_gf2p2__1756__f;
    __Vfunc_aes_mul_gf2p4__1754__b = __Vfunc_aes_mul_gf2p2__1756__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1757__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1754__delta));
    __Vfunc_aes_mul_gf2p2__1757__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1754__gamma));
    __Vfunc_aes_mul_gf2p2__1757__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1757__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1757__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1757__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1757__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1757__d)));
    __Vfunc_aes_mul_gf2p2__1757__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1757__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1757__d)));
    __Vfunc_aes_mul_gf2p2__1757__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1757__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1757__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1757__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1757__b)));
    __Vfunc_aes_mul_gf2p2__1757__Vfuncout = __Vfunc_aes_mul_gf2p2__1757__f;
    __Vfunc_aes_mul_gf2p4__1754__c = __Vfunc_aes_mul_gf2p2__1757__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1754__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1754__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1758__g 
                        = __Vfunc_aes_mul_gf2p4__1754__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1758__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1758__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1758__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1758__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1758__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1758__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1754__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1754__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1759__g 
                        = __Vfunc_aes_mul_gf2p4__1754__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1759__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1759__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1759__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1759__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1759__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1759__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1754__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1754__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1754__Vfuncout;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1792__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1792__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1792__gamma;
    __Vfunc_aes_mul_gf2p4__1792__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1792__delta;
    __Vfunc_aes_mul_gf2p4__1792__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1792__a;
    __Vfunc_aes_mul_gf2p4__1792__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1792__b;
    __Vfunc_aes_mul_gf2p4__1792__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1792__c;
    __Vfunc_aes_mul_gf2p4__1792__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1793__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1793__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1793__g;
    __Vfunc_aes_mul_gf2p2__1793__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1793__d;
    __Vfunc_aes_mul_gf2p2__1793__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1793__f;
    __Vfunc_aes_mul_gf2p2__1793__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1793__a;
    __Vfunc_aes_mul_gf2p2__1793__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1793__b;
    __Vfunc_aes_mul_gf2p2__1793__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1793__c;
    __Vfunc_aes_mul_gf2p2__1793__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1794__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1794__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1794__g;
    __Vfunc_aes_mul_gf2p2__1794__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1794__d;
    __Vfunc_aes_mul_gf2p2__1794__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1794__f;
    __Vfunc_aes_mul_gf2p2__1794__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1794__a;
    __Vfunc_aes_mul_gf2p2__1794__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1794__b;
    __Vfunc_aes_mul_gf2p2__1794__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1794__c;
    __Vfunc_aes_mul_gf2p2__1794__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1795__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1795__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1795__g;
    __Vfunc_aes_mul_gf2p2__1795__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1795__d;
    __Vfunc_aes_mul_gf2p2__1795__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1795__f;
    __Vfunc_aes_mul_gf2p2__1795__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1795__a;
    __Vfunc_aes_mul_gf2p2__1795__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1795__b;
    __Vfunc_aes_mul_gf2p2__1795__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1795__c;
    __Vfunc_aes_mul_gf2p2__1795__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1798__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1798__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1798__gamma;
    __Vfunc_aes_mul_gf2p4__1798__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1798__delta;
    __Vfunc_aes_mul_gf2p4__1798__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1798__a;
    __Vfunc_aes_mul_gf2p4__1798__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1798__b;
    __Vfunc_aes_mul_gf2p4__1798__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1798__c;
    __Vfunc_aes_mul_gf2p4__1798__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1799__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1799__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1799__g;
    __Vfunc_aes_mul_gf2p2__1799__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1799__d;
    __Vfunc_aes_mul_gf2p2__1799__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1799__f;
    __Vfunc_aes_mul_gf2p2__1799__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1799__a;
    __Vfunc_aes_mul_gf2p2__1799__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1799__b;
    __Vfunc_aes_mul_gf2p2__1799__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1799__c;
    __Vfunc_aes_mul_gf2p2__1799__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1800__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1800__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1800__g;
    __Vfunc_aes_mul_gf2p2__1800__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1800__d;
    __Vfunc_aes_mul_gf2p2__1800__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1800__f;
    __Vfunc_aes_mul_gf2p2__1800__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1800__a;
    __Vfunc_aes_mul_gf2p2__1800__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1800__b;
    __Vfunc_aes_mul_gf2p2__1800__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1800__c;
    __Vfunc_aes_mul_gf2p2__1800__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1801__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1801__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1801__g;
    __Vfunc_aes_mul_gf2p2__1801__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1801__d;
    __Vfunc_aes_mul_gf2p2__1801__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1801__f;
    __Vfunc_aes_mul_gf2p2__1801__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1801__a;
    __Vfunc_aes_mul_gf2p2__1801__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1801__b;
    __Vfunc_aes_mul_gf2p2__1801__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1801__c;
    __Vfunc_aes_mul_gf2p2__1801__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1804__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1804__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1804__g;
    __Vfunc_aes_scale_omega2_gf2p2__1804__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1804__d;
    __Vfunc_aes_scale_omega2_gf2p2__1804__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1805__Vfuncout;
    __Vfunc_aes_square_gf2p2__1805__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1805__g;
    __Vfunc_aes_square_gf2p2__1805__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1805__d;
    __Vfunc_aes_square_gf2p2__1805__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1806__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1806__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1806__g;
    __Vfunc_aes_scale_omega2_gf2p2__1806__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1806__d;
    __Vfunc_aes_scale_omega2_gf2p2__1806__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1807__Vfuncout;
    __Vfunc_aes_square_gf2p2__1807__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1807__g;
    __Vfunc_aes_square_gf2p2__1807__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1807__d;
    __Vfunc_aes_square_gf2p2__1807__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1808__Vfuncout;
    __Vfunc_aes_square_gf2p2__1808__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1808__g;
    __Vfunc_aes_square_gf2p2__1808__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1808__d;
    __Vfunc_aes_square_gf2p2__1808__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1809__Vfuncout;
    __Vfunc_aes_square_gf2p2__1809__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1809__g;
    __Vfunc_aes_square_gf2p2__1809__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1809__d;
    __Vfunc_aes_square_gf2p2__1809__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1810__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1810__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1810__g;
    __Vfunc_aes_mul_gf2p2__1810__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1810__d;
    __Vfunc_aes_mul_gf2p2__1810__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1810__f;
    __Vfunc_aes_mul_gf2p2__1810__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1810__a;
    __Vfunc_aes_mul_gf2p2__1810__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1810__b;
    __Vfunc_aes_mul_gf2p2__1810__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1810__c;
    __Vfunc_aes_mul_gf2p2__1810__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1811__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1811__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1811__g;
    __Vfunc_aes_mul_gf2p2__1811__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1811__d;
    __Vfunc_aes_mul_gf2p2__1811__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1811__f;
    __Vfunc_aes_mul_gf2p2__1811__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1811__a;
    __Vfunc_aes_mul_gf2p2__1811__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1811__b;
    __Vfunc_aes_mul_gf2p2__1811__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1811__c;
    __Vfunc_aes_mul_gf2p2__1811__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1812__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1812__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1812__g;
    __Vfunc_aes_mul_gf2p2__1812__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1812__d;
    __Vfunc_aes_mul_gf2p2__1812__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1812__f;
    __Vfunc_aes_mul_gf2p2__1812__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1812__a;
    __Vfunc_aes_mul_gf2p2__1812__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1812__b;
    __Vfunc_aes_mul_gf2p2__1812__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1812__c;
    __Vfunc_aes_mul_gf2p2__1812__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1813__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1813__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1813__g;
    __Vfunc_aes_mul_gf2p2__1813__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1813__d;
    __Vfunc_aes_mul_gf2p2__1813__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1813__f;
    __Vfunc_aes_mul_gf2p2__1813__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1813__a;
    __Vfunc_aes_mul_gf2p2__1813__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1813__b;
    __Vfunc_aes_mul_gf2p2__1813__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1813__c;
    __Vfunc_aes_mul_gf2p2__1813__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1814__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1814__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1814__g;
    __Vfunc_aes_mul_gf2p2__1814__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1814__d;
    __Vfunc_aes_mul_gf2p2__1814__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1814__f;
    __Vfunc_aes_mul_gf2p2__1814__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1814__a;
    __Vfunc_aes_mul_gf2p2__1814__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1814__b;
    __Vfunc_aes_mul_gf2p2__1814__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1814__c;
    __Vfunc_aes_mul_gf2p2__1814__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1815__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1815__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1815__g;
    __Vfunc_aes_mul_gf2p2__1815__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1815__d;
    __Vfunc_aes_mul_gf2p2__1815__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1815__f;
    __Vfunc_aes_mul_gf2p2__1815__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1815__a;
    __Vfunc_aes_mul_gf2p2__1815__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1815__b;
    __Vfunc_aes_mul_gf2p2__1815__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1815__c;
    __Vfunc_aes_mul_gf2p2__1815__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1816__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1816__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1816__g;
    __Vfunc_aes_mul_gf2p2__1816__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1816__d;
    __Vfunc_aes_mul_gf2p2__1816__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1816__f;
    __Vfunc_aes_mul_gf2p2__1816__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1816__a;
    __Vfunc_aes_mul_gf2p2__1816__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1816__b;
    __Vfunc_aes_mul_gf2p2__1816__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1816__c;
    __Vfunc_aes_mul_gf2p2__1816__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1817__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1817__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1817__g;
    __Vfunc_aes_mul_gf2p2__1817__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1817__d;
    __Vfunc_aes_mul_gf2p2__1817__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1817__f;
    __Vfunc_aes_mul_gf2p2__1817__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1817__a;
    __Vfunc_aes_mul_gf2p2__1817__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1817__b;
    __Vfunc_aes_mul_gf2p2__1817__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1817__c;
    __Vfunc_aes_mul_gf2p2__1817__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1818__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1818__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1818__g;
    __Vfunc_aes_mul_gf2p2__1818__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1818__d;
    __Vfunc_aes_mul_gf2p2__1818__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1818__f;
    __Vfunc_aes_mul_gf2p2__1818__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1818__a;
    __Vfunc_aes_mul_gf2p2__1818__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1818__b;
    __Vfunc_aes_mul_gf2p2__1818__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1818__c;
    __Vfunc_aes_mul_gf2p2__1818__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1819__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1819__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1819__g;
    __Vfunc_aes_mul_gf2p2__1819__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1819__d;
    __Vfunc_aes_mul_gf2p2__1819__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1819__f;
    __Vfunc_aes_mul_gf2p2__1819__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1819__a;
    __Vfunc_aes_mul_gf2p2__1819__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1819__b;
    __Vfunc_aes_mul_gf2p2__1819__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1819__c;
    __Vfunc_aes_mul_gf2p2__1819__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1820__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1820__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1820__g;
    __Vfunc_aes_mul_gf2p2__1820__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1820__d;
    __Vfunc_aes_mul_gf2p2__1820__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1820__f;
    __Vfunc_aes_mul_gf2p2__1820__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1820__a;
    __Vfunc_aes_mul_gf2p2__1820__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1820__b;
    __Vfunc_aes_mul_gf2p2__1820__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1820__c;
    __Vfunc_aes_mul_gf2p2__1820__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1821__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1821__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1821__g;
    __Vfunc_aes_mul_gf2p2__1821__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1821__d;
    __Vfunc_aes_mul_gf2p2__1821__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1821__f;
    __Vfunc_aes_mul_gf2p2__1821__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1821__a;
    __Vfunc_aes_mul_gf2p2__1821__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1821__b;
    __Vfunc_aes_mul_gf2p2__1821__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1821__c;
    __Vfunc_aes_mul_gf2p2__1821__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1822__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1822__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1822__gamma;
    __Vfunc_aes_mul_gf2p4__1822__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1822__delta;
    __Vfunc_aes_mul_gf2p4__1822__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1822__a;
    __Vfunc_aes_mul_gf2p4__1822__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1822__b;
    __Vfunc_aes_mul_gf2p4__1822__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1822__c;
    __Vfunc_aes_mul_gf2p4__1822__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1823__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1823__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1823__g;
    __Vfunc_aes_mul_gf2p2__1823__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1823__d;
    __Vfunc_aes_mul_gf2p2__1823__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1823__f;
    __Vfunc_aes_mul_gf2p2__1823__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1823__a;
    __Vfunc_aes_mul_gf2p2__1823__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1823__b;
    __Vfunc_aes_mul_gf2p2__1823__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1823__c;
    __Vfunc_aes_mul_gf2p2__1823__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1824__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1824__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1824__g;
    __Vfunc_aes_mul_gf2p2__1824__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1824__d;
    __Vfunc_aes_mul_gf2p2__1824__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1824__f;
    __Vfunc_aes_mul_gf2p2__1824__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1824__a;
    __Vfunc_aes_mul_gf2p2__1824__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1824__b;
    __Vfunc_aes_mul_gf2p2__1824__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1824__c;
    __Vfunc_aes_mul_gf2p2__1824__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1825__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1825__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1825__g;
    __Vfunc_aes_mul_gf2p2__1825__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1825__d;
    __Vfunc_aes_mul_gf2p2__1825__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1825__f;
    __Vfunc_aes_mul_gf2p2__1825__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1825__a;
    __Vfunc_aes_mul_gf2p2__1825__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1825__b;
    __Vfunc_aes_mul_gf2p2__1825__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1825__c;
    __Vfunc_aes_mul_gf2p2__1825__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1828__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1828__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1828__gamma;
    __Vfunc_aes_mul_gf2p4__1828__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1828__delta;
    __Vfunc_aes_mul_gf2p4__1828__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1828__a;
    __Vfunc_aes_mul_gf2p4__1828__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1828__b;
    __Vfunc_aes_mul_gf2p4__1828__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1828__c;
    __Vfunc_aes_mul_gf2p4__1828__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1829__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1829__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1829__g;
    __Vfunc_aes_mul_gf2p2__1829__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1829__d;
    __Vfunc_aes_mul_gf2p2__1829__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1829__f;
    __Vfunc_aes_mul_gf2p2__1829__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1829__a;
    __Vfunc_aes_mul_gf2p2__1829__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1829__b;
    __Vfunc_aes_mul_gf2p2__1829__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1829__c;
    __Vfunc_aes_mul_gf2p2__1829__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1830__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1830__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1830__g;
    __Vfunc_aes_mul_gf2p2__1830__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1830__d;
    __Vfunc_aes_mul_gf2p2__1830__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1830__f;
    __Vfunc_aes_mul_gf2p2__1830__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1830__a;
    __Vfunc_aes_mul_gf2p2__1830__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1830__b;
    __Vfunc_aes_mul_gf2p2__1830__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1830__c;
    __Vfunc_aes_mul_gf2p2__1830__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1831__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1831__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1831__g;
    __Vfunc_aes_mul_gf2p2__1831__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1831__d;
    __Vfunc_aes_mul_gf2p2__1831__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1831__f;
    __Vfunc_aes_mul_gf2p2__1831__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1831__a;
    __Vfunc_aes_mul_gf2p2__1831__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1831__b;
    __Vfunc_aes_mul_gf2p2__1831__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1831__c;
    __Vfunc_aes_mul_gf2p2__1831__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1834__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1834__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1834__gamma;
    __Vfunc_aes_mul_gf2p4__1834__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1834__delta;
    __Vfunc_aes_mul_gf2p4__1834__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1834__a;
    __Vfunc_aes_mul_gf2p4__1834__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1834__b;
    __Vfunc_aes_mul_gf2p4__1834__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1834__c;
    __Vfunc_aes_mul_gf2p4__1834__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1835__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1835__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1835__g;
    __Vfunc_aes_mul_gf2p2__1835__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1835__d;
    __Vfunc_aes_mul_gf2p2__1835__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1835__f;
    __Vfunc_aes_mul_gf2p2__1835__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1835__a;
    __Vfunc_aes_mul_gf2p2__1835__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1835__b;
    __Vfunc_aes_mul_gf2p2__1835__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1835__c;
    __Vfunc_aes_mul_gf2p2__1835__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1836__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1836__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1836__g;
    __Vfunc_aes_mul_gf2p2__1836__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1836__d;
    __Vfunc_aes_mul_gf2p2__1836__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1836__f;
    __Vfunc_aes_mul_gf2p2__1836__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1836__a;
    __Vfunc_aes_mul_gf2p2__1836__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1836__b;
    __Vfunc_aes_mul_gf2p2__1836__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1836__c;
    __Vfunc_aes_mul_gf2p2__1836__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1837__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1837__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1837__g;
    __Vfunc_aes_mul_gf2p2__1837__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1837__d;
    __Vfunc_aes_mul_gf2p2__1837__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1837__f;
    __Vfunc_aes_mul_gf2p2__1837__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1837__a;
    __Vfunc_aes_mul_gf2p2__1837__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1837__b;
    __Vfunc_aes_mul_gf2p2__1837__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1837__c;
    __Vfunc_aes_mul_gf2p2__1837__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1840__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1840__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1840__gamma;
    __Vfunc_aes_mul_gf2p4__1840__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1840__delta;
    __Vfunc_aes_mul_gf2p4__1840__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1840__a;
    __Vfunc_aes_mul_gf2p4__1840__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1840__b;
    __Vfunc_aes_mul_gf2p4__1840__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1840__c;
    __Vfunc_aes_mul_gf2p4__1840__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1841__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1841__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1841__g;
    __Vfunc_aes_mul_gf2p2__1841__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1841__d;
    __Vfunc_aes_mul_gf2p2__1841__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1841__f;
    __Vfunc_aes_mul_gf2p2__1841__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1841__a;
    __Vfunc_aes_mul_gf2p2__1841__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1841__b;
    __Vfunc_aes_mul_gf2p2__1841__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1841__c;
    __Vfunc_aes_mul_gf2p2__1841__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1842__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1842__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1842__g;
    __Vfunc_aes_mul_gf2p2__1842__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1842__d;
    __Vfunc_aes_mul_gf2p2__1842__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1842__f;
    __Vfunc_aes_mul_gf2p2__1842__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1842__a;
    __Vfunc_aes_mul_gf2p2__1842__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1842__b;
    __Vfunc_aes_mul_gf2p2__1842__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1842__c;
    __Vfunc_aes_mul_gf2p2__1842__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1843__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1843__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1843__g;
    __Vfunc_aes_mul_gf2p2__1843__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1843__d;
    __Vfunc_aes_mul_gf2p2__1843__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1843__f;
    __Vfunc_aes_mul_gf2p2__1843__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1843__a;
    __Vfunc_aes_mul_gf2p2__1843__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1843__b;
    __Vfunc_aes_mul_gf2p2__1843__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1843__c;
    __Vfunc_aes_mul_gf2p2__1843__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1846__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1846__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1846__gamma;
    __Vfunc_aes_mul_gf2p4__1846__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1846__delta;
    __Vfunc_aes_mul_gf2p4__1846__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1846__a;
    __Vfunc_aes_mul_gf2p4__1846__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1846__b;
    __Vfunc_aes_mul_gf2p4__1846__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1846__c;
    __Vfunc_aes_mul_gf2p4__1846__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1847__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1847__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1847__g;
    __Vfunc_aes_mul_gf2p2__1847__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1847__d;
    __Vfunc_aes_mul_gf2p2__1847__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1847__f;
    __Vfunc_aes_mul_gf2p2__1847__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1847__a;
    __Vfunc_aes_mul_gf2p2__1847__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1847__b;
    __Vfunc_aes_mul_gf2p2__1847__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1847__c;
    __Vfunc_aes_mul_gf2p2__1847__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1848__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1848__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1848__g;
    __Vfunc_aes_mul_gf2p2__1848__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1848__d;
    __Vfunc_aes_mul_gf2p2__1848__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1848__f;
    __Vfunc_aes_mul_gf2p2__1848__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1848__a;
    __Vfunc_aes_mul_gf2p2__1848__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1848__b;
    __Vfunc_aes_mul_gf2p2__1848__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1848__c;
    __Vfunc_aes_mul_gf2p2__1848__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1849__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1849__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1849__g;
    __Vfunc_aes_mul_gf2p2__1849__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1849__d;
    __Vfunc_aes_mul_gf2p2__1849__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1849__f;
    __Vfunc_aes_mul_gf2p2__1849__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1849__a;
    __Vfunc_aes_mul_gf2p2__1849__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1849__b;
    __Vfunc_aes_mul_gf2p2__1849__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1849__c;
    __Vfunc_aes_mul_gf2p2__1849__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1852__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1852__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1852__gamma;
    __Vfunc_aes_mul_gf2p4__1852__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1852__delta;
    __Vfunc_aes_mul_gf2p4__1852__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1852__a;
    __Vfunc_aes_mul_gf2p4__1852__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1852__b;
    __Vfunc_aes_mul_gf2p4__1852__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1852__c;
    __Vfunc_aes_mul_gf2p4__1852__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1853__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1853__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1853__g;
    __Vfunc_aes_mul_gf2p2__1853__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1853__d;
    __Vfunc_aes_mul_gf2p2__1853__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1853__f;
    __Vfunc_aes_mul_gf2p2__1853__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1853__a;
    __Vfunc_aes_mul_gf2p2__1853__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1853__b;
    __Vfunc_aes_mul_gf2p2__1853__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1853__c;
    __Vfunc_aes_mul_gf2p2__1853__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1854__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1854__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1854__g;
    __Vfunc_aes_mul_gf2p2__1854__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1854__d;
    __Vfunc_aes_mul_gf2p2__1854__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1854__f;
    __Vfunc_aes_mul_gf2p2__1854__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1854__a;
    __Vfunc_aes_mul_gf2p2__1854__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1854__b;
    __Vfunc_aes_mul_gf2p2__1854__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1854__c;
    __Vfunc_aes_mul_gf2p2__1854__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1855__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1855__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1855__g;
    __Vfunc_aes_mul_gf2p2__1855__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1855__d;
    __Vfunc_aes_mul_gf2p2__1855__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1855__f;
    __Vfunc_aes_mul_gf2p2__1855__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1855__a;
    __Vfunc_aes_mul_gf2p2__1855__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1855__b;
    __Vfunc_aes_mul_gf2p2__1855__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1855__c;
    __Vfunc_aes_mul_gf2p2__1855__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1858__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1858__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1858__gamma;
    __Vfunc_aes_mul_gf2p4__1858__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1858__delta;
    __Vfunc_aes_mul_gf2p4__1858__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1858__a;
    __Vfunc_aes_mul_gf2p4__1858__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1858__b;
    __Vfunc_aes_mul_gf2p4__1858__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1858__c;
    __Vfunc_aes_mul_gf2p4__1858__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1859__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1859__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1859__g;
    __Vfunc_aes_mul_gf2p2__1859__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1859__d;
    __Vfunc_aes_mul_gf2p2__1859__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1859__f;
    __Vfunc_aes_mul_gf2p2__1859__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1859__a;
    __Vfunc_aes_mul_gf2p2__1859__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1859__b;
    __Vfunc_aes_mul_gf2p2__1859__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1859__c;
    __Vfunc_aes_mul_gf2p2__1859__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1860__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1860__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1860__g;
    __Vfunc_aes_mul_gf2p2__1860__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1860__d;
    __Vfunc_aes_mul_gf2p2__1860__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1860__f;
    __Vfunc_aes_mul_gf2p2__1860__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1860__a;
    __Vfunc_aes_mul_gf2p2__1860__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1860__b;
    __Vfunc_aes_mul_gf2p2__1860__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1860__c;
    __Vfunc_aes_mul_gf2p2__1860__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1861__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1861__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1861__g;
    __Vfunc_aes_mul_gf2p2__1861__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1861__d;
    __Vfunc_aes_mul_gf2p2__1861__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1861__f;
    __Vfunc_aes_mul_gf2p2__1861__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1861__a;
    __Vfunc_aes_mul_gf2p2__1861__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1861__b;
    __Vfunc_aes_mul_gf2p2__1861__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1861__c;
    __Vfunc_aes_mul_gf2p2__1861__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1864__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1864__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1864__gamma;
    __Vfunc_aes_mul_gf2p4__1864__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1864__delta;
    __Vfunc_aes_mul_gf2p4__1864__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1864__a;
    __Vfunc_aes_mul_gf2p4__1864__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1864__b;
    __Vfunc_aes_mul_gf2p4__1864__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1864__c;
    __Vfunc_aes_mul_gf2p4__1864__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1865__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1865__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1865__g;
    __Vfunc_aes_mul_gf2p2__1865__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1865__d;
    __Vfunc_aes_mul_gf2p2__1865__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1865__f;
    __Vfunc_aes_mul_gf2p2__1865__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1865__a;
    __Vfunc_aes_mul_gf2p2__1865__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1865__b;
    __Vfunc_aes_mul_gf2p2__1865__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1865__c;
    __Vfunc_aes_mul_gf2p2__1865__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1866__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1866__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1866__g;
    __Vfunc_aes_mul_gf2p2__1866__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1866__d;
    __Vfunc_aes_mul_gf2p2__1866__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1866__f;
    __Vfunc_aes_mul_gf2p2__1866__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1866__a;
    __Vfunc_aes_mul_gf2p2__1866__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1866__b;
    __Vfunc_aes_mul_gf2p2__1866__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1866__c;
    __Vfunc_aes_mul_gf2p2__1866__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1867__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1867__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1867__g;
    __Vfunc_aes_mul_gf2p2__1867__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1867__d;
    __Vfunc_aes_mul_gf2p2__1867__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1867__f;
    __Vfunc_aes_mul_gf2p2__1867__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1867__a;
    __Vfunc_aes_mul_gf2p2__1867__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1867__b;
    __Vfunc_aes_mul_gf2p2__1867__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1867__c;
    __Vfunc_aes_mul_gf2p2__1867__c = 0;
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
    __Vfunc_aes_mul_gf2p2__1814__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__27__03a0__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1814__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1814__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1814__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1814__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1814__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1814__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1814__d)));
    __Vfunc_aes_mul_gf2p2__1814__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1814__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1814__d)));
    __Vfunc_aes_mul_gf2p2__1814__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1814__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1814__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1814__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1814__b)));
    __Vfunc_aes_mul_gf2p2__1814__Vfuncout = __Vfunc_aes_mul_gf2p2__1814__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1814__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1815__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__27__03a0__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1815__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1815__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1815__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1815__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1815__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1815__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1815__d)));
    __Vfunc_aes_mul_gf2p2__1815__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1815__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1815__d)));
    __Vfunc_aes_mul_gf2p2__1815__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1815__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1815__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1815__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1815__b)));
    __Vfunc_aes_mul_gf2p2__1815__Vfuncout = __Vfunc_aes_mul_gf2p2__1815__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1815__Vfuncout;
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
    __Vfunc_aes_mul_gf2p2__1812__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1812__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1812__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1812__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1812__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1812__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1812__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1812__d)));
    __Vfunc_aes_mul_gf2p2__1812__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1812__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1812__d)));
    __Vfunc_aes_mul_gf2p2__1812__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1812__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1812__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1812__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1812__b)));
    __Vfunc_aes_mul_gf2p2__1812__Vfuncout = __Vfunc_aes_mul_gf2p2__1812__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1812__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1813__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1813__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1813__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1813__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1813__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1813__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1813__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1813__d)));
    __Vfunc_aes_mul_gf2p2__1813__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1813__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1813__d)));
    __Vfunc_aes_mul_gf2p2__1813__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1813__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1813__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1813__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1813__b)));
    __Vfunc_aes_mul_gf2p2__1813__Vfuncout = __Vfunc_aes_mul_gf2p2__1813__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1813__Vfuncout;
    vlSelfRef.mask_o = ([&]() {
            vlSelfRef.__Vfunc_aes_mvm__1769__mat_a[0U] = 0x58U;
            vlSelfRef.__Vfunc_aes_mvm__1769__mat_a[1U] = 0x2dU;
            vlSelfRef.__Vfunc_aes_mvm__1769__mat_a[2U] = 0x9eU;
            vlSelfRef.__Vfunc_aes_mvm__1769__mat_a[3U] = 0x0bU;
            vlSelfRef.__Vfunc_aes_mvm__1769__mat_a[4U] = 0xdcU;
            vlSelfRef.__Vfunc_aes_mvm__1769__mat_a[5U] = 4U;
            vlSelfRef.__Vfunc_aes_mvm__1769__mat_a[6U] = 3U;
            vlSelfRef.__Vfunc_aes_mvm__1769__mat_a[7U] = 0x24U;
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_b 
                = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c = 0U;
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                               >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                              [0U])));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                       >> 6U)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                       >> 5U)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                       >> 4U)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                       >> 3U)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                       >> 2U)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                       >> 1U)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                               [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                 << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0x1ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0x3ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0x7ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                        [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0x3fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0x7fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                        [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0x7fffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                        [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                        [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1769__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1769__vec_b) 
                                                   << 7U))))));
            vlSelfRef.__Vfunc_aes_mvm__1769__Vfuncout 
                = vlSelfRef.__Vfunc_aes_mvm__1769__vec_c;
        }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1769__Vfuncout));
    __Vfunc_aes_mul_gf2p4__1792__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__1792__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1792__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13412095324508945955ull);
    __Vfunc_aes_mul_gf2p2__1793__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1792__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1793__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1792__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1793__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1793__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1793__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1793__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1793__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1793__d)));
    __Vfunc_aes_mul_gf2p2__1793__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1793__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1793__d)));
    __Vfunc_aes_mul_gf2p2__1793__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1793__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1793__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1793__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1793__b)));
    __Vfunc_aes_mul_gf2p2__1793__Vfuncout = __Vfunc_aes_mul_gf2p2__1793__f;
    __Vfunc_aes_mul_gf2p4__1792__a = __Vfunc_aes_mul_gf2p2__1793__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1794__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1792__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1792__delta)));
    __Vfunc_aes_mul_gf2p2__1794__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1792__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1792__gamma)));
    __Vfunc_aes_mul_gf2p2__1794__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1794__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1794__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1794__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1794__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1794__d)));
    __Vfunc_aes_mul_gf2p2__1794__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1794__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1794__d)));
    __Vfunc_aes_mul_gf2p2__1794__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1794__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1794__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1794__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1794__b)));
    __Vfunc_aes_mul_gf2p2__1794__Vfuncout = __Vfunc_aes_mul_gf2p2__1794__f;
    __Vfunc_aes_mul_gf2p4__1792__b = __Vfunc_aes_mul_gf2p2__1794__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1795__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1792__delta));
    __Vfunc_aes_mul_gf2p2__1795__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1792__gamma));
    __Vfunc_aes_mul_gf2p2__1795__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1795__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1795__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1795__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1795__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1795__d)));
    __Vfunc_aes_mul_gf2p2__1795__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1795__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1795__d)));
    __Vfunc_aes_mul_gf2p2__1795__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1795__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1795__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1795__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1795__b)));
    __Vfunc_aes_mul_gf2p2__1795__Vfuncout = __Vfunc_aes_mul_gf2p2__1795__f;
    __Vfunc_aes_mul_gf2p4__1792__c = __Vfunc_aes_mul_gf2p2__1795__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1792__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1792__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1796__g 
                        = __Vfunc_aes_mul_gf2p4__1792__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1796__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1796__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1796__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1796__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1796__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1796__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1792__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1792__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1797__g 
                        = __Vfunc_aes_mul_gf2p4__1792__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1797__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1797__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1797__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1797__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1797__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1797__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1792__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1792__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1792__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1798__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__1798__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1798__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3915667581855461085ull);
    __Vfunc_aes_mul_gf2p2__1799__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1798__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1799__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1798__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1799__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1799__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1799__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1799__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1799__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1799__d)));
    __Vfunc_aes_mul_gf2p2__1799__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1799__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1799__d)));
    __Vfunc_aes_mul_gf2p2__1799__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1799__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1799__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1799__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1799__b)));
    __Vfunc_aes_mul_gf2p2__1799__Vfuncout = __Vfunc_aes_mul_gf2p2__1799__f;
    __Vfunc_aes_mul_gf2p4__1798__a = __Vfunc_aes_mul_gf2p2__1799__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1800__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1798__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1798__delta)));
    __Vfunc_aes_mul_gf2p2__1800__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1798__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1798__gamma)));
    __Vfunc_aes_mul_gf2p2__1800__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1800__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1800__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1800__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1800__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1800__d)));
    __Vfunc_aes_mul_gf2p2__1800__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1800__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1800__d)));
    __Vfunc_aes_mul_gf2p2__1800__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1800__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1800__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1800__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1800__b)));
    __Vfunc_aes_mul_gf2p2__1800__Vfuncout = __Vfunc_aes_mul_gf2p2__1800__f;
    __Vfunc_aes_mul_gf2p4__1798__b = __Vfunc_aes_mul_gf2p2__1800__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1801__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1798__delta));
    __Vfunc_aes_mul_gf2p2__1801__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1798__gamma));
    __Vfunc_aes_mul_gf2p2__1801__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1801__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1801__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1801__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1801__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1801__d)));
    __Vfunc_aes_mul_gf2p2__1801__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1801__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1801__d)));
    __Vfunc_aes_mul_gf2p2__1801__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1801__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1801__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1801__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1801__b)));
    __Vfunc_aes_mul_gf2p2__1801__Vfuncout = __Vfunc_aes_mul_gf2p2__1801__f;
    __Vfunc_aes_mul_gf2p4__1798__c = __Vfunc_aes_mul_gf2p2__1801__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1798__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1798__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1802__g 
                        = __Vfunc_aes_mul_gf2p4__1798__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1802__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1802__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1802__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1802__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1802__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1802__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1798__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1798__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1803__g 
                        = __Vfunc_aes_mul_gf2p4__1798__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1803__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1803__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1803__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1803__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1803__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1803__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1798__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1798__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1798__Vfuncout;
    vlSelfRef.data_o = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                 [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                 [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                 [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                 [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                 [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                 [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                 [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                 [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1766__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1766__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1766__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1766__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1766__Vfuncout)));
    __Vfunc_aes_mul_gf2p2__1816__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1816__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1816__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1816__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1816__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1816__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1816__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1816__d)));
    __Vfunc_aes_mul_gf2p2__1816__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1816__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1816__d)));
    __Vfunc_aes_mul_gf2p2__1816__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1816__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1816__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1816__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1816__b)));
    __Vfunc_aes_mul_gf2p2__1816__Vfuncout = __Vfunc_aes_mul_gf2p2__1816__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1816__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1817__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1817__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1817__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1817__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1817__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1817__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1817__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1817__d)));
    __Vfunc_aes_mul_gf2p2__1817__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1817__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1817__d)));
    __Vfunc_aes_mul_gf2p2__1817__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1817__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1817__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1817__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1817__b)));
    __Vfunc_aes_mul_gf2p2__1817__Vfuncout = __Vfunc_aes_mul_gf2p2__1817__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1817__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1820__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1820__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1820__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1820__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1820__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1820__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1820__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1820__d)));
    __Vfunc_aes_mul_gf2p2__1820__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1820__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1820__d)));
    __Vfunc_aes_mul_gf2p2__1820__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1820__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1820__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1820__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1820__b)));
    __Vfunc_aes_mul_gf2p2__1820__Vfuncout = __Vfunc_aes_mul_gf2p2__1820__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1820__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1821__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1821__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1821__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1821__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1821__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1821__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1821__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1821__d)));
    __Vfunc_aes_mul_gf2p2__1821__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1821__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1821__d)));
    __Vfunc_aes_mul_gf2p2__1821__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1821__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1821__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1821__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1821__b)));
    __Vfunc_aes_mul_gf2p2__1821__Vfuncout = __Vfunc_aes_mul_gf2p2__1821__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1821__Vfuncout;
    __Vfunc_aes_square_gf2p2__1808__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__1808__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1808__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1808__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1808__Vfuncout = __Vfunc_aes_square_gf2p2__1808__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1808__Vfuncout;
    __Vfunc_aes_square_gf2p2__1809__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1809__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1809__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1809__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1809__Vfuncout = __Vfunc_aes_square_gf2p2__1809__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1809__Vfuncout;
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
    __Vfunc_aes_mul_gf2p2__1818__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__27__03a0__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1818__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__1818__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1818__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1818__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1818__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1818__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1818__d)));
    __Vfunc_aes_mul_gf2p2__1818__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1818__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1818__d)));
    __Vfunc_aes_mul_gf2p2__1818__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1818__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1818__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1818__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1818__b)));
    __Vfunc_aes_mul_gf2p2__1818__Vfuncout = __Vfunc_aes_mul_gf2p2__1818__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1818__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1819__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__27__03a0__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1819__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__1819__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1819__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1819__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1819__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1819__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1819__d)));
    __Vfunc_aes_mul_gf2p2__1819__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1819__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1819__d)));
    __Vfunc_aes_mul_gf2p2__1819__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1819__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1819__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1819__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1819__b)));
    __Vfunc_aes_mul_gf2p2__1819__Vfuncout = __Vfunc_aes_mul_gf2p2__1819__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1819__Vfuncout;
    __Vfunc_aes_square_gf2p2__1805__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__1805__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1805__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1805__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1805__Vfuncout = __Vfunc_aes_square_gf2p2__1805__d;
    __Vfunc_aes_scale_omega2_gf2p2__1804__g = __Vfunc_aes_square_gf2p2__1805__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1804__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1804__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1804__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1804__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1804__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1804__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1810__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__27__03a0__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1810__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1810__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1810__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1810__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1810__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1810__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1810__d)));
    __Vfunc_aes_mul_gf2p2__1810__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1810__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1810__d)));
    __Vfunc_aes_mul_gf2p2__1810__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1810__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1810__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1810__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1810__b)));
    __Vfunc_aes_mul_gf2p2__1810__Vfuncout = __Vfunc_aes_mul_gf2p2__1810__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1810__Vfuncout;
    __Vfunc_aes_square_gf2p2__1807__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__1807__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1807__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1807__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1807__Vfuncout = __Vfunc_aes_square_gf2p2__1807__d;
    __Vfunc_aes_scale_omega2_gf2p2__1806__g = __Vfunc_aes_square_gf2p2__1807__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1806__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1806__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1806__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1806__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1806__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1806__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1811__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd__BRA__27__03a0__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1811__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1811__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1811__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1811__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1811__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1811__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1811__d)));
    __Vfunc_aes_mul_gf2p2__1811__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1811__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1811__d)));
    __Vfunc_aes_mul_gf2p2__1811__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1811__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1811__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1811__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1811__b)));
    __Vfunc_aes_mul_gf2p2__1811__Vfuncout = __Vfunc_aes_mul_gf2p2__1811__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1811__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1822__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__1822__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1822__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14489657093383978544ull);
    __Vfunc_aes_mul_gf2p2__1823__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1822__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1823__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1822__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1823__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1823__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1823__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1823__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1823__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1823__d)));
    __Vfunc_aes_mul_gf2p2__1823__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1823__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1823__d)));
    __Vfunc_aes_mul_gf2p2__1823__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1823__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1823__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1823__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1823__b)));
    __Vfunc_aes_mul_gf2p2__1823__Vfuncout = __Vfunc_aes_mul_gf2p2__1823__f;
    __Vfunc_aes_mul_gf2p4__1822__a = __Vfunc_aes_mul_gf2p2__1823__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1824__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1822__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1822__delta)));
    __Vfunc_aes_mul_gf2p2__1824__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1822__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1822__gamma)));
    __Vfunc_aes_mul_gf2p2__1824__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1824__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1824__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1824__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1824__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1824__d)));
    __Vfunc_aes_mul_gf2p2__1824__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1824__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1824__d)));
    __Vfunc_aes_mul_gf2p2__1824__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1824__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1824__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1824__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1824__b)));
    __Vfunc_aes_mul_gf2p2__1824__Vfuncout = __Vfunc_aes_mul_gf2p2__1824__f;
    __Vfunc_aes_mul_gf2p4__1822__b = __Vfunc_aes_mul_gf2p2__1824__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1825__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1822__delta));
    __Vfunc_aes_mul_gf2p2__1825__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1822__gamma));
    __Vfunc_aes_mul_gf2p2__1825__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1825__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1825__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1825__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1825__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1825__d)));
    __Vfunc_aes_mul_gf2p2__1825__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1825__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1825__d)));
    __Vfunc_aes_mul_gf2p2__1825__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1825__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1825__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1825__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1825__b)));
    __Vfunc_aes_mul_gf2p2__1825__Vfuncout = __Vfunc_aes_mul_gf2p2__1825__f;
    __Vfunc_aes_mul_gf2p4__1822__c = __Vfunc_aes_mul_gf2p2__1825__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1822__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1822__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1826__g 
                        = __Vfunc_aes_mul_gf2p4__1822__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1826__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1826__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1826__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1826__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1826__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1826__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1822__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1822__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1827__g 
                        = __Vfunc_aes_mul_gf2p4__1822__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1827__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1827__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1827__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1827__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1827__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1827__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1822__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1822__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1822__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1840__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__1840__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1840__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 110638206923678550ull);
    __Vfunc_aes_mul_gf2p2__1841__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1840__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1841__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1840__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1841__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1841__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1841__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1841__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1841__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1841__d)));
    __Vfunc_aes_mul_gf2p2__1841__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1841__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1841__d)));
    __Vfunc_aes_mul_gf2p2__1841__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1841__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1841__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1841__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1841__b)));
    __Vfunc_aes_mul_gf2p2__1841__Vfuncout = __Vfunc_aes_mul_gf2p2__1841__f;
    __Vfunc_aes_mul_gf2p4__1840__a = __Vfunc_aes_mul_gf2p2__1841__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1842__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1840__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1840__delta)));
    __Vfunc_aes_mul_gf2p2__1842__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1840__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1840__gamma)));
    __Vfunc_aes_mul_gf2p2__1842__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1842__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1842__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1842__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1842__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1842__d)));
    __Vfunc_aes_mul_gf2p2__1842__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1842__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1842__d)));
    __Vfunc_aes_mul_gf2p2__1842__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1842__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1842__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1842__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1842__b)));
    __Vfunc_aes_mul_gf2p2__1842__Vfuncout = __Vfunc_aes_mul_gf2p2__1842__f;
    __Vfunc_aes_mul_gf2p4__1840__b = __Vfunc_aes_mul_gf2p2__1842__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1843__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1840__delta));
    __Vfunc_aes_mul_gf2p2__1843__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1840__gamma));
    __Vfunc_aes_mul_gf2p2__1843__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1843__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1843__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1843__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1843__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1843__d)));
    __Vfunc_aes_mul_gf2p2__1843__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1843__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1843__d)));
    __Vfunc_aes_mul_gf2p2__1843__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1843__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1843__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1843__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1843__b)));
    __Vfunc_aes_mul_gf2p2__1843__Vfuncout = __Vfunc_aes_mul_gf2p2__1843__f;
    __Vfunc_aes_mul_gf2p4__1840__c = __Vfunc_aes_mul_gf2p2__1843__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1840__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1840__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1844__g 
                        = __Vfunc_aes_mul_gf2p4__1840__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1844__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1844__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1844__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1844__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1844__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1844__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1840__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1840__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1845__g 
                        = __Vfunc_aes_mul_gf2p4__1840__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1845__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1845__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1845__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1845__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1845__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1845__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1840__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1840__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1840__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1846__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__1846__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1846__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8626182424603995980ull);
    __Vfunc_aes_mul_gf2p2__1847__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1846__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1847__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1846__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1847__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1847__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1847__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1847__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1847__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1847__d)));
    __Vfunc_aes_mul_gf2p2__1847__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1847__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1847__d)));
    __Vfunc_aes_mul_gf2p2__1847__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1847__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1847__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1847__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1847__b)));
    __Vfunc_aes_mul_gf2p2__1847__Vfuncout = __Vfunc_aes_mul_gf2p2__1847__f;
    __Vfunc_aes_mul_gf2p4__1846__a = __Vfunc_aes_mul_gf2p2__1847__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1848__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1846__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1846__delta)));
    __Vfunc_aes_mul_gf2p2__1848__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1846__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1846__gamma)));
    __Vfunc_aes_mul_gf2p2__1848__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1848__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1848__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1848__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1848__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1848__d)));
    __Vfunc_aes_mul_gf2p2__1848__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1848__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1848__d)));
    __Vfunc_aes_mul_gf2p2__1848__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1848__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1848__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1848__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1848__b)));
    __Vfunc_aes_mul_gf2p2__1848__Vfuncout = __Vfunc_aes_mul_gf2p2__1848__f;
    __Vfunc_aes_mul_gf2p4__1846__b = __Vfunc_aes_mul_gf2p2__1848__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1849__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1846__delta));
    __Vfunc_aes_mul_gf2p2__1849__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1846__gamma));
    __Vfunc_aes_mul_gf2p2__1849__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1849__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1849__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1849__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1849__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1849__d)));
    __Vfunc_aes_mul_gf2p2__1849__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1849__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1849__d)));
    __Vfunc_aes_mul_gf2p2__1849__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1849__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1849__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1849__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1849__b)));
    __Vfunc_aes_mul_gf2p2__1849__Vfuncout = __Vfunc_aes_mul_gf2p2__1849__f;
    __Vfunc_aes_mul_gf2p4__1846__c = __Vfunc_aes_mul_gf2p2__1849__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1846__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1846__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1850__g 
                        = __Vfunc_aes_mul_gf2p4__1846__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1850__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1850__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1850__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1850__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1850__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1850__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1846__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1846__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1851__g 
                        = __Vfunc_aes_mul_gf2p4__1846__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1851__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1851__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1851__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1851__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1851__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1851__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1846__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1846__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1846__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1858__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1858__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1858__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3259403520984966225ull);
    __Vfunc_aes_mul_gf2p2__1859__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1858__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1859__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1858__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1859__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1859__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1859__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1859__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1859__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1859__d)));
    __Vfunc_aes_mul_gf2p2__1859__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1859__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1859__d)));
    __Vfunc_aes_mul_gf2p2__1859__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1859__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1859__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1859__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1859__b)));
    __Vfunc_aes_mul_gf2p2__1859__Vfuncout = __Vfunc_aes_mul_gf2p2__1859__f;
    __Vfunc_aes_mul_gf2p4__1858__a = __Vfunc_aes_mul_gf2p2__1859__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1860__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1858__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1858__delta)));
    __Vfunc_aes_mul_gf2p2__1860__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1858__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1858__gamma)));
    __Vfunc_aes_mul_gf2p2__1860__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1860__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1860__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1860__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1860__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1860__d)));
    __Vfunc_aes_mul_gf2p2__1860__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1860__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1860__d)));
    __Vfunc_aes_mul_gf2p2__1860__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1860__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1860__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1860__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1860__b)));
    __Vfunc_aes_mul_gf2p2__1860__Vfuncout = __Vfunc_aes_mul_gf2p2__1860__f;
    __Vfunc_aes_mul_gf2p4__1858__b = __Vfunc_aes_mul_gf2p2__1860__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1861__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1858__delta));
    __Vfunc_aes_mul_gf2p2__1861__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1858__gamma));
    __Vfunc_aes_mul_gf2p2__1861__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1861__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1861__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1861__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1861__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1861__d)));
    __Vfunc_aes_mul_gf2p2__1861__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1861__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1861__d)));
    __Vfunc_aes_mul_gf2p2__1861__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1861__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1861__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1861__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1861__b)));
    __Vfunc_aes_mul_gf2p2__1861__Vfuncout = __Vfunc_aes_mul_gf2p2__1861__f;
    __Vfunc_aes_mul_gf2p4__1858__c = __Vfunc_aes_mul_gf2p2__1861__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1858__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1858__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1862__g 
                        = __Vfunc_aes_mul_gf2p4__1858__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1862__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1862__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1862__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1862__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1862__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1862__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1858__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1858__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1863__g 
                        = __Vfunc_aes_mul_gf2p4__1858__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1863__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1863__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1863__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1863__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1863__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1863__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1858__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1858__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1858__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1828__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1828__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1828__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15013808336042119552ull);
    __Vfunc_aes_mul_gf2p2__1829__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1828__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1829__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1828__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1829__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1829__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1829__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1829__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1829__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1829__d)));
    __Vfunc_aes_mul_gf2p2__1829__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1829__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1829__d)));
    __Vfunc_aes_mul_gf2p2__1829__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1829__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1829__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1829__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1829__b)));
    __Vfunc_aes_mul_gf2p2__1829__Vfuncout = __Vfunc_aes_mul_gf2p2__1829__f;
    __Vfunc_aes_mul_gf2p4__1828__a = __Vfunc_aes_mul_gf2p2__1829__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1830__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1828__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1828__delta)));
    __Vfunc_aes_mul_gf2p2__1830__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1828__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1828__gamma)));
    __Vfunc_aes_mul_gf2p2__1830__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1830__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1830__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1830__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1830__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1830__d)));
    __Vfunc_aes_mul_gf2p2__1830__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1830__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1830__d)));
    __Vfunc_aes_mul_gf2p2__1830__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1830__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1830__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1830__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1830__b)));
    __Vfunc_aes_mul_gf2p2__1830__Vfuncout = __Vfunc_aes_mul_gf2p2__1830__f;
    __Vfunc_aes_mul_gf2p4__1828__b = __Vfunc_aes_mul_gf2p2__1830__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1831__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1828__delta));
    __Vfunc_aes_mul_gf2p2__1831__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1828__gamma));
    __Vfunc_aes_mul_gf2p2__1831__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1831__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1831__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1831__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1831__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1831__d)));
    __Vfunc_aes_mul_gf2p2__1831__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1831__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1831__d)));
    __Vfunc_aes_mul_gf2p2__1831__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1831__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1831__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1831__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1831__b)));
    __Vfunc_aes_mul_gf2p2__1831__Vfuncout = __Vfunc_aes_mul_gf2p2__1831__f;
    __Vfunc_aes_mul_gf2p4__1828__c = __Vfunc_aes_mul_gf2p2__1831__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1828__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1828__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1832__g 
                        = __Vfunc_aes_mul_gf2p4__1828__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1832__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1832__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1832__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1832__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1832__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1832__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1828__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1828__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1833__g 
                        = __Vfunc_aes_mul_gf2p4__1828__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1833__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1833__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1833__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1833__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1833__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1833__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1828__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1828__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1828__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1834__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1834__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1834__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10006748753396277911ull);
    __Vfunc_aes_mul_gf2p2__1835__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1834__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1835__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1834__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1835__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1835__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1835__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1835__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1835__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1835__d)));
    __Vfunc_aes_mul_gf2p2__1835__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1835__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1835__d)));
    __Vfunc_aes_mul_gf2p2__1835__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1835__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1835__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1835__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1835__b)));
    __Vfunc_aes_mul_gf2p2__1835__Vfuncout = __Vfunc_aes_mul_gf2p2__1835__f;
    __Vfunc_aes_mul_gf2p4__1834__a = __Vfunc_aes_mul_gf2p2__1835__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1836__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1834__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1834__delta)));
    __Vfunc_aes_mul_gf2p2__1836__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1834__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1834__gamma)));
    __Vfunc_aes_mul_gf2p2__1836__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1836__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1836__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1836__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1836__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1836__d)));
    __Vfunc_aes_mul_gf2p2__1836__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1836__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1836__d)));
    __Vfunc_aes_mul_gf2p2__1836__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1836__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1836__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1836__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1836__b)));
    __Vfunc_aes_mul_gf2p2__1836__Vfuncout = __Vfunc_aes_mul_gf2p2__1836__f;
    __Vfunc_aes_mul_gf2p4__1834__b = __Vfunc_aes_mul_gf2p2__1836__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1837__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1834__delta));
    __Vfunc_aes_mul_gf2p2__1837__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1834__gamma));
    __Vfunc_aes_mul_gf2p2__1837__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1837__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1837__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1837__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1837__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1837__d)));
    __Vfunc_aes_mul_gf2p2__1837__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1837__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1837__d)));
    __Vfunc_aes_mul_gf2p2__1837__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1837__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1837__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1837__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1837__b)));
    __Vfunc_aes_mul_gf2p2__1837__Vfuncout = __Vfunc_aes_mul_gf2p2__1837__f;
    __Vfunc_aes_mul_gf2p4__1834__c = __Vfunc_aes_mul_gf2p2__1837__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1834__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1834__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1838__g 
                        = __Vfunc_aes_mul_gf2p4__1834__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1838__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1838__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1838__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1838__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1838__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1838__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1834__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1834__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1839__g 
                        = __Vfunc_aes_mul_gf2p4__1834__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1839__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1839__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1839__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1839__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1839__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1839__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1834__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1834__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1834__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1852__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1852__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1852__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 482690032745439665ull);
    __Vfunc_aes_mul_gf2p2__1853__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1852__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1853__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1852__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1853__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1853__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1853__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1853__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1853__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1853__d)));
    __Vfunc_aes_mul_gf2p2__1853__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1853__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1853__d)));
    __Vfunc_aes_mul_gf2p2__1853__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1853__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1853__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1853__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1853__b)));
    __Vfunc_aes_mul_gf2p2__1853__Vfuncout = __Vfunc_aes_mul_gf2p2__1853__f;
    __Vfunc_aes_mul_gf2p4__1852__a = __Vfunc_aes_mul_gf2p2__1853__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1854__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1852__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1852__delta)));
    __Vfunc_aes_mul_gf2p2__1854__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1852__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1852__gamma)));
    __Vfunc_aes_mul_gf2p2__1854__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1854__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1854__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1854__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1854__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1854__d)));
    __Vfunc_aes_mul_gf2p2__1854__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1854__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1854__d)));
    __Vfunc_aes_mul_gf2p2__1854__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1854__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1854__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1854__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1854__b)));
    __Vfunc_aes_mul_gf2p2__1854__Vfuncout = __Vfunc_aes_mul_gf2p2__1854__f;
    __Vfunc_aes_mul_gf2p4__1852__b = __Vfunc_aes_mul_gf2p2__1854__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1855__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1852__delta));
    __Vfunc_aes_mul_gf2p2__1855__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1852__gamma));
    __Vfunc_aes_mul_gf2p2__1855__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1855__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1855__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1855__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1855__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1855__d)));
    __Vfunc_aes_mul_gf2p2__1855__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1855__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1855__d)));
    __Vfunc_aes_mul_gf2p2__1855__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1855__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1855__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1855__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1855__b)));
    __Vfunc_aes_mul_gf2p2__1855__Vfuncout = __Vfunc_aes_mul_gf2p2__1855__f;
    __Vfunc_aes_mul_gf2p4__1852__c = __Vfunc_aes_mul_gf2p2__1855__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1852__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1852__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1856__g 
                        = __Vfunc_aes_mul_gf2p4__1852__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1856__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1856__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1856__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1856__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1856__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1856__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1852__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1852__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1857__g 
                        = __Vfunc_aes_mul_gf2p4__1852__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1857__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1857__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1857__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1857__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1857__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1857__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1852__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1852__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1852__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1864__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1864__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1864__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3429005869140251761ull);
    __Vfunc_aes_mul_gf2p2__1865__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1864__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1865__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1864__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1865__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1865__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1865__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1865__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1865__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1865__d)));
    __Vfunc_aes_mul_gf2p2__1865__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1865__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1865__d)));
    __Vfunc_aes_mul_gf2p2__1865__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1865__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1865__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1865__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1865__b)));
    __Vfunc_aes_mul_gf2p2__1865__Vfuncout = __Vfunc_aes_mul_gf2p2__1865__f;
    __Vfunc_aes_mul_gf2p4__1864__a = __Vfunc_aes_mul_gf2p2__1865__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1866__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1864__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1864__delta)));
    __Vfunc_aes_mul_gf2p2__1866__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1864__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1864__gamma)));
    __Vfunc_aes_mul_gf2p2__1866__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1866__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1866__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1866__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1866__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1866__d)));
    __Vfunc_aes_mul_gf2p2__1866__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1866__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1866__d)));
    __Vfunc_aes_mul_gf2p2__1866__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1866__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1866__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1866__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1866__b)));
    __Vfunc_aes_mul_gf2p2__1866__Vfuncout = __Vfunc_aes_mul_gf2p2__1866__f;
    __Vfunc_aes_mul_gf2p4__1864__b = __Vfunc_aes_mul_gf2p2__1866__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1867__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1864__delta));
    __Vfunc_aes_mul_gf2p2__1867__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1864__gamma));
    __Vfunc_aes_mul_gf2p2__1867__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1867__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1867__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1867__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1867__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1867__d)));
    __Vfunc_aes_mul_gf2p2__1867__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1867__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1867__d)));
    __Vfunc_aes_mul_gf2p2__1867__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1867__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1867__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1867__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1867__b)));
    __Vfunc_aes_mul_gf2p2__1867__Vfuncout = __Vfunc_aes_mul_gf2p2__1867__f;
    __Vfunc_aes_mul_gf2p4__1864__c = __Vfunc_aes_mul_gf2p2__1867__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1864__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1864__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1868__g 
                        = __Vfunc_aes_mul_gf2p4__1864__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1868__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1868__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1868__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1868__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1868__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1868__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1864__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1864__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1869__g 
                        = __Vfunc_aes_mul_gf2p4__1864__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1869__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1869__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1869__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1869__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1869__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1869__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1864__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1864__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1864__Vfuncout;
}

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelfRef.out_req_o) & (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))
            ? 0U : (7U & ((IData)(vlSelfRef.out_req_o)
                           ? (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q) 
                              + (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))));
}

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1902__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1902__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1902__gamma;
    __Vfunc_aes_mul_gf2p4__1902__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1902__delta;
    __Vfunc_aes_mul_gf2p4__1902__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1902__a;
    __Vfunc_aes_mul_gf2p4__1902__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1902__b;
    __Vfunc_aes_mul_gf2p4__1902__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1902__c;
    __Vfunc_aes_mul_gf2p4__1902__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1903__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1903__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1903__g;
    __Vfunc_aes_mul_gf2p2__1903__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1903__d;
    __Vfunc_aes_mul_gf2p2__1903__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1903__f;
    __Vfunc_aes_mul_gf2p2__1903__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1903__a;
    __Vfunc_aes_mul_gf2p2__1903__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1903__b;
    __Vfunc_aes_mul_gf2p2__1903__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1903__c;
    __Vfunc_aes_mul_gf2p2__1903__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1904__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1904__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1904__g;
    __Vfunc_aes_mul_gf2p2__1904__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1904__d;
    __Vfunc_aes_mul_gf2p2__1904__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1904__f;
    __Vfunc_aes_mul_gf2p2__1904__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1904__a;
    __Vfunc_aes_mul_gf2p2__1904__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1904__b;
    __Vfunc_aes_mul_gf2p2__1904__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1904__c;
    __Vfunc_aes_mul_gf2p2__1904__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1905__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1905__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1905__g;
    __Vfunc_aes_mul_gf2p2__1905__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1905__d;
    __Vfunc_aes_mul_gf2p2__1905__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1905__f;
    __Vfunc_aes_mul_gf2p2__1905__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1905__a;
    __Vfunc_aes_mul_gf2p2__1905__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1905__b;
    __Vfunc_aes_mul_gf2p2__1905__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1905__c;
    __Vfunc_aes_mul_gf2p2__1905__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1908__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1908__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1908__gamma;
    __Vfunc_aes_mul_gf2p4__1908__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1908__delta;
    __Vfunc_aes_mul_gf2p4__1908__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1908__a;
    __Vfunc_aes_mul_gf2p4__1908__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1908__b;
    __Vfunc_aes_mul_gf2p4__1908__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1908__c;
    __Vfunc_aes_mul_gf2p4__1908__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1909__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1909__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1909__g;
    __Vfunc_aes_mul_gf2p2__1909__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1909__d;
    __Vfunc_aes_mul_gf2p2__1909__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1909__f;
    __Vfunc_aes_mul_gf2p2__1909__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1909__a;
    __Vfunc_aes_mul_gf2p2__1909__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1909__b;
    __Vfunc_aes_mul_gf2p2__1909__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1909__c;
    __Vfunc_aes_mul_gf2p2__1909__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1910__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1910__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1910__g;
    __Vfunc_aes_mul_gf2p2__1910__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1910__d;
    __Vfunc_aes_mul_gf2p2__1910__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1910__f;
    __Vfunc_aes_mul_gf2p2__1910__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1910__a;
    __Vfunc_aes_mul_gf2p2__1910__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1910__b;
    __Vfunc_aes_mul_gf2p2__1910__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1910__c;
    __Vfunc_aes_mul_gf2p2__1910__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1911__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1911__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1911__g;
    __Vfunc_aes_mul_gf2p2__1911__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1911__d;
    __Vfunc_aes_mul_gf2p2__1911__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1911__f;
    __Vfunc_aes_mul_gf2p2__1911__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1911__a;
    __Vfunc_aes_mul_gf2p2__1911__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1911__b;
    __Vfunc_aes_mul_gf2p2__1911__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1911__c;
    __Vfunc_aes_mul_gf2p2__1911__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1914__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1914__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1914__g;
    __Vfunc_aes_scale_omega2_gf2p2__1914__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1914__d;
    __Vfunc_aes_scale_omega2_gf2p2__1914__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1915__Vfuncout;
    __Vfunc_aes_square_gf2p2__1915__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1915__g;
    __Vfunc_aes_square_gf2p2__1915__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1915__d;
    __Vfunc_aes_square_gf2p2__1915__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1916__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1916__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1916__g;
    __Vfunc_aes_scale_omega2_gf2p2__1916__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1916__d;
    __Vfunc_aes_scale_omega2_gf2p2__1916__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1917__Vfuncout;
    __Vfunc_aes_square_gf2p2__1917__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1917__g;
    __Vfunc_aes_square_gf2p2__1917__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1917__d;
    __Vfunc_aes_square_gf2p2__1917__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1918__Vfuncout;
    __Vfunc_aes_square_gf2p2__1918__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1918__g;
    __Vfunc_aes_square_gf2p2__1918__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1918__d;
    __Vfunc_aes_square_gf2p2__1918__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1919__Vfuncout;
    __Vfunc_aes_square_gf2p2__1919__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1919__g;
    __Vfunc_aes_square_gf2p2__1919__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1919__d;
    __Vfunc_aes_square_gf2p2__1919__d = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1922__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1922__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1922__g;
    __Vfunc_aes_mul_gf2p2__1922__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1922__d;
    __Vfunc_aes_mul_gf2p2__1922__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1922__f;
    __Vfunc_aes_mul_gf2p2__1922__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1922__a;
    __Vfunc_aes_mul_gf2p2__1922__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1922__b;
    __Vfunc_aes_mul_gf2p2__1922__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1922__c;
    __Vfunc_aes_mul_gf2p2__1922__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1923__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1923__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1923__g;
    __Vfunc_aes_mul_gf2p2__1923__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1923__d;
    __Vfunc_aes_mul_gf2p2__1923__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1923__f;
    __Vfunc_aes_mul_gf2p2__1923__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1923__a;
    __Vfunc_aes_mul_gf2p2__1923__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1923__b;
    __Vfunc_aes_mul_gf2p2__1923__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1923__c;
    __Vfunc_aes_mul_gf2p2__1923__c = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1926__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1926__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1926__g;
    __Vfunc_aes_mul_gf2p2__1926__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1926__d;
    __Vfunc_aes_mul_gf2p2__1926__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1926__f;
    __Vfunc_aes_mul_gf2p2__1926__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1926__a;
    __Vfunc_aes_mul_gf2p2__1926__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1926__b;
    __Vfunc_aes_mul_gf2p2__1926__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1926__c;
    __Vfunc_aes_mul_gf2p2__1926__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1927__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1927__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1927__g;
    __Vfunc_aes_mul_gf2p2__1927__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1927__d;
    __Vfunc_aes_mul_gf2p2__1927__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1927__f;
    __Vfunc_aes_mul_gf2p2__1927__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1927__a;
    __Vfunc_aes_mul_gf2p2__1927__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1927__b;
    __Vfunc_aes_mul_gf2p2__1927__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1927__c;
    __Vfunc_aes_mul_gf2p2__1927__c = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1930__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1930__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1930__g;
    __Vfunc_aes_mul_gf2p2__1930__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1930__d;
    __Vfunc_aes_mul_gf2p2__1930__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1930__f;
    __Vfunc_aes_mul_gf2p2__1930__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1930__a;
    __Vfunc_aes_mul_gf2p2__1930__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1930__b;
    __Vfunc_aes_mul_gf2p2__1930__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1930__c;
    __Vfunc_aes_mul_gf2p2__1930__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1931__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1931__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1931__g;
    __Vfunc_aes_mul_gf2p2__1931__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1931__d;
    __Vfunc_aes_mul_gf2p2__1931__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1931__f;
    __Vfunc_aes_mul_gf2p2__1931__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1931__a;
    __Vfunc_aes_mul_gf2p2__1931__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1931__b;
    __Vfunc_aes_mul_gf2p2__1931__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1931__c;
    __Vfunc_aes_mul_gf2p2__1931__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1932__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1932__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1932__gamma;
    __Vfunc_aes_mul_gf2p4__1932__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1932__delta;
    __Vfunc_aes_mul_gf2p4__1932__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1932__a;
    __Vfunc_aes_mul_gf2p4__1932__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1932__b;
    __Vfunc_aes_mul_gf2p4__1932__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1932__c;
    __Vfunc_aes_mul_gf2p4__1932__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1933__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1933__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1933__g;
    __Vfunc_aes_mul_gf2p2__1933__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1933__d;
    __Vfunc_aes_mul_gf2p2__1933__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1933__f;
    __Vfunc_aes_mul_gf2p2__1933__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1933__a;
    __Vfunc_aes_mul_gf2p2__1933__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1933__b;
    __Vfunc_aes_mul_gf2p2__1933__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1933__c;
    __Vfunc_aes_mul_gf2p2__1933__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1934__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1934__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1934__g;
    __Vfunc_aes_mul_gf2p2__1934__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1934__d;
    __Vfunc_aes_mul_gf2p2__1934__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1934__f;
    __Vfunc_aes_mul_gf2p2__1934__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1934__a;
    __Vfunc_aes_mul_gf2p2__1934__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1934__b;
    __Vfunc_aes_mul_gf2p2__1934__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1934__c;
    __Vfunc_aes_mul_gf2p2__1934__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1935__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1935__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1935__g;
    __Vfunc_aes_mul_gf2p2__1935__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1935__d;
    __Vfunc_aes_mul_gf2p2__1935__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1935__f;
    __Vfunc_aes_mul_gf2p2__1935__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1935__a;
    __Vfunc_aes_mul_gf2p2__1935__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1935__b;
    __Vfunc_aes_mul_gf2p2__1935__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1935__c;
    __Vfunc_aes_mul_gf2p2__1935__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1938__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1938__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1938__gamma;
    __Vfunc_aes_mul_gf2p4__1938__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1938__delta;
    __Vfunc_aes_mul_gf2p4__1938__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1938__a;
    __Vfunc_aes_mul_gf2p4__1938__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1938__b;
    __Vfunc_aes_mul_gf2p4__1938__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1938__c;
    __Vfunc_aes_mul_gf2p4__1938__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1939__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1939__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1939__g;
    __Vfunc_aes_mul_gf2p2__1939__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1939__d;
    __Vfunc_aes_mul_gf2p2__1939__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1939__f;
    __Vfunc_aes_mul_gf2p2__1939__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1939__a;
    __Vfunc_aes_mul_gf2p2__1939__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1939__b;
    __Vfunc_aes_mul_gf2p2__1939__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1939__c;
    __Vfunc_aes_mul_gf2p2__1939__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1940__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1940__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1940__g;
    __Vfunc_aes_mul_gf2p2__1940__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1940__d;
    __Vfunc_aes_mul_gf2p2__1940__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1940__f;
    __Vfunc_aes_mul_gf2p2__1940__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1940__a;
    __Vfunc_aes_mul_gf2p2__1940__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1940__b;
    __Vfunc_aes_mul_gf2p2__1940__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1940__c;
    __Vfunc_aes_mul_gf2p2__1940__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1941__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1941__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1941__g;
    __Vfunc_aes_mul_gf2p2__1941__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1941__d;
    __Vfunc_aes_mul_gf2p2__1941__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1941__f;
    __Vfunc_aes_mul_gf2p2__1941__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1941__a;
    __Vfunc_aes_mul_gf2p2__1941__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1941__b;
    __Vfunc_aes_mul_gf2p2__1941__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1941__c;
    __Vfunc_aes_mul_gf2p2__1941__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1944__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1944__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1944__gamma;
    __Vfunc_aes_mul_gf2p4__1944__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1944__delta;
    __Vfunc_aes_mul_gf2p4__1944__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1944__a;
    __Vfunc_aes_mul_gf2p4__1944__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1944__b;
    __Vfunc_aes_mul_gf2p4__1944__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1944__c;
    __Vfunc_aes_mul_gf2p4__1944__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1945__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1945__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1945__g;
    __Vfunc_aes_mul_gf2p2__1945__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1945__d;
    __Vfunc_aes_mul_gf2p2__1945__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1945__f;
    __Vfunc_aes_mul_gf2p2__1945__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1945__a;
    __Vfunc_aes_mul_gf2p2__1945__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1945__b;
    __Vfunc_aes_mul_gf2p2__1945__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1945__c;
    __Vfunc_aes_mul_gf2p2__1945__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1946__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1946__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1946__g;
    __Vfunc_aes_mul_gf2p2__1946__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1946__d;
    __Vfunc_aes_mul_gf2p2__1946__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1946__f;
    __Vfunc_aes_mul_gf2p2__1946__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1946__a;
    __Vfunc_aes_mul_gf2p2__1946__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1946__b;
    __Vfunc_aes_mul_gf2p2__1946__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1946__c;
    __Vfunc_aes_mul_gf2p2__1946__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1947__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1947__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1947__g;
    __Vfunc_aes_mul_gf2p2__1947__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1947__d;
    __Vfunc_aes_mul_gf2p2__1947__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1947__f;
    __Vfunc_aes_mul_gf2p2__1947__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1947__a;
    __Vfunc_aes_mul_gf2p2__1947__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1947__b;
    __Vfunc_aes_mul_gf2p2__1947__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1947__c;
    __Vfunc_aes_mul_gf2p2__1947__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1950__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1950__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1950__gamma;
    __Vfunc_aes_mul_gf2p4__1950__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1950__delta;
    __Vfunc_aes_mul_gf2p4__1950__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1950__a;
    __Vfunc_aes_mul_gf2p4__1950__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1950__b;
    __Vfunc_aes_mul_gf2p4__1950__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1950__c;
    __Vfunc_aes_mul_gf2p4__1950__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1951__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1951__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1951__g;
    __Vfunc_aes_mul_gf2p2__1951__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1951__d;
    __Vfunc_aes_mul_gf2p2__1951__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1951__f;
    __Vfunc_aes_mul_gf2p2__1951__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1951__a;
    __Vfunc_aes_mul_gf2p2__1951__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1951__b;
    __Vfunc_aes_mul_gf2p2__1951__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1951__c;
    __Vfunc_aes_mul_gf2p2__1951__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1952__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1952__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1952__g;
    __Vfunc_aes_mul_gf2p2__1952__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1952__d;
    __Vfunc_aes_mul_gf2p2__1952__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1952__f;
    __Vfunc_aes_mul_gf2p2__1952__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1952__a;
    __Vfunc_aes_mul_gf2p2__1952__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1952__b;
    __Vfunc_aes_mul_gf2p2__1952__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1952__c;
    __Vfunc_aes_mul_gf2p2__1952__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1953__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1953__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1953__g;
    __Vfunc_aes_mul_gf2p2__1953__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1953__d;
    __Vfunc_aes_mul_gf2p2__1953__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1953__f;
    __Vfunc_aes_mul_gf2p2__1953__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1953__a;
    __Vfunc_aes_mul_gf2p2__1953__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1953__b;
    __Vfunc_aes_mul_gf2p2__1953__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1953__c;
    __Vfunc_aes_mul_gf2p2__1953__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1956__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1956__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1956__gamma;
    __Vfunc_aes_mul_gf2p4__1956__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1956__delta;
    __Vfunc_aes_mul_gf2p4__1956__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1956__a;
    __Vfunc_aes_mul_gf2p4__1956__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1956__b;
    __Vfunc_aes_mul_gf2p4__1956__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1956__c;
    __Vfunc_aes_mul_gf2p4__1956__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1957__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1957__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1957__g;
    __Vfunc_aes_mul_gf2p2__1957__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1957__d;
    __Vfunc_aes_mul_gf2p2__1957__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1957__f;
    __Vfunc_aes_mul_gf2p2__1957__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1957__a;
    __Vfunc_aes_mul_gf2p2__1957__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1957__b;
    __Vfunc_aes_mul_gf2p2__1957__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1957__c;
    __Vfunc_aes_mul_gf2p2__1957__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1958__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1958__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1958__g;
    __Vfunc_aes_mul_gf2p2__1958__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1958__d;
    __Vfunc_aes_mul_gf2p2__1958__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1958__f;
    __Vfunc_aes_mul_gf2p2__1958__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1958__a;
    __Vfunc_aes_mul_gf2p2__1958__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1958__b;
    __Vfunc_aes_mul_gf2p2__1958__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1958__c;
    __Vfunc_aes_mul_gf2p2__1958__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1959__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1959__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1959__g;
    __Vfunc_aes_mul_gf2p2__1959__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1959__d;
    __Vfunc_aes_mul_gf2p2__1959__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1959__f;
    __Vfunc_aes_mul_gf2p2__1959__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1959__a;
    __Vfunc_aes_mul_gf2p2__1959__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1959__b;
    __Vfunc_aes_mul_gf2p2__1959__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1959__c;
    __Vfunc_aes_mul_gf2p2__1959__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1962__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1962__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1962__gamma;
    __Vfunc_aes_mul_gf2p4__1962__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1962__delta;
    __Vfunc_aes_mul_gf2p4__1962__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1962__a;
    __Vfunc_aes_mul_gf2p4__1962__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1962__b;
    __Vfunc_aes_mul_gf2p4__1962__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1962__c;
    __Vfunc_aes_mul_gf2p4__1962__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1963__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1963__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1963__g;
    __Vfunc_aes_mul_gf2p2__1963__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1963__d;
    __Vfunc_aes_mul_gf2p2__1963__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1963__f;
    __Vfunc_aes_mul_gf2p2__1963__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1963__a;
    __Vfunc_aes_mul_gf2p2__1963__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1963__b;
    __Vfunc_aes_mul_gf2p2__1963__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1963__c;
    __Vfunc_aes_mul_gf2p2__1963__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1964__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1964__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1964__g;
    __Vfunc_aes_mul_gf2p2__1964__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1964__d;
    __Vfunc_aes_mul_gf2p2__1964__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1964__f;
    __Vfunc_aes_mul_gf2p2__1964__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1964__a;
    __Vfunc_aes_mul_gf2p2__1964__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1964__b;
    __Vfunc_aes_mul_gf2p2__1964__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1964__c;
    __Vfunc_aes_mul_gf2p2__1964__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1965__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1965__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1965__g;
    __Vfunc_aes_mul_gf2p2__1965__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1965__d;
    __Vfunc_aes_mul_gf2p2__1965__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1965__f;
    __Vfunc_aes_mul_gf2p2__1965__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1965__a;
    __Vfunc_aes_mul_gf2p2__1965__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1965__b;
    __Vfunc_aes_mul_gf2p2__1965__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1965__c;
    __Vfunc_aes_mul_gf2p2__1965__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1968__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1968__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1968__gamma;
    __Vfunc_aes_mul_gf2p4__1968__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1968__delta;
    __Vfunc_aes_mul_gf2p4__1968__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1968__a;
    __Vfunc_aes_mul_gf2p4__1968__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1968__b;
    __Vfunc_aes_mul_gf2p4__1968__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1968__c;
    __Vfunc_aes_mul_gf2p4__1968__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1969__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1969__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1969__g;
    __Vfunc_aes_mul_gf2p2__1969__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1969__d;
    __Vfunc_aes_mul_gf2p2__1969__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1969__f;
    __Vfunc_aes_mul_gf2p2__1969__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1969__a;
    __Vfunc_aes_mul_gf2p2__1969__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1969__b;
    __Vfunc_aes_mul_gf2p2__1969__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1969__c;
    __Vfunc_aes_mul_gf2p2__1969__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1970__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1970__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1970__g;
    __Vfunc_aes_mul_gf2p2__1970__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1970__d;
    __Vfunc_aes_mul_gf2p2__1970__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1970__f;
    __Vfunc_aes_mul_gf2p2__1970__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1970__a;
    __Vfunc_aes_mul_gf2p2__1970__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1970__b;
    __Vfunc_aes_mul_gf2p2__1970__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1970__c;
    __Vfunc_aes_mul_gf2p2__1970__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1971__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1971__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1971__g;
    __Vfunc_aes_mul_gf2p2__1971__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1971__d;
    __Vfunc_aes_mul_gf2p2__1971__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1971__f;
    __Vfunc_aes_mul_gf2p2__1971__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1971__a;
    __Vfunc_aes_mul_gf2p2__1971__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1971__b;
    __Vfunc_aes_mul_gf2p2__1971__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1971__c;
    __Vfunc_aes_mul_gf2p2__1971__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1974__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1974__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1974__gamma;
    __Vfunc_aes_mul_gf2p4__1974__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1974__delta;
    __Vfunc_aes_mul_gf2p4__1974__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1974__a;
    __Vfunc_aes_mul_gf2p4__1974__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1974__b;
    __Vfunc_aes_mul_gf2p4__1974__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1974__c;
    __Vfunc_aes_mul_gf2p4__1974__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1975__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1975__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1975__g;
    __Vfunc_aes_mul_gf2p2__1975__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1975__d;
    __Vfunc_aes_mul_gf2p2__1975__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1975__f;
    __Vfunc_aes_mul_gf2p2__1975__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1975__a;
    __Vfunc_aes_mul_gf2p2__1975__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1975__b;
    __Vfunc_aes_mul_gf2p2__1975__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1975__c;
    __Vfunc_aes_mul_gf2p2__1975__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1976__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1976__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1976__g;
    __Vfunc_aes_mul_gf2p2__1976__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1976__d;
    __Vfunc_aes_mul_gf2p2__1976__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1976__f;
    __Vfunc_aes_mul_gf2p2__1976__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1976__a;
    __Vfunc_aes_mul_gf2p2__1976__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1976__b;
    __Vfunc_aes_mul_gf2p2__1976__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1976__c;
    __Vfunc_aes_mul_gf2p2__1976__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1977__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1977__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1977__g;
    __Vfunc_aes_mul_gf2p2__1977__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1977__d;
    __Vfunc_aes_mul_gf2p2__1977__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1977__f;
    __Vfunc_aes_mul_gf2p2__1977__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1977__a;
    __Vfunc_aes_mul_gf2p2__1977__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1977__b;
    __Vfunc_aes_mul_gf2p2__1977__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1977__c;
    __Vfunc_aes_mul_gf2p2__1977__c = 0;
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
    __Vfunc_aes_mul_gf2p2__1922__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1922__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1922__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1922__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1922__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1922__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1922__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1922__d)));
    __Vfunc_aes_mul_gf2p2__1922__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1922__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1922__d)));
    __Vfunc_aes_mul_gf2p2__1922__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1922__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1922__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1922__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1922__b)));
    __Vfunc_aes_mul_gf2p2__1922__Vfuncout = __Vfunc_aes_mul_gf2p2__1922__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1922__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1923__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1923__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1923__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1923__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1923__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1923__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1923__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1923__d)));
    __Vfunc_aes_mul_gf2p2__1923__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1923__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1923__d)));
    __Vfunc_aes_mul_gf2p2__1923__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1923__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1923__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1923__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1923__b)));
    __Vfunc_aes_mul_gf2p2__1923__Vfuncout = __Vfunc_aes_mul_gf2p2__1923__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1923__Vfuncout;
    vlSelfRef.mask_o = ([&]() {
            vlSelfRef.__Vfunc_aes_mvm__1879__mat_a[0U] = 0x58U;
            vlSelfRef.__Vfunc_aes_mvm__1879__mat_a[1U] = 0x2dU;
            vlSelfRef.__Vfunc_aes_mvm__1879__mat_a[2U] = 0x9eU;
            vlSelfRef.__Vfunc_aes_mvm__1879__mat_a[3U] = 0x0bU;
            vlSelfRef.__Vfunc_aes_mvm__1879__mat_a[4U] = 0xdcU;
            vlSelfRef.__Vfunc_aes_mvm__1879__mat_a[5U] = 4U;
            vlSelfRef.__Vfunc_aes_mvm__1879__mat_a[6U] = 3U;
            vlSelfRef.__Vfunc_aes_mvm__1879__mat_a[7U] = 0x24U;
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_b 
                = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c = 0U;
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                               >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                              [0U])));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                       >> 6U)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                       >> 5U)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                       >> 4U)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                       >> 3U)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                       >> 2U)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                       >> 1U)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                            ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                               [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                            ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                 << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0x1ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   >> 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0x3ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0x7ffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                        [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000010U & ((0xfffffff0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xfffffff0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0x3fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   >> 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0x7fffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                        [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000020U & ((0xffffffe0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffe0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0x7fffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   >> 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                        [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000040U & ((0xffffffc0U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffffc0U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c) 
                                     ^ (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                        [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b)))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 1U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 2U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 3U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 4U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 5U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 6U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__vec_c 
                = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                   | (0x00000080U & ((0xffffff80U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_c)) 
                                     ^ (0xffffff80U 
                                        & (vlSelfRef.__Vfunc_aes_mvm__1879__mat_a
                                           [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1879__vec_b) 
                                                   << 7U))))));
            vlSelfRef.__Vfunc_aes_mvm__1879__Vfuncout 
                = vlSelfRef.__Vfunc_aes_mvm__1879__vec_c;
        }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1879__Vfuncout));
    __Vfunc_aes_mul_gf2p4__1902__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__1902__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1902__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7176363784520474219ull);
    __Vfunc_aes_mul_gf2p2__1903__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1902__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1903__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1902__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1903__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1903__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1903__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1903__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1903__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1903__d)));
    __Vfunc_aes_mul_gf2p2__1903__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1903__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1903__d)));
    __Vfunc_aes_mul_gf2p2__1903__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1903__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1903__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1903__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1903__b)));
    __Vfunc_aes_mul_gf2p2__1903__Vfuncout = __Vfunc_aes_mul_gf2p2__1903__f;
    __Vfunc_aes_mul_gf2p4__1902__a = __Vfunc_aes_mul_gf2p2__1903__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1904__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1902__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1902__delta)));
    __Vfunc_aes_mul_gf2p2__1904__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1902__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1902__gamma)));
    __Vfunc_aes_mul_gf2p2__1904__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1904__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1904__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1904__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1904__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1904__d)));
    __Vfunc_aes_mul_gf2p2__1904__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1904__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1904__d)));
    __Vfunc_aes_mul_gf2p2__1904__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1904__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1904__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1904__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1904__b)));
    __Vfunc_aes_mul_gf2p2__1904__Vfuncout = __Vfunc_aes_mul_gf2p2__1904__f;
    __Vfunc_aes_mul_gf2p4__1902__b = __Vfunc_aes_mul_gf2p2__1904__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1905__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1902__delta));
    __Vfunc_aes_mul_gf2p2__1905__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1902__gamma));
    __Vfunc_aes_mul_gf2p2__1905__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1905__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1905__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1905__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1905__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1905__d)));
    __Vfunc_aes_mul_gf2p2__1905__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1905__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1905__d)));
    __Vfunc_aes_mul_gf2p2__1905__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1905__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1905__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1905__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1905__b)));
    __Vfunc_aes_mul_gf2p2__1905__Vfuncout = __Vfunc_aes_mul_gf2p2__1905__f;
    __Vfunc_aes_mul_gf2p4__1902__c = __Vfunc_aes_mul_gf2p2__1905__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1902__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1902__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1906__g 
                        = __Vfunc_aes_mul_gf2p4__1902__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1906__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1906__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1906__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1906__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1906__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1906__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1902__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1902__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1907__g 
                        = __Vfunc_aes_mul_gf2p4__1902__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1907__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1907__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1907__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1907__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1907__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1907__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1902__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1902__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1902__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1908__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__1908__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1908__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11295272101131440590ull);
    __Vfunc_aes_mul_gf2p2__1909__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1908__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1909__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1908__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1909__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1909__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1909__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1909__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1909__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1909__d)));
    __Vfunc_aes_mul_gf2p2__1909__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1909__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1909__d)));
    __Vfunc_aes_mul_gf2p2__1909__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1909__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1909__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1909__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1909__b)));
    __Vfunc_aes_mul_gf2p2__1909__Vfuncout = __Vfunc_aes_mul_gf2p2__1909__f;
    __Vfunc_aes_mul_gf2p4__1908__a = __Vfunc_aes_mul_gf2p2__1909__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1910__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1908__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1908__delta)));
    __Vfunc_aes_mul_gf2p2__1910__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1908__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1908__gamma)));
    __Vfunc_aes_mul_gf2p2__1910__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1910__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1910__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1910__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1910__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1910__d)));
    __Vfunc_aes_mul_gf2p2__1910__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1910__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1910__d)));
    __Vfunc_aes_mul_gf2p2__1910__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1910__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1910__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1910__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1910__b)));
    __Vfunc_aes_mul_gf2p2__1910__Vfuncout = __Vfunc_aes_mul_gf2p2__1910__f;
    __Vfunc_aes_mul_gf2p4__1908__b = __Vfunc_aes_mul_gf2p2__1910__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1911__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1908__delta));
    __Vfunc_aes_mul_gf2p2__1911__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1908__gamma));
    __Vfunc_aes_mul_gf2p2__1911__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1911__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1911__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1911__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1911__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1911__d)));
    __Vfunc_aes_mul_gf2p2__1911__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1911__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1911__d)));
    __Vfunc_aes_mul_gf2p2__1911__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1911__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1911__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1911__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1911__b)));
    __Vfunc_aes_mul_gf2p2__1911__Vfuncout = __Vfunc_aes_mul_gf2p2__1911__f;
    __Vfunc_aes_mul_gf2p4__1908__c = __Vfunc_aes_mul_gf2p2__1911__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1908__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1908__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1912__g 
                        = __Vfunc_aes_mul_gf2p4__1908__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1912__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1912__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1912__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1912__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1912__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1912__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1908__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1908__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1913__g 
                        = __Vfunc_aes_mul_gf2p4__1908__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1913__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1913__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1913__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1913__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1913__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1913__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1908__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1908__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1908__Vfuncout;
    vlSelfRef.data_o = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                 [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                 [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                 [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                 [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                 [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                 [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                 [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                 [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1876__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1876__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1876__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1876__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1876__Vfuncout)));
    __Vfunc_aes_mul_gf2p2__1926__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1926__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1926__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1926__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1926__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1926__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1926__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1926__d)));
    __Vfunc_aes_mul_gf2p2__1926__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1926__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1926__d)));
    __Vfunc_aes_mul_gf2p2__1926__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1926__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1926__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1926__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1926__b)));
    __Vfunc_aes_mul_gf2p2__1926__Vfuncout = __Vfunc_aes_mul_gf2p2__1926__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1926__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1927__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1927__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1927__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1927__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1927__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1927__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1927__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1927__d)));
    __Vfunc_aes_mul_gf2p2__1927__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1927__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1927__d)));
    __Vfunc_aes_mul_gf2p2__1927__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1927__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1927__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1927__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1927__b)));
    __Vfunc_aes_mul_gf2p2__1927__Vfuncout = __Vfunc_aes_mul_gf2p2__1927__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1927__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1930__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1930__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1930__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1930__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1930__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1930__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1930__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1930__d)));
    __Vfunc_aes_mul_gf2p2__1930__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1930__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1930__d)));
    __Vfunc_aes_mul_gf2p2__1930__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1930__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1930__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1930__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1930__b)));
    __Vfunc_aes_mul_gf2p2__1930__Vfuncout = __Vfunc_aes_mul_gf2p2__1930__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1930__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1931__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1931__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1931__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1931__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1931__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1931__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1931__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1931__d)));
    __Vfunc_aes_mul_gf2p2__1931__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1931__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1931__d)));
    __Vfunc_aes_mul_gf2p2__1931__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1931__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1931__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1931__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1931__b)));
    __Vfunc_aes_mul_gf2p2__1931__Vfuncout = __Vfunc_aes_mul_gf2p2__1931__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1931__Vfuncout;
    __Vfunc_aes_square_gf2p2__1918__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__1918__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1918__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1918__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1918__Vfuncout = __Vfunc_aes_square_gf2p2__1918__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1918__Vfuncout;
    __Vfunc_aes_square_gf2p2__1919__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1919__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1919__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1919__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1919__Vfuncout = __Vfunc_aes_square_gf2p2__1919__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1919__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1915__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__1915__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1915__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1915__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1915__Vfuncout = __Vfunc_aes_square_gf2p2__1915__d;
    __Vfunc_aes_scale_omega2_gf2p2__1914__g = __Vfunc_aes_square_gf2p2__1915__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1914__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1914__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1914__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1914__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1914__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1914__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1917__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__1917__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1917__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1917__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1917__Vfuncout = __Vfunc_aes_square_gf2p2__1917__d;
    __Vfunc_aes_scale_omega2_gf2p2__1916__g = __Vfunc_aes_square_gf2p2__1917__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1916__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1916__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1916__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1916__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1916__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1916__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__1932__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__1932__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1932__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17336387552457436389ull);
    __Vfunc_aes_mul_gf2p2__1933__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1932__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1933__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1932__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1933__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1933__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1933__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1933__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1933__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1933__d)));
    __Vfunc_aes_mul_gf2p2__1933__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1933__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1933__d)));
    __Vfunc_aes_mul_gf2p2__1933__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1933__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1933__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1933__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1933__b)));
    __Vfunc_aes_mul_gf2p2__1933__Vfuncout = __Vfunc_aes_mul_gf2p2__1933__f;
    __Vfunc_aes_mul_gf2p4__1932__a = __Vfunc_aes_mul_gf2p2__1933__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1934__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1932__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1932__delta)));
    __Vfunc_aes_mul_gf2p2__1934__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1932__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1932__gamma)));
    __Vfunc_aes_mul_gf2p2__1934__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1934__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1934__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1934__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1934__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1934__d)));
    __Vfunc_aes_mul_gf2p2__1934__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1934__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1934__d)));
    __Vfunc_aes_mul_gf2p2__1934__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1934__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1934__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1934__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1934__b)));
    __Vfunc_aes_mul_gf2p2__1934__Vfuncout = __Vfunc_aes_mul_gf2p2__1934__f;
    __Vfunc_aes_mul_gf2p4__1932__b = __Vfunc_aes_mul_gf2p2__1934__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1935__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1932__delta));
    __Vfunc_aes_mul_gf2p2__1935__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1932__gamma));
    __Vfunc_aes_mul_gf2p2__1935__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1935__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1935__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1935__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1935__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1935__d)));
    __Vfunc_aes_mul_gf2p2__1935__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1935__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1935__d)));
    __Vfunc_aes_mul_gf2p2__1935__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1935__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1935__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1935__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1935__b)));
    __Vfunc_aes_mul_gf2p2__1935__Vfuncout = __Vfunc_aes_mul_gf2p2__1935__f;
    __Vfunc_aes_mul_gf2p4__1932__c = __Vfunc_aes_mul_gf2p2__1935__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1932__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1932__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1936__g 
                        = __Vfunc_aes_mul_gf2p4__1932__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1936__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1936__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1936__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1936__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1936__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1936__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1932__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1932__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1937__g 
                        = __Vfunc_aes_mul_gf2p4__1932__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1937__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1937__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1937__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1937__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1937__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1937__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1932__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1932__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1932__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1950__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__1950__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1950__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16074240625998901371ull);
    __Vfunc_aes_mul_gf2p2__1951__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1950__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1951__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1950__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1951__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1951__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1951__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1951__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1951__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1951__d)));
    __Vfunc_aes_mul_gf2p2__1951__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1951__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1951__d)));
    __Vfunc_aes_mul_gf2p2__1951__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1951__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1951__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1951__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1951__b)));
    __Vfunc_aes_mul_gf2p2__1951__Vfuncout = __Vfunc_aes_mul_gf2p2__1951__f;
    __Vfunc_aes_mul_gf2p4__1950__a = __Vfunc_aes_mul_gf2p2__1951__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1952__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1950__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1950__delta)));
    __Vfunc_aes_mul_gf2p2__1952__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1950__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1950__gamma)));
    __Vfunc_aes_mul_gf2p2__1952__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1952__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1952__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1952__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1952__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1952__d)));
    __Vfunc_aes_mul_gf2p2__1952__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1952__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1952__d)));
    __Vfunc_aes_mul_gf2p2__1952__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1952__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1952__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1952__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1952__b)));
    __Vfunc_aes_mul_gf2p2__1952__Vfuncout = __Vfunc_aes_mul_gf2p2__1952__f;
    __Vfunc_aes_mul_gf2p4__1950__b = __Vfunc_aes_mul_gf2p2__1952__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1953__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1950__delta));
    __Vfunc_aes_mul_gf2p2__1953__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1950__gamma));
    __Vfunc_aes_mul_gf2p2__1953__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1953__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1953__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1953__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1953__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1953__d)));
    __Vfunc_aes_mul_gf2p2__1953__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1953__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1953__d)));
    __Vfunc_aes_mul_gf2p2__1953__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1953__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1953__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1953__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1953__b)));
    __Vfunc_aes_mul_gf2p2__1953__Vfuncout = __Vfunc_aes_mul_gf2p2__1953__f;
    __Vfunc_aes_mul_gf2p4__1950__c = __Vfunc_aes_mul_gf2p2__1953__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1950__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1950__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1954__g 
                        = __Vfunc_aes_mul_gf2p4__1950__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1954__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1954__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1954__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1954__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1954__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1954__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1950__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1950__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1955__g 
                        = __Vfunc_aes_mul_gf2p4__1950__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1955__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1955__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1955__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1955__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1955__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1955__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1950__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1950__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1950__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1956__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__1956__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1956__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16287076576181675212ull);
    __Vfunc_aes_mul_gf2p2__1957__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1956__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1957__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1956__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1957__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1957__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1957__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1957__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1957__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1957__d)));
    __Vfunc_aes_mul_gf2p2__1957__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1957__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1957__d)));
    __Vfunc_aes_mul_gf2p2__1957__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1957__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1957__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1957__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1957__b)));
    __Vfunc_aes_mul_gf2p2__1957__Vfuncout = __Vfunc_aes_mul_gf2p2__1957__f;
    __Vfunc_aes_mul_gf2p4__1956__a = __Vfunc_aes_mul_gf2p2__1957__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1958__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1956__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1956__delta)));
    __Vfunc_aes_mul_gf2p2__1958__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1956__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1956__gamma)));
    __Vfunc_aes_mul_gf2p2__1958__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1958__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1958__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1958__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1958__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1958__d)));
    __Vfunc_aes_mul_gf2p2__1958__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1958__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1958__d)));
    __Vfunc_aes_mul_gf2p2__1958__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1958__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1958__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1958__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1958__b)));
    __Vfunc_aes_mul_gf2p2__1958__Vfuncout = __Vfunc_aes_mul_gf2p2__1958__f;
    __Vfunc_aes_mul_gf2p4__1956__b = __Vfunc_aes_mul_gf2p2__1958__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1959__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1956__delta));
    __Vfunc_aes_mul_gf2p2__1959__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1956__gamma));
    __Vfunc_aes_mul_gf2p2__1959__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1959__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1959__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1959__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1959__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1959__d)));
    __Vfunc_aes_mul_gf2p2__1959__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1959__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1959__d)));
    __Vfunc_aes_mul_gf2p2__1959__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1959__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1959__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1959__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1959__b)));
    __Vfunc_aes_mul_gf2p2__1959__Vfuncout = __Vfunc_aes_mul_gf2p2__1959__f;
    __Vfunc_aes_mul_gf2p4__1956__c = __Vfunc_aes_mul_gf2p2__1959__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1956__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1956__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1960__g 
                        = __Vfunc_aes_mul_gf2p4__1956__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1960__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1960__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1960__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1960__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1960__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1960__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1956__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1956__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1961__g 
                        = __Vfunc_aes_mul_gf2p4__1956__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1961__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1961__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1961__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1961__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1961__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1961__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1956__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1956__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1956__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1968__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1968__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1968__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5660516081480137979ull);
    __Vfunc_aes_mul_gf2p2__1969__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1968__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1969__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1968__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1969__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1969__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1969__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1969__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1969__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1969__d)));
    __Vfunc_aes_mul_gf2p2__1969__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1969__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1969__d)));
    __Vfunc_aes_mul_gf2p2__1969__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1969__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1969__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1969__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1969__b)));
    __Vfunc_aes_mul_gf2p2__1969__Vfuncout = __Vfunc_aes_mul_gf2p2__1969__f;
    __Vfunc_aes_mul_gf2p4__1968__a = __Vfunc_aes_mul_gf2p2__1969__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1970__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1968__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1968__delta)));
    __Vfunc_aes_mul_gf2p2__1970__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1968__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1968__gamma)));
    __Vfunc_aes_mul_gf2p2__1970__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1970__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1970__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1970__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1970__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1970__d)));
    __Vfunc_aes_mul_gf2p2__1970__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1970__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1970__d)));
    __Vfunc_aes_mul_gf2p2__1970__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1970__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1970__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1970__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1970__b)));
    __Vfunc_aes_mul_gf2p2__1970__Vfuncout = __Vfunc_aes_mul_gf2p2__1970__f;
    __Vfunc_aes_mul_gf2p4__1968__b = __Vfunc_aes_mul_gf2p2__1970__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1971__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1968__delta));
    __Vfunc_aes_mul_gf2p2__1971__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1968__gamma));
    __Vfunc_aes_mul_gf2p2__1971__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1971__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1971__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1971__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1971__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1971__d)));
    __Vfunc_aes_mul_gf2p2__1971__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1971__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1971__d)));
    __Vfunc_aes_mul_gf2p2__1971__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1971__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1971__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1971__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1971__b)));
    __Vfunc_aes_mul_gf2p2__1971__Vfuncout = __Vfunc_aes_mul_gf2p2__1971__f;
    __Vfunc_aes_mul_gf2p4__1968__c = __Vfunc_aes_mul_gf2p2__1971__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1968__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1968__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1972__g 
                        = __Vfunc_aes_mul_gf2p4__1968__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1972__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1972__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1972__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1972__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1972__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1972__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1968__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1968__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1973__g 
                        = __Vfunc_aes_mul_gf2p4__1968__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1973__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1973__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1973__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1973__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1973__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1973__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1968__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1968__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1968__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1938__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1938__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1938__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16253171567815336011ull);
    __Vfunc_aes_mul_gf2p2__1939__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1938__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1939__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1938__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1939__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1939__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1939__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1939__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1939__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1939__d)));
    __Vfunc_aes_mul_gf2p2__1939__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1939__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1939__d)));
    __Vfunc_aes_mul_gf2p2__1939__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1939__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1939__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1939__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1939__b)));
    __Vfunc_aes_mul_gf2p2__1939__Vfuncout = __Vfunc_aes_mul_gf2p2__1939__f;
    __Vfunc_aes_mul_gf2p4__1938__a = __Vfunc_aes_mul_gf2p2__1939__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1940__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1938__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1938__delta)));
    __Vfunc_aes_mul_gf2p2__1940__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1938__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1938__gamma)));
    __Vfunc_aes_mul_gf2p2__1940__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1940__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1940__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1940__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1940__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1940__d)));
    __Vfunc_aes_mul_gf2p2__1940__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1940__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1940__d)));
    __Vfunc_aes_mul_gf2p2__1940__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1940__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1940__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1940__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1940__b)));
    __Vfunc_aes_mul_gf2p2__1940__Vfuncout = __Vfunc_aes_mul_gf2p2__1940__f;
    __Vfunc_aes_mul_gf2p4__1938__b = __Vfunc_aes_mul_gf2p2__1940__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1941__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1938__delta));
    __Vfunc_aes_mul_gf2p2__1941__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1938__gamma));
    __Vfunc_aes_mul_gf2p2__1941__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1941__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1941__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1941__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1941__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1941__d)));
    __Vfunc_aes_mul_gf2p2__1941__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1941__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1941__d)));
    __Vfunc_aes_mul_gf2p2__1941__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1941__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1941__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1941__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1941__b)));
    __Vfunc_aes_mul_gf2p2__1941__Vfuncout = __Vfunc_aes_mul_gf2p2__1941__f;
    __Vfunc_aes_mul_gf2p4__1938__c = __Vfunc_aes_mul_gf2p2__1941__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1938__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1938__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1942__g 
                        = __Vfunc_aes_mul_gf2p4__1938__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1942__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1942__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1942__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1942__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1942__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1942__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1938__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1938__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1943__g 
                        = __Vfunc_aes_mul_gf2p4__1938__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1943__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1943__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1943__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1943__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1943__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1943__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1938__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1938__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1938__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1944__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1944__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1944__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5557404248840651350ull);
    __Vfunc_aes_mul_gf2p2__1945__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1944__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1945__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1944__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1945__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1945__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1945__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1945__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1945__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1945__d)));
    __Vfunc_aes_mul_gf2p2__1945__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1945__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1945__d)));
    __Vfunc_aes_mul_gf2p2__1945__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1945__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1945__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1945__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1945__b)));
    __Vfunc_aes_mul_gf2p2__1945__Vfuncout = __Vfunc_aes_mul_gf2p2__1945__f;
    __Vfunc_aes_mul_gf2p4__1944__a = __Vfunc_aes_mul_gf2p2__1945__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1946__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1944__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1944__delta)));
    __Vfunc_aes_mul_gf2p2__1946__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1944__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1944__gamma)));
    __Vfunc_aes_mul_gf2p2__1946__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1946__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1946__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1946__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1946__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1946__d)));
    __Vfunc_aes_mul_gf2p2__1946__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1946__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1946__d)));
    __Vfunc_aes_mul_gf2p2__1946__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1946__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1946__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1946__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1946__b)));
    __Vfunc_aes_mul_gf2p2__1946__Vfuncout = __Vfunc_aes_mul_gf2p2__1946__f;
    __Vfunc_aes_mul_gf2p4__1944__b = __Vfunc_aes_mul_gf2p2__1946__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1947__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1944__delta));
    __Vfunc_aes_mul_gf2p2__1947__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1944__gamma));
    __Vfunc_aes_mul_gf2p2__1947__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1947__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1947__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1947__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1947__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1947__d)));
    __Vfunc_aes_mul_gf2p2__1947__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1947__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1947__d)));
    __Vfunc_aes_mul_gf2p2__1947__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1947__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1947__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1947__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1947__b)));
    __Vfunc_aes_mul_gf2p2__1947__Vfuncout = __Vfunc_aes_mul_gf2p2__1947__f;
    __Vfunc_aes_mul_gf2p4__1944__c = __Vfunc_aes_mul_gf2p2__1947__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1944__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1944__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1948__g 
                        = __Vfunc_aes_mul_gf2p4__1944__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1948__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1948__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1948__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1948__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1948__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1948__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1944__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1944__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1949__g 
                        = __Vfunc_aes_mul_gf2p4__1944__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1949__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1949__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1949__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1949__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1949__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1949__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1944__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1944__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1944__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1962__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1962__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1962__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9554367232485402753ull);
    __Vfunc_aes_mul_gf2p2__1963__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1962__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1963__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1962__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1963__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1963__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1963__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1963__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1963__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1963__d)));
    __Vfunc_aes_mul_gf2p2__1963__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1963__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1963__d)));
    __Vfunc_aes_mul_gf2p2__1963__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1963__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1963__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1963__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1963__b)));
    __Vfunc_aes_mul_gf2p2__1963__Vfuncout = __Vfunc_aes_mul_gf2p2__1963__f;
    __Vfunc_aes_mul_gf2p4__1962__a = __Vfunc_aes_mul_gf2p2__1963__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1964__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1962__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1962__delta)));
    __Vfunc_aes_mul_gf2p2__1964__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1962__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1962__gamma)));
    __Vfunc_aes_mul_gf2p2__1964__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1964__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1964__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1964__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1964__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1964__d)));
    __Vfunc_aes_mul_gf2p2__1964__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1964__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1964__d)));
    __Vfunc_aes_mul_gf2p2__1964__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1964__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1964__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1964__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1964__b)));
    __Vfunc_aes_mul_gf2p2__1964__Vfuncout = __Vfunc_aes_mul_gf2p2__1964__f;
    __Vfunc_aes_mul_gf2p4__1962__b = __Vfunc_aes_mul_gf2p2__1964__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1965__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1962__delta));
    __Vfunc_aes_mul_gf2p2__1965__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1962__gamma));
    __Vfunc_aes_mul_gf2p2__1965__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1965__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1965__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1965__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1965__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1965__d)));
    __Vfunc_aes_mul_gf2p2__1965__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1965__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1965__d)));
    __Vfunc_aes_mul_gf2p2__1965__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1965__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1965__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1965__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1965__b)));
    __Vfunc_aes_mul_gf2p2__1965__Vfuncout = __Vfunc_aes_mul_gf2p2__1965__f;
    __Vfunc_aes_mul_gf2p4__1962__c = __Vfunc_aes_mul_gf2p2__1965__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1962__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1962__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1966__g 
                        = __Vfunc_aes_mul_gf2p4__1962__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1966__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1966__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1966__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1966__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1966__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1966__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1962__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1962__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1967__g 
                        = __Vfunc_aes_mul_gf2p4__1962__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1967__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1967__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1967__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1967__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1967__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1967__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1962__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1962__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1962__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1974__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1974__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1974__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16004963594214928364ull);
    __Vfunc_aes_mul_gf2p2__1975__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1974__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1975__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1974__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1975__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1975__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1975__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1975__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1975__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1975__d)));
    __Vfunc_aes_mul_gf2p2__1975__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1975__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1975__d)));
    __Vfunc_aes_mul_gf2p2__1975__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1975__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1975__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1975__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1975__b)));
    __Vfunc_aes_mul_gf2p2__1975__Vfuncout = __Vfunc_aes_mul_gf2p2__1975__f;
    __Vfunc_aes_mul_gf2p4__1974__a = __Vfunc_aes_mul_gf2p2__1975__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1976__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1974__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1974__delta)));
    __Vfunc_aes_mul_gf2p2__1976__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1974__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1974__gamma)));
    __Vfunc_aes_mul_gf2p2__1976__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1976__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1976__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1976__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1976__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1976__d)));
    __Vfunc_aes_mul_gf2p2__1976__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1976__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1976__d)));
    __Vfunc_aes_mul_gf2p2__1976__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1976__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1976__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1976__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1976__b)));
    __Vfunc_aes_mul_gf2p2__1976__Vfuncout = __Vfunc_aes_mul_gf2p2__1976__f;
    __Vfunc_aes_mul_gf2p4__1974__b = __Vfunc_aes_mul_gf2p2__1976__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1977__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1974__delta));
    __Vfunc_aes_mul_gf2p2__1977__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1974__gamma));
    __Vfunc_aes_mul_gf2p2__1977__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1977__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1977__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1977__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1977__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1977__d)));
    __Vfunc_aes_mul_gf2p2__1977__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1977__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1977__d)));
    __Vfunc_aes_mul_gf2p2__1977__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1977__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1977__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1977__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1977__b)));
    __Vfunc_aes_mul_gf2p2__1977__Vfuncout = __Vfunc_aes_mul_gf2p2__1977__f;
    __Vfunc_aes_mul_gf2p4__1974__c = __Vfunc_aes_mul_gf2p2__1977__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1974__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1974__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1978__g 
                        = __Vfunc_aes_mul_gf2p4__1974__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1978__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1978__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1978__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1978__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1978__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1978__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1974__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1974__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1979__g 
                        = __Vfunc_aes_mul_gf2p4__1974__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1979__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1979__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1979__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1979__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1979__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1979__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1974__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1974__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1974__Vfuncout;
}

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__0\n"); );
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
}

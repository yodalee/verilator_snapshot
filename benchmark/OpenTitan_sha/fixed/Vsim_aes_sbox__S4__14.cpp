// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1450__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1450__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1450__gamma;
    __Vfunc_aes_mul_gf2p4__1450__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1450__delta;
    __Vfunc_aes_mul_gf2p4__1450__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1450__a;
    __Vfunc_aes_mul_gf2p4__1450__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1450__b;
    __Vfunc_aes_mul_gf2p4__1450__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1450__c;
    __Vfunc_aes_mul_gf2p4__1450__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1451__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1451__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1451__g;
    __Vfunc_aes_mul_gf2p2__1451__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1451__d;
    __Vfunc_aes_mul_gf2p2__1451__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1451__f;
    __Vfunc_aes_mul_gf2p2__1451__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1451__a;
    __Vfunc_aes_mul_gf2p2__1451__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1451__b;
    __Vfunc_aes_mul_gf2p2__1451__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1451__c;
    __Vfunc_aes_mul_gf2p2__1451__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1452__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1452__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1452__g;
    __Vfunc_aes_mul_gf2p2__1452__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1452__d;
    __Vfunc_aes_mul_gf2p2__1452__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1452__f;
    __Vfunc_aes_mul_gf2p2__1452__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1452__a;
    __Vfunc_aes_mul_gf2p2__1452__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1452__b;
    __Vfunc_aes_mul_gf2p2__1452__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1452__c;
    __Vfunc_aes_mul_gf2p2__1452__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1453__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1453__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1453__g;
    __Vfunc_aes_mul_gf2p2__1453__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1453__d;
    __Vfunc_aes_mul_gf2p2__1453__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1453__f;
    __Vfunc_aes_mul_gf2p2__1453__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1453__a;
    __Vfunc_aes_mul_gf2p2__1453__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1453__b;
    __Vfunc_aes_mul_gf2p2__1453__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1453__c;
    __Vfunc_aes_mul_gf2p2__1453__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1456__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1456__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1456__gamma;
    __Vfunc_aes_mul_gf2p4__1456__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1456__delta;
    __Vfunc_aes_mul_gf2p4__1456__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1456__a;
    __Vfunc_aes_mul_gf2p4__1456__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1456__b;
    __Vfunc_aes_mul_gf2p4__1456__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1456__c;
    __Vfunc_aes_mul_gf2p4__1456__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1457__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1457__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1457__g;
    __Vfunc_aes_mul_gf2p2__1457__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1457__d;
    __Vfunc_aes_mul_gf2p2__1457__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1457__f;
    __Vfunc_aes_mul_gf2p2__1457__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1457__a;
    __Vfunc_aes_mul_gf2p2__1457__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1457__b;
    __Vfunc_aes_mul_gf2p2__1457__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1457__c;
    __Vfunc_aes_mul_gf2p2__1457__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1458__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1458__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1458__g;
    __Vfunc_aes_mul_gf2p2__1458__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1458__d;
    __Vfunc_aes_mul_gf2p2__1458__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1458__f;
    __Vfunc_aes_mul_gf2p2__1458__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1458__a;
    __Vfunc_aes_mul_gf2p2__1458__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1458__b;
    __Vfunc_aes_mul_gf2p2__1458__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1458__c;
    __Vfunc_aes_mul_gf2p2__1458__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1459__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1459__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1459__g;
    __Vfunc_aes_mul_gf2p2__1459__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1459__d;
    __Vfunc_aes_mul_gf2p2__1459__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1459__f;
    __Vfunc_aes_mul_gf2p2__1459__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1459__a;
    __Vfunc_aes_mul_gf2p2__1459__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1459__b;
    __Vfunc_aes_mul_gf2p2__1459__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1459__c;
    __Vfunc_aes_mul_gf2p2__1459__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1480__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1480__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1480__g;
    __Vfunc_aes_mul_gf2p2__1480__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1480__d;
    __Vfunc_aes_mul_gf2p2__1480__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1480__f;
    __Vfunc_aes_mul_gf2p2__1480__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1480__a;
    __Vfunc_aes_mul_gf2p2__1480__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1480__b;
    __Vfunc_aes_mul_gf2p2__1480__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1480__c;
    __Vfunc_aes_mul_gf2p2__1480__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1481__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1481__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1481__g;
    __Vfunc_aes_mul_gf2p2__1481__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1481__d;
    __Vfunc_aes_mul_gf2p2__1481__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1481__f;
    __Vfunc_aes_mul_gf2p2__1481__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1481__a;
    __Vfunc_aes_mul_gf2p2__1481__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1481__b;
    __Vfunc_aes_mul_gf2p2__1481__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1481__c;
    __Vfunc_aes_mul_gf2p2__1481__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1484__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1484__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1484__g;
    __Vfunc_aes_mul_gf2p2__1484__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1484__d;
    __Vfunc_aes_mul_gf2p2__1484__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1484__f;
    __Vfunc_aes_mul_gf2p2__1484__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1484__a;
    __Vfunc_aes_mul_gf2p2__1484__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1484__b;
    __Vfunc_aes_mul_gf2p2__1484__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1484__c;
    __Vfunc_aes_mul_gf2p2__1484__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1485__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1485__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1485__g;
    __Vfunc_aes_mul_gf2p2__1485__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1485__d;
    __Vfunc_aes_mul_gf2p2__1485__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1485__f;
    __Vfunc_aes_mul_gf2p2__1485__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1485__a;
    __Vfunc_aes_mul_gf2p2__1485__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1485__b;
    __Vfunc_aes_mul_gf2p2__1485__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1485__c;
    __Vfunc_aes_mul_gf2p2__1485__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1488__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1488__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1488__g;
    __Vfunc_aes_mul_gf2p2__1488__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1488__d;
    __Vfunc_aes_mul_gf2p2__1488__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1488__f;
    __Vfunc_aes_mul_gf2p2__1488__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1488__a;
    __Vfunc_aes_mul_gf2p2__1488__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1488__b;
    __Vfunc_aes_mul_gf2p2__1488__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1488__c;
    __Vfunc_aes_mul_gf2p2__1488__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1489__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1489__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1489__g;
    __Vfunc_aes_mul_gf2p2__1489__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1489__d;
    __Vfunc_aes_mul_gf2p2__1489__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1489__f;
    __Vfunc_aes_mul_gf2p2__1489__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1489__a;
    __Vfunc_aes_mul_gf2p2__1489__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1489__b;
    __Vfunc_aes_mul_gf2p2__1489__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1489__c;
    __Vfunc_aes_mul_gf2p2__1489__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__1480__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1480__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1480__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1480__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1480__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1480__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1480__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1480__d)));
    __Vfunc_aes_mul_gf2p2__1480__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1480__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1480__d)));
    __Vfunc_aes_mul_gf2p2__1480__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1480__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1480__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1480__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1480__b)));
    __Vfunc_aes_mul_gf2p2__1480__Vfuncout = __Vfunc_aes_mul_gf2p2__1480__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1480__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1481__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1481__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1481__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1481__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1481__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1481__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1481__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1481__d)));
    __Vfunc_aes_mul_gf2p2__1481__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1481__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1481__d)));
    __Vfunc_aes_mul_gf2p2__1481__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1481__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1481__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1481__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1481__b)));
    __Vfunc_aes_mul_gf2p2__1481__Vfuncout = __Vfunc_aes_mul_gf2p2__1481__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1481__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1484__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1484__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1484__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1484__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1484__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1484__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1484__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1484__d)));
    __Vfunc_aes_mul_gf2p2__1484__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1484__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1484__d)));
    __Vfunc_aes_mul_gf2p2__1484__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1484__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1484__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1484__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1484__b)));
    __Vfunc_aes_mul_gf2p2__1484__Vfuncout = __Vfunc_aes_mul_gf2p2__1484__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1484__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1485__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1485__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1485__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1485__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1485__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1485__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1485__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1485__d)));
    __Vfunc_aes_mul_gf2p2__1485__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1485__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1485__d)));
    __Vfunc_aes_mul_gf2p2__1485__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1485__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1485__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1485__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1485__b)));
    __Vfunc_aes_mul_gf2p2__1485__Vfuncout = __Vfunc_aes_mul_gf2p2__1485__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1485__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1450__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__);
    __Vfunc_aes_mul_gf2p4__1450__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                             >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1450__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15064060664878380451ull);
    __Vfunc_aes_mul_gf2p2__1451__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1450__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1451__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1450__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1451__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1451__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1451__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1451__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1451__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1451__d)));
    __Vfunc_aes_mul_gf2p2__1451__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1451__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1451__d)));
    __Vfunc_aes_mul_gf2p2__1451__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1451__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1451__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1451__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1451__b)));
    __Vfunc_aes_mul_gf2p2__1451__Vfuncout = __Vfunc_aes_mul_gf2p2__1451__f;
    __Vfunc_aes_mul_gf2p4__1450__a = __Vfunc_aes_mul_gf2p2__1451__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1452__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1450__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1450__delta)));
    __Vfunc_aes_mul_gf2p2__1452__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1450__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1450__gamma)));
    __Vfunc_aes_mul_gf2p2__1452__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1452__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1452__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1452__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1452__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1452__d)));
    __Vfunc_aes_mul_gf2p2__1452__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1452__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1452__d)));
    __Vfunc_aes_mul_gf2p2__1452__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1452__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1452__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1452__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1452__b)));
    __Vfunc_aes_mul_gf2p2__1452__Vfuncout = __Vfunc_aes_mul_gf2p2__1452__f;
    __Vfunc_aes_mul_gf2p4__1450__b = __Vfunc_aes_mul_gf2p2__1452__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1453__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1450__delta));
    __Vfunc_aes_mul_gf2p2__1453__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1450__gamma));
    __Vfunc_aes_mul_gf2p2__1453__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1453__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1453__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1453__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1453__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1453__d)));
    __Vfunc_aes_mul_gf2p2__1453__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1453__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1453__d)));
    __Vfunc_aes_mul_gf2p2__1453__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1453__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1453__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1453__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1453__b)));
    __Vfunc_aes_mul_gf2p2__1453__Vfuncout = __Vfunc_aes_mul_gf2p2__1453__f;
    __Vfunc_aes_mul_gf2p4__1450__c = __Vfunc_aes_mul_gf2p2__1453__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1450__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1450__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1454__g 
                        = __Vfunc_aes_mul_gf2p4__1450__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1454__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1454__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1454__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1454__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1454__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1454__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1450__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1450__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1455__g 
                        = __Vfunc_aes_mul_gf2p4__1450__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1455__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1455__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1455__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1455__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1455__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1455__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1450__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1450__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__1450__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1456__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__);
    __Vfunc_aes_mul_gf2p4__1456__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1456__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16128225979937004043ull);
    __Vfunc_aes_mul_gf2p2__1457__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1456__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1457__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1456__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1457__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1457__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1457__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1457__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1457__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1457__d)));
    __Vfunc_aes_mul_gf2p2__1457__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1457__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1457__d)));
    __Vfunc_aes_mul_gf2p2__1457__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1457__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1457__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1457__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1457__b)));
    __Vfunc_aes_mul_gf2p2__1457__Vfuncout = __Vfunc_aes_mul_gf2p2__1457__f;
    __Vfunc_aes_mul_gf2p4__1456__a = __Vfunc_aes_mul_gf2p2__1457__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1458__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1456__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1456__delta)));
    __Vfunc_aes_mul_gf2p2__1458__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1456__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1456__gamma)));
    __Vfunc_aes_mul_gf2p2__1458__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1458__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1458__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1458__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1458__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1458__d)));
    __Vfunc_aes_mul_gf2p2__1458__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1458__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1458__d)));
    __Vfunc_aes_mul_gf2p2__1458__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1458__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1458__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1458__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1458__b)));
    __Vfunc_aes_mul_gf2p2__1458__Vfuncout = __Vfunc_aes_mul_gf2p2__1458__f;
    __Vfunc_aes_mul_gf2p4__1456__b = __Vfunc_aes_mul_gf2p2__1458__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1459__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1456__delta));
    __Vfunc_aes_mul_gf2p2__1459__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1456__gamma));
    __Vfunc_aes_mul_gf2p2__1459__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1459__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1459__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1459__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1459__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1459__d)));
    __Vfunc_aes_mul_gf2p2__1459__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1459__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1459__d)));
    __Vfunc_aes_mul_gf2p2__1459__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1459__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1459__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1459__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1459__b)));
    __Vfunc_aes_mul_gf2p2__1459__Vfuncout = __Vfunc_aes_mul_gf2p2__1459__f;
    __Vfunc_aes_mul_gf2p4__1456__c = __Vfunc_aes_mul_gf2p2__1459__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1456__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1456__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1460__g 
                        = __Vfunc_aes_mul_gf2p4__1456__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1460__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1460__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1460__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1460__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1460__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1460__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1456__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1456__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1461__g 
                        = __Vfunc_aes_mul_gf2p4__1456__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1461__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1461__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1461__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1461__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1461__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1461__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1456__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1456__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__1456__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1488__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1488__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__1488__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1488__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1488__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1488__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1488__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1488__d)));
    __Vfunc_aes_mul_gf2p2__1488__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1488__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1488__d)));
    __Vfunc_aes_mul_gf2p2__1488__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1488__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1488__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1488__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1488__b)));
    __Vfunc_aes_mul_gf2p2__1488__Vfuncout = __Vfunc_aes_mul_gf2p2__1488__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1488__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1489__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1489__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__1489__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1489__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1489__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1489__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1489__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1489__d)));
    __Vfunc_aes_mul_gf2p2__1489__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1489__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1489__d)));
    __Vfunc_aes_mul_gf2p2__1489__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1489__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1489__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1489__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1489__b)));
    __Vfunc_aes_mul_gf2p2__1489__Vfuncout = __Vfunc_aes_mul_gf2p2__1489__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1489__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1553__Vfuncout;
    __Vfunc_aes_square_gf2p2__1553__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1553__g;
    __Vfunc_aes_square_gf2p2__1553__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1553__d;
    __Vfunc_aes_square_gf2p2__1553__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1557__Vfuncout;
    __Vfunc_aes_square_gf2p2__1557__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1557__g;
    __Vfunc_aes_square_gf2p2__1557__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1557__d;
    __Vfunc_aes_square_gf2p2__1557__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1572__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1572__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1572__gamma;
    __Vfunc_aes_mul_gf2p4__1572__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1572__delta;
    __Vfunc_aes_mul_gf2p4__1572__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1572__a;
    __Vfunc_aes_mul_gf2p4__1572__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1572__b;
    __Vfunc_aes_mul_gf2p4__1572__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1572__c;
    __Vfunc_aes_mul_gf2p4__1572__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1573__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1573__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1573__g;
    __Vfunc_aes_mul_gf2p2__1573__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1573__d;
    __Vfunc_aes_mul_gf2p2__1573__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1573__f;
    __Vfunc_aes_mul_gf2p2__1573__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1573__a;
    __Vfunc_aes_mul_gf2p2__1573__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1573__b;
    __Vfunc_aes_mul_gf2p2__1573__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1573__c;
    __Vfunc_aes_mul_gf2p2__1573__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1574__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1574__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1574__g;
    __Vfunc_aes_mul_gf2p2__1574__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1574__d;
    __Vfunc_aes_mul_gf2p2__1574__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1574__f;
    __Vfunc_aes_mul_gf2p2__1574__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1574__a;
    __Vfunc_aes_mul_gf2p2__1574__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1574__b;
    __Vfunc_aes_mul_gf2p2__1574__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1574__c;
    __Vfunc_aes_mul_gf2p2__1574__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1575__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1575__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1575__g;
    __Vfunc_aes_mul_gf2p2__1575__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1575__d;
    __Vfunc_aes_mul_gf2p2__1575__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1575__f;
    __Vfunc_aes_mul_gf2p2__1575__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1575__a;
    __Vfunc_aes_mul_gf2p2__1575__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1575__b;
    __Vfunc_aes_mul_gf2p2__1575__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1575__c;
    __Vfunc_aes_mul_gf2p2__1575__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1578__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1578__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1578__gamma;
    __Vfunc_aes_mul_gf2p4__1578__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1578__delta;
    __Vfunc_aes_mul_gf2p4__1578__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1578__a;
    __Vfunc_aes_mul_gf2p4__1578__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1578__b;
    __Vfunc_aes_mul_gf2p4__1578__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1578__c;
    __Vfunc_aes_mul_gf2p4__1578__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1579__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1579__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1579__g;
    __Vfunc_aes_mul_gf2p2__1579__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1579__d;
    __Vfunc_aes_mul_gf2p2__1579__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1579__f;
    __Vfunc_aes_mul_gf2p2__1579__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1579__a;
    __Vfunc_aes_mul_gf2p2__1579__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1579__b;
    __Vfunc_aes_mul_gf2p2__1579__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1579__c;
    __Vfunc_aes_mul_gf2p2__1579__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1580__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1580__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1580__g;
    __Vfunc_aes_mul_gf2p2__1580__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1580__d;
    __Vfunc_aes_mul_gf2p2__1580__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1580__f;
    __Vfunc_aes_mul_gf2p2__1580__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1580__a;
    __Vfunc_aes_mul_gf2p2__1580__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1580__b;
    __Vfunc_aes_mul_gf2p2__1580__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1580__c;
    __Vfunc_aes_mul_gf2p2__1580__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1581__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1581__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1581__g;
    __Vfunc_aes_mul_gf2p2__1581__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1581__d;
    __Vfunc_aes_mul_gf2p2__1581__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1581__f;
    __Vfunc_aes_mul_gf2p2__1581__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1581__a;
    __Vfunc_aes_mul_gf2p2__1581__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1581__b;
    __Vfunc_aes_mul_gf2p2__1581__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1581__c;
    __Vfunc_aes_mul_gf2p2__1581__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1584__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1584__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1584__g;
    __Vfunc_aes_scale_omega2_gf2p2__1584__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1584__d;
    __Vfunc_aes_scale_omega2_gf2p2__1584__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1585__Vfuncout;
    __Vfunc_aes_square_gf2p2__1585__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1585__g;
    __Vfunc_aes_square_gf2p2__1585__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1585__d;
    __Vfunc_aes_square_gf2p2__1585__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1586__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1586__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1586__g;
    __Vfunc_aes_scale_omega2_gf2p2__1586__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1586__d;
    __Vfunc_aes_scale_omega2_gf2p2__1586__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1587__Vfuncout;
    __Vfunc_aes_square_gf2p2__1587__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1587__g;
    __Vfunc_aes_square_gf2p2__1587__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1587__d;
    __Vfunc_aes_square_gf2p2__1587__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1588__Vfuncout;
    __Vfunc_aes_square_gf2p2__1588__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1588__g;
    __Vfunc_aes_square_gf2p2__1588__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1588__d;
    __Vfunc_aes_square_gf2p2__1588__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1589__Vfuncout;
    __Vfunc_aes_square_gf2p2__1589__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1589__g;
    __Vfunc_aes_square_gf2p2__1589__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1589__d;
    __Vfunc_aes_square_gf2p2__1589__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1592__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1592__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1592__g;
    __Vfunc_aes_mul_gf2p2__1592__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1592__d;
    __Vfunc_aes_mul_gf2p2__1592__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1592__f;
    __Vfunc_aes_mul_gf2p2__1592__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1592__a;
    __Vfunc_aes_mul_gf2p2__1592__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1592__b;
    __Vfunc_aes_mul_gf2p2__1592__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1592__c;
    __Vfunc_aes_mul_gf2p2__1592__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1593__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1593__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1593__g;
    __Vfunc_aes_mul_gf2p2__1593__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1593__d;
    __Vfunc_aes_mul_gf2p2__1593__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1593__f;
    __Vfunc_aes_mul_gf2p2__1593__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1593__a;
    __Vfunc_aes_mul_gf2p2__1593__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1593__b;
    __Vfunc_aes_mul_gf2p2__1593__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1593__c;
    __Vfunc_aes_mul_gf2p2__1593__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1596__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1596__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1596__g;
    __Vfunc_aes_mul_gf2p2__1596__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1596__d;
    __Vfunc_aes_mul_gf2p2__1596__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1596__f;
    __Vfunc_aes_mul_gf2p2__1596__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1596__a;
    __Vfunc_aes_mul_gf2p2__1596__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1596__b;
    __Vfunc_aes_mul_gf2p2__1596__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1596__c;
    __Vfunc_aes_mul_gf2p2__1596__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1597__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1597__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1597__g;
    __Vfunc_aes_mul_gf2p2__1597__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1597__d;
    __Vfunc_aes_mul_gf2p2__1597__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1597__f;
    __Vfunc_aes_mul_gf2p2__1597__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1597__a;
    __Vfunc_aes_mul_gf2p2__1597__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1597__b;
    __Vfunc_aes_mul_gf2p2__1597__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1597__c;
    __Vfunc_aes_mul_gf2p2__1597__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1600__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1600__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1600__g;
    __Vfunc_aes_mul_gf2p2__1600__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1600__d;
    __Vfunc_aes_mul_gf2p2__1600__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1600__f;
    __Vfunc_aes_mul_gf2p2__1600__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1600__a;
    __Vfunc_aes_mul_gf2p2__1600__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1600__b;
    __Vfunc_aes_mul_gf2p2__1600__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1600__c;
    __Vfunc_aes_mul_gf2p2__1600__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1601__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1601__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1601__g;
    __Vfunc_aes_mul_gf2p2__1601__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1601__d;
    __Vfunc_aes_mul_gf2p2__1601__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1601__f;
    __Vfunc_aes_mul_gf2p2__1601__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1601__a;
    __Vfunc_aes_mul_gf2p2__1601__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1601__b;
    __Vfunc_aes_mul_gf2p2__1601__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1601__c;
    __Vfunc_aes_mul_gf2p2__1601__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1602__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1602__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1602__gamma;
    __Vfunc_aes_mul_gf2p4__1602__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1602__delta;
    __Vfunc_aes_mul_gf2p4__1602__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1602__a;
    __Vfunc_aes_mul_gf2p4__1602__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1602__b;
    __Vfunc_aes_mul_gf2p4__1602__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1602__c;
    __Vfunc_aes_mul_gf2p4__1602__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1603__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1603__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1603__g;
    __Vfunc_aes_mul_gf2p2__1603__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1603__d;
    __Vfunc_aes_mul_gf2p2__1603__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1603__f;
    __Vfunc_aes_mul_gf2p2__1603__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1603__a;
    __Vfunc_aes_mul_gf2p2__1603__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1603__b;
    __Vfunc_aes_mul_gf2p2__1603__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1603__c;
    __Vfunc_aes_mul_gf2p2__1603__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1604__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1604__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1604__g;
    __Vfunc_aes_mul_gf2p2__1604__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1604__d;
    __Vfunc_aes_mul_gf2p2__1604__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1604__f;
    __Vfunc_aes_mul_gf2p2__1604__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1604__a;
    __Vfunc_aes_mul_gf2p2__1604__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1604__b;
    __Vfunc_aes_mul_gf2p2__1604__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1604__c;
    __Vfunc_aes_mul_gf2p2__1604__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1605__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1605__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1605__g;
    __Vfunc_aes_mul_gf2p2__1605__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1605__d;
    __Vfunc_aes_mul_gf2p2__1605__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1605__f;
    __Vfunc_aes_mul_gf2p2__1605__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1605__a;
    __Vfunc_aes_mul_gf2p2__1605__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1605__b;
    __Vfunc_aes_mul_gf2p2__1605__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1605__c;
    __Vfunc_aes_mul_gf2p2__1605__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1608__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1608__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1608__gamma;
    __Vfunc_aes_mul_gf2p4__1608__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1608__delta;
    __Vfunc_aes_mul_gf2p4__1608__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1608__a;
    __Vfunc_aes_mul_gf2p4__1608__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1608__b;
    __Vfunc_aes_mul_gf2p4__1608__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1608__c;
    __Vfunc_aes_mul_gf2p4__1608__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1609__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1609__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1609__g;
    __Vfunc_aes_mul_gf2p2__1609__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1609__d;
    __Vfunc_aes_mul_gf2p2__1609__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1609__f;
    __Vfunc_aes_mul_gf2p2__1609__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1609__a;
    __Vfunc_aes_mul_gf2p2__1609__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1609__b;
    __Vfunc_aes_mul_gf2p2__1609__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1609__c;
    __Vfunc_aes_mul_gf2p2__1609__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1610__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1610__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1610__g;
    __Vfunc_aes_mul_gf2p2__1610__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1610__d;
    __Vfunc_aes_mul_gf2p2__1610__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1610__f;
    __Vfunc_aes_mul_gf2p2__1610__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1610__a;
    __Vfunc_aes_mul_gf2p2__1610__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1610__b;
    __Vfunc_aes_mul_gf2p2__1610__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1610__c;
    __Vfunc_aes_mul_gf2p2__1610__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1611__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1611__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1611__g;
    __Vfunc_aes_mul_gf2p2__1611__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1611__d;
    __Vfunc_aes_mul_gf2p2__1611__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1611__f;
    __Vfunc_aes_mul_gf2p2__1611__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1611__a;
    __Vfunc_aes_mul_gf2p2__1611__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1611__b;
    __Vfunc_aes_mul_gf2p2__1611__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1611__c;
    __Vfunc_aes_mul_gf2p2__1611__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1614__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1614__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1614__gamma;
    __Vfunc_aes_mul_gf2p4__1614__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1614__delta;
    __Vfunc_aes_mul_gf2p4__1614__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1614__a;
    __Vfunc_aes_mul_gf2p4__1614__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1614__b;
    __Vfunc_aes_mul_gf2p4__1614__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1614__c;
    __Vfunc_aes_mul_gf2p4__1614__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1615__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1615__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1615__g;
    __Vfunc_aes_mul_gf2p2__1615__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1615__d;
    __Vfunc_aes_mul_gf2p2__1615__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1615__f;
    __Vfunc_aes_mul_gf2p2__1615__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1615__a;
    __Vfunc_aes_mul_gf2p2__1615__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1615__b;
    __Vfunc_aes_mul_gf2p2__1615__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1615__c;
    __Vfunc_aes_mul_gf2p2__1615__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1616__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1616__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1616__g;
    __Vfunc_aes_mul_gf2p2__1616__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1616__d;
    __Vfunc_aes_mul_gf2p2__1616__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1616__f;
    __Vfunc_aes_mul_gf2p2__1616__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1616__a;
    __Vfunc_aes_mul_gf2p2__1616__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1616__b;
    __Vfunc_aes_mul_gf2p2__1616__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1616__c;
    __Vfunc_aes_mul_gf2p2__1616__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1617__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1617__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1617__g;
    __Vfunc_aes_mul_gf2p2__1617__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1617__d;
    __Vfunc_aes_mul_gf2p2__1617__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1617__f;
    __Vfunc_aes_mul_gf2p2__1617__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1617__a;
    __Vfunc_aes_mul_gf2p2__1617__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1617__b;
    __Vfunc_aes_mul_gf2p2__1617__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1617__c;
    __Vfunc_aes_mul_gf2p2__1617__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1620__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1620__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1620__gamma;
    __Vfunc_aes_mul_gf2p4__1620__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1620__delta;
    __Vfunc_aes_mul_gf2p4__1620__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1620__a;
    __Vfunc_aes_mul_gf2p4__1620__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1620__b;
    __Vfunc_aes_mul_gf2p4__1620__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1620__c;
    __Vfunc_aes_mul_gf2p4__1620__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1621__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1621__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1621__g;
    __Vfunc_aes_mul_gf2p2__1621__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1621__d;
    __Vfunc_aes_mul_gf2p2__1621__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1621__f;
    __Vfunc_aes_mul_gf2p2__1621__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1621__a;
    __Vfunc_aes_mul_gf2p2__1621__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1621__b;
    __Vfunc_aes_mul_gf2p2__1621__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1621__c;
    __Vfunc_aes_mul_gf2p2__1621__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1622__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1622__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1622__g;
    __Vfunc_aes_mul_gf2p2__1622__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1622__d;
    __Vfunc_aes_mul_gf2p2__1622__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1622__f;
    __Vfunc_aes_mul_gf2p2__1622__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1622__a;
    __Vfunc_aes_mul_gf2p2__1622__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1622__b;
    __Vfunc_aes_mul_gf2p2__1622__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1622__c;
    __Vfunc_aes_mul_gf2p2__1622__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1623__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1623__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1623__g;
    __Vfunc_aes_mul_gf2p2__1623__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1623__d;
    __Vfunc_aes_mul_gf2p2__1623__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1623__f;
    __Vfunc_aes_mul_gf2p2__1623__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1623__a;
    __Vfunc_aes_mul_gf2p2__1623__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1623__b;
    __Vfunc_aes_mul_gf2p2__1623__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1623__c;
    __Vfunc_aes_mul_gf2p2__1623__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1626__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1626__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1626__gamma;
    __Vfunc_aes_mul_gf2p4__1626__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1626__delta;
    __Vfunc_aes_mul_gf2p4__1626__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1626__a;
    __Vfunc_aes_mul_gf2p4__1626__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1626__b;
    __Vfunc_aes_mul_gf2p4__1626__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1626__c;
    __Vfunc_aes_mul_gf2p4__1626__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1627__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1627__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1627__g;
    __Vfunc_aes_mul_gf2p2__1627__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1627__d;
    __Vfunc_aes_mul_gf2p2__1627__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1627__f;
    __Vfunc_aes_mul_gf2p2__1627__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1627__a;
    __Vfunc_aes_mul_gf2p2__1627__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1627__b;
    __Vfunc_aes_mul_gf2p2__1627__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1627__c;
    __Vfunc_aes_mul_gf2p2__1627__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1628__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1628__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1628__g;
    __Vfunc_aes_mul_gf2p2__1628__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1628__d;
    __Vfunc_aes_mul_gf2p2__1628__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1628__f;
    __Vfunc_aes_mul_gf2p2__1628__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1628__a;
    __Vfunc_aes_mul_gf2p2__1628__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1628__b;
    __Vfunc_aes_mul_gf2p2__1628__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1628__c;
    __Vfunc_aes_mul_gf2p2__1628__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1629__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1629__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1629__g;
    __Vfunc_aes_mul_gf2p2__1629__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1629__d;
    __Vfunc_aes_mul_gf2p2__1629__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1629__f;
    __Vfunc_aes_mul_gf2p2__1629__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1629__a;
    __Vfunc_aes_mul_gf2p2__1629__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1629__b;
    __Vfunc_aes_mul_gf2p2__1629__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1629__c;
    __Vfunc_aes_mul_gf2p2__1629__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1632__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1632__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1632__gamma;
    __Vfunc_aes_mul_gf2p4__1632__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1632__delta;
    __Vfunc_aes_mul_gf2p4__1632__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1632__a;
    __Vfunc_aes_mul_gf2p4__1632__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1632__b;
    __Vfunc_aes_mul_gf2p4__1632__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1632__c;
    __Vfunc_aes_mul_gf2p4__1632__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1633__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1633__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1633__g;
    __Vfunc_aes_mul_gf2p2__1633__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1633__d;
    __Vfunc_aes_mul_gf2p2__1633__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1633__f;
    __Vfunc_aes_mul_gf2p2__1633__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1633__a;
    __Vfunc_aes_mul_gf2p2__1633__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1633__b;
    __Vfunc_aes_mul_gf2p2__1633__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1633__c;
    __Vfunc_aes_mul_gf2p2__1633__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1634__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1634__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1634__g;
    __Vfunc_aes_mul_gf2p2__1634__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1634__d;
    __Vfunc_aes_mul_gf2p2__1634__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1634__f;
    __Vfunc_aes_mul_gf2p2__1634__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1634__a;
    __Vfunc_aes_mul_gf2p2__1634__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1634__b;
    __Vfunc_aes_mul_gf2p2__1634__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1634__c;
    __Vfunc_aes_mul_gf2p2__1634__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1635__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__g;
    __Vfunc_aes_mul_gf2p2__1635__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__d;
    __Vfunc_aes_mul_gf2p2__1635__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1635__f;
    __Vfunc_aes_mul_gf2p2__1635__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1635__a;
    __Vfunc_aes_mul_gf2p2__1635__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1635__b;
    __Vfunc_aes_mul_gf2p2__1635__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1635__c;
    __Vfunc_aes_mul_gf2p2__1635__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1638__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1638__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1638__gamma;
    __Vfunc_aes_mul_gf2p4__1638__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1638__delta;
    __Vfunc_aes_mul_gf2p4__1638__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1638__a;
    __Vfunc_aes_mul_gf2p4__1638__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1638__b;
    __Vfunc_aes_mul_gf2p4__1638__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1638__c;
    __Vfunc_aes_mul_gf2p4__1638__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1639__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__g;
    __Vfunc_aes_mul_gf2p2__1639__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__d;
    __Vfunc_aes_mul_gf2p2__1639__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__f;
    __Vfunc_aes_mul_gf2p2__1639__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1639__a;
    __Vfunc_aes_mul_gf2p2__1639__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1639__b;
    __Vfunc_aes_mul_gf2p2__1639__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1639__c;
    __Vfunc_aes_mul_gf2p2__1639__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1640__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__g;
    __Vfunc_aes_mul_gf2p2__1640__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__d;
    __Vfunc_aes_mul_gf2p2__1640__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__f;
    __Vfunc_aes_mul_gf2p2__1640__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1640__a;
    __Vfunc_aes_mul_gf2p2__1640__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1640__b;
    __Vfunc_aes_mul_gf2p2__1640__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1640__c;
    __Vfunc_aes_mul_gf2p2__1640__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1641__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__g;
    __Vfunc_aes_mul_gf2p2__1641__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__d;
    __Vfunc_aes_mul_gf2p2__1641__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__f;
    __Vfunc_aes_mul_gf2p2__1641__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1641__a;
    __Vfunc_aes_mul_gf2p2__1641__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1641__b;
    __Vfunc_aes_mul_gf2p2__1641__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1641__c;
    __Vfunc_aes_mul_gf2p2__1641__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1644__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1644__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1644__gamma;
    __Vfunc_aes_mul_gf2p4__1644__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1644__delta;
    __Vfunc_aes_mul_gf2p4__1644__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1644__a;
    __Vfunc_aes_mul_gf2p4__1644__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1644__b;
    __Vfunc_aes_mul_gf2p4__1644__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1644__c;
    __Vfunc_aes_mul_gf2p4__1644__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1645__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1645__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1645__g;
    __Vfunc_aes_mul_gf2p2__1645__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1645__d;
    __Vfunc_aes_mul_gf2p2__1645__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1645__f;
    __Vfunc_aes_mul_gf2p2__1645__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1645__a;
    __Vfunc_aes_mul_gf2p2__1645__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1645__b;
    __Vfunc_aes_mul_gf2p2__1645__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1645__c;
    __Vfunc_aes_mul_gf2p2__1645__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1646__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1646__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1646__g;
    __Vfunc_aes_mul_gf2p2__1646__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1646__d;
    __Vfunc_aes_mul_gf2p2__1646__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1646__f;
    __Vfunc_aes_mul_gf2p2__1646__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1646__a;
    __Vfunc_aes_mul_gf2p2__1646__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1646__b;
    __Vfunc_aes_mul_gf2p2__1646__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1646__c;
    __Vfunc_aes_mul_gf2p2__1646__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1647__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1647__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1647__g;
    __Vfunc_aes_mul_gf2p2__1647__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1647__d;
    __Vfunc_aes_mul_gf2p2__1647__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1647__f;
    __Vfunc_aes_mul_gf2p2__1647__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1647__a;
    __Vfunc_aes_mul_gf2p2__1647__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1647__b;
    __Vfunc_aes_mul_gf2p2__1647__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1647__c;
    __Vfunc_aes_mul_gf2p2__1647__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
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
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__335__03a308__KET__ 
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
                vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_b 
                    = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [0U][2U] >> 0x00000018U);
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1540__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1540__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1540__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1540__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1540__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][2U] 
                                                      >> 0x00000018U))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1541__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1541__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1541__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1541__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1541__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [0U][2U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1542__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1542__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1542__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1542__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1542__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_b 
                    = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [1U][2U] >> 0x00000018U);
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1543__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1543__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1543__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1543__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1543__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][2U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1544__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1544__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1544__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1544__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1544__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][2U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1545__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1545__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1545__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1545__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1545__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma)));
    __Vfunc_aes_square_gf2p2__1553__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1552__gamma));
    __Vfunc_aes_square_gf2p2__1553__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1553__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1553__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1553__Vfuncout = __Vfunc_aes_square_gf2p2__1553__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__b = __Vfunc_aes_square_gf2p2__1553__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1554__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1554__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1554__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1554__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1554__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1554__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1554__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1555__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1555__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1555__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1555__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1555__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1555__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1555__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1552__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma)));
    __Vfunc_aes_square_gf2p2__1557__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1556__gamma));
    __Vfunc_aes_square_gf2p2__1557__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1557__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1557__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1557__Vfuncout = __Vfunc_aes_square_gf2p2__1557__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__b = __Vfunc_aes_square_gf2p2__1557__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1558__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1558__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1558__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1558__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1558__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1558__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1558__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1559__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1559__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1559__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1559__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1559__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1559__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1559__Vfuncout)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1556__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__1572__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__1572__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1572__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15736098557627291912ull);
    __Vfunc_aes_mul_gf2p2__1573__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1572__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1573__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1572__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1573__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1573__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1573__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1573__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1573__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1573__d)));
    __Vfunc_aes_mul_gf2p2__1573__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1573__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1573__d)));
    __Vfunc_aes_mul_gf2p2__1573__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1573__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1573__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1573__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1573__b)));
    __Vfunc_aes_mul_gf2p2__1573__Vfuncout = __Vfunc_aes_mul_gf2p2__1573__f;
    __Vfunc_aes_mul_gf2p4__1572__a = __Vfunc_aes_mul_gf2p2__1573__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1574__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1572__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1572__delta)));
    __Vfunc_aes_mul_gf2p2__1574__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1572__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1572__gamma)));
    __Vfunc_aes_mul_gf2p2__1574__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1574__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1574__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1574__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1574__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1574__d)));
    __Vfunc_aes_mul_gf2p2__1574__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1574__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1574__d)));
    __Vfunc_aes_mul_gf2p2__1574__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1574__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1574__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1574__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1574__b)));
    __Vfunc_aes_mul_gf2p2__1574__Vfuncout = __Vfunc_aes_mul_gf2p2__1574__f;
    __Vfunc_aes_mul_gf2p4__1572__b = __Vfunc_aes_mul_gf2p2__1574__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1575__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1572__delta));
    __Vfunc_aes_mul_gf2p2__1575__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1572__gamma));
    __Vfunc_aes_mul_gf2p2__1575__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1575__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1575__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1575__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1575__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1575__d)));
    __Vfunc_aes_mul_gf2p2__1575__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1575__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1575__d)));
    __Vfunc_aes_mul_gf2p2__1575__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1575__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1575__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1575__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1575__b)));
    __Vfunc_aes_mul_gf2p2__1575__Vfuncout = __Vfunc_aes_mul_gf2p2__1575__f;
    __Vfunc_aes_mul_gf2p4__1572__c = __Vfunc_aes_mul_gf2p2__1575__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1572__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1572__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1576__g 
                        = __Vfunc_aes_mul_gf2p4__1572__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1576__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1576__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1576__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1576__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1576__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1576__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1572__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1572__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1577__g 
                        = __Vfunc_aes_mul_gf2p4__1572__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1577__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1577__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1577__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1577__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1577__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1577__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1572__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1572__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1572__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1578__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__1578__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1578__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12335001349856834502ull);
    __Vfunc_aes_mul_gf2p2__1579__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1578__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1579__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1578__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1579__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1579__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1579__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1579__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1579__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1579__d)));
    __Vfunc_aes_mul_gf2p2__1579__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1579__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1579__d)));
    __Vfunc_aes_mul_gf2p2__1579__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1579__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1579__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1579__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1579__b)));
    __Vfunc_aes_mul_gf2p2__1579__Vfuncout = __Vfunc_aes_mul_gf2p2__1579__f;
    __Vfunc_aes_mul_gf2p4__1578__a = __Vfunc_aes_mul_gf2p2__1579__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1580__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1578__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1578__delta)));
    __Vfunc_aes_mul_gf2p2__1580__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1578__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1578__gamma)));
    __Vfunc_aes_mul_gf2p2__1580__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1580__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1580__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1580__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1580__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1580__d)));
    __Vfunc_aes_mul_gf2p2__1580__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1580__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1580__d)));
    __Vfunc_aes_mul_gf2p2__1580__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1580__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1580__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1580__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1580__b)));
    __Vfunc_aes_mul_gf2p2__1580__Vfuncout = __Vfunc_aes_mul_gf2p2__1580__f;
    __Vfunc_aes_mul_gf2p4__1578__b = __Vfunc_aes_mul_gf2p2__1580__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1581__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1578__delta));
    __Vfunc_aes_mul_gf2p2__1581__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1578__gamma));
    __Vfunc_aes_mul_gf2p2__1581__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1581__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1581__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1581__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1581__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1581__d)));
    __Vfunc_aes_mul_gf2p2__1581__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1581__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1581__d)));
    __Vfunc_aes_mul_gf2p2__1581__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1581__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1581__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1581__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1581__b)));
    __Vfunc_aes_mul_gf2p2__1581__Vfuncout = __Vfunc_aes_mul_gf2p2__1581__f;
    __Vfunc_aes_mul_gf2p4__1578__c = __Vfunc_aes_mul_gf2p2__1581__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1578__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1578__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1582__g 
                        = __Vfunc_aes_mul_gf2p4__1578__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1582__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1582__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1582__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1582__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1582__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1582__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1578__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1578__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1583__g 
                        = __Vfunc_aes_mul_gf2p4__1578__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1583__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1583__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1583__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1583__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1583__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1583__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1578__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1578__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1578__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1596__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1596__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1596__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1596__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1596__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1596__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1596__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1596__d)));
    __Vfunc_aes_mul_gf2p2__1596__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1596__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1596__d)));
    __Vfunc_aes_mul_gf2p2__1596__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1596__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1596__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1596__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1596__b)));
    __Vfunc_aes_mul_gf2p2__1596__Vfuncout = __Vfunc_aes_mul_gf2p2__1596__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1596__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1597__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1597__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1597__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1597__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1597__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1597__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1597__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1597__d)));
    __Vfunc_aes_mul_gf2p2__1597__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1597__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1597__d)));
    __Vfunc_aes_mul_gf2p2__1597__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1597__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1597__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1597__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1597__b)));
    __Vfunc_aes_mul_gf2p2__1597__Vfuncout = __Vfunc_aes_mul_gf2p2__1597__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1597__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1600__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1600__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1600__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1600__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1600__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1600__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1600__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1600__d)));
    __Vfunc_aes_mul_gf2p2__1600__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1600__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1600__d)));
    __Vfunc_aes_mul_gf2p2__1600__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1600__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1600__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1600__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1600__b)));
    __Vfunc_aes_mul_gf2p2__1600__Vfuncout = __Vfunc_aes_mul_gf2p2__1600__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1600__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1601__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1601__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1601__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1601__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1601__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1601__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1601__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1601__d)));
    __Vfunc_aes_mul_gf2p2__1601__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1601__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1601__d)));
    __Vfunc_aes_mul_gf2p2__1601__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1601__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1601__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1601__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1601__b)));
    __Vfunc_aes_mul_gf2p2__1601__Vfuncout = __Vfunc_aes_mul_gf2p2__1601__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1601__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1546__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1546__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1546__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1546__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1546__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1547__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1547__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1547__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1547__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1547__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1548__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1548__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1548__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__1548__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1548__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1549__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1549__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1549__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1549__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1549__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1550__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1550__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1550__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1550__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1550__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1551__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1551__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1551__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1551__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1551__Vfuncout))));
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
    __Vfunc_aes_square_gf2p2__1585__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__1585__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1585__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1585__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1585__Vfuncout = __Vfunc_aes_square_gf2p2__1585__d;
    __Vfunc_aes_scale_omega2_gf2p2__1584__g = __Vfunc_aes_square_gf2p2__1585__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1584__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1584__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1584__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1584__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1584__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1584__Vfuncout;
    __Vfunc_aes_square_gf2p2__1587__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__1587__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1587__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1587__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1587__Vfuncout = __Vfunc_aes_square_gf2p2__1587__d;
    __Vfunc_aes_scale_omega2_gf2p2__1586__g = __Vfunc_aes_square_gf2p2__1587__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1586__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1586__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1586__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1586__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1586__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1586__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1602__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__1602__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1602__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10871619517342603726ull);
    __Vfunc_aes_mul_gf2p2__1603__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1602__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1603__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1602__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1603__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1603__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1603__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1603__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1603__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1603__d)));
    __Vfunc_aes_mul_gf2p2__1603__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1603__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1603__d)));
    __Vfunc_aes_mul_gf2p2__1603__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1603__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1603__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1603__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1603__b)));
    __Vfunc_aes_mul_gf2p2__1603__Vfuncout = __Vfunc_aes_mul_gf2p2__1603__f;
    __Vfunc_aes_mul_gf2p4__1602__a = __Vfunc_aes_mul_gf2p2__1603__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1604__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1602__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1602__delta)));
    __Vfunc_aes_mul_gf2p2__1604__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1602__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1602__gamma)));
    __Vfunc_aes_mul_gf2p2__1604__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1604__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1604__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1604__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1604__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1604__d)));
    __Vfunc_aes_mul_gf2p2__1604__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1604__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1604__d)));
    __Vfunc_aes_mul_gf2p2__1604__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1604__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1604__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1604__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1604__b)));
    __Vfunc_aes_mul_gf2p2__1604__Vfuncout = __Vfunc_aes_mul_gf2p2__1604__f;
    __Vfunc_aes_mul_gf2p4__1602__b = __Vfunc_aes_mul_gf2p2__1604__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1605__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1602__delta));
    __Vfunc_aes_mul_gf2p2__1605__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1602__gamma));
    __Vfunc_aes_mul_gf2p2__1605__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1605__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1605__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1605__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1605__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1605__d)));
    __Vfunc_aes_mul_gf2p2__1605__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1605__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1605__d)));
    __Vfunc_aes_mul_gf2p2__1605__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1605__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1605__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1605__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1605__b)));
    __Vfunc_aes_mul_gf2p2__1605__Vfuncout = __Vfunc_aes_mul_gf2p2__1605__f;
    __Vfunc_aes_mul_gf2p4__1602__c = __Vfunc_aes_mul_gf2p2__1605__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1602__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1602__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1606__g 
                        = __Vfunc_aes_mul_gf2p4__1602__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1606__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1606__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1606__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1606__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1606__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1606__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1602__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1602__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1607__g 
                        = __Vfunc_aes_mul_gf2p4__1602__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1607__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1607__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1607__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1607__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1607__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1607__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1602__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1602__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1602__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1620__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__1620__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1620__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11874539878861303015ull);
    __Vfunc_aes_mul_gf2p2__1621__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1620__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1621__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1620__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1621__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1621__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1621__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1621__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1621__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1621__d)));
    __Vfunc_aes_mul_gf2p2__1621__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1621__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1621__d)));
    __Vfunc_aes_mul_gf2p2__1621__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1621__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1621__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1621__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1621__b)));
    __Vfunc_aes_mul_gf2p2__1621__Vfuncout = __Vfunc_aes_mul_gf2p2__1621__f;
    __Vfunc_aes_mul_gf2p4__1620__a = __Vfunc_aes_mul_gf2p2__1621__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1622__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1620__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1620__delta)));
    __Vfunc_aes_mul_gf2p2__1622__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1620__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1620__gamma)));
    __Vfunc_aes_mul_gf2p2__1622__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1622__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1622__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1622__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1622__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1622__d)));
    __Vfunc_aes_mul_gf2p2__1622__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1622__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1622__d)));
    __Vfunc_aes_mul_gf2p2__1622__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1622__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1622__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1622__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1622__b)));
    __Vfunc_aes_mul_gf2p2__1622__Vfuncout = __Vfunc_aes_mul_gf2p2__1622__f;
    __Vfunc_aes_mul_gf2p4__1620__b = __Vfunc_aes_mul_gf2p2__1622__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1623__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1620__delta));
    __Vfunc_aes_mul_gf2p2__1623__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1620__gamma));
    __Vfunc_aes_mul_gf2p2__1623__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1623__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1623__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1623__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1623__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1623__d)));
    __Vfunc_aes_mul_gf2p2__1623__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1623__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1623__d)));
    __Vfunc_aes_mul_gf2p2__1623__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1623__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1623__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1623__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1623__b)));
    __Vfunc_aes_mul_gf2p2__1623__Vfuncout = __Vfunc_aes_mul_gf2p2__1623__f;
    __Vfunc_aes_mul_gf2p4__1620__c = __Vfunc_aes_mul_gf2p2__1623__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1620__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1620__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1624__g 
                        = __Vfunc_aes_mul_gf2p4__1620__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1624__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1624__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1624__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1624__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1624__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1624__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1620__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1620__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1625__g 
                        = __Vfunc_aes_mul_gf2p4__1620__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1625__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1625__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1625__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1625__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1625__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1625__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1620__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1620__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1620__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1626__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__1626__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6607704370549263906ull);
    __Vfunc_aes_mul_gf2p2__1627__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1626__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1627__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1626__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1627__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1627__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1627__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1627__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1627__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1627__d)));
    __Vfunc_aes_mul_gf2p2__1627__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1627__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1627__d)));
    __Vfunc_aes_mul_gf2p2__1627__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1627__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1627__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1627__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1627__b)));
    __Vfunc_aes_mul_gf2p2__1627__Vfuncout = __Vfunc_aes_mul_gf2p2__1627__f;
    __Vfunc_aes_mul_gf2p4__1626__a = __Vfunc_aes_mul_gf2p2__1627__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1628__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1626__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1626__delta)));
    __Vfunc_aes_mul_gf2p2__1628__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1626__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1626__gamma)));
    __Vfunc_aes_mul_gf2p2__1628__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1628__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1628__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1628__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1628__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1628__d)));
    __Vfunc_aes_mul_gf2p2__1628__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1628__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1628__d)));
    __Vfunc_aes_mul_gf2p2__1628__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1628__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1628__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1628__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1628__b)));
    __Vfunc_aes_mul_gf2p2__1628__Vfuncout = __Vfunc_aes_mul_gf2p2__1628__f;
    __Vfunc_aes_mul_gf2p4__1626__b = __Vfunc_aes_mul_gf2p2__1628__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1629__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1626__delta));
    __Vfunc_aes_mul_gf2p2__1629__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1626__gamma));
    __Vfunc_aes_mul_gf2p2__1629__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1629__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1629__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1629__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1629__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1629__d)));
    __Vfunc_aes_mul_gf2p2__1629__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1629__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1629__d)));
    __Vfunc_aes_mul_gf2p2__1629__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1629__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1629__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1629__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1629__b)));
    __Vfunc_aes_mul_gf2p2__1629__Vfuncout = __Vfunc_aes_mul_gf2p2__1629__f;
    __Vfunc_aes_mul_gf2p4__1626__c = __Vfunc_aes_mul_gf2p2__1629__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1626__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1626__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1630__g 
                        = __Vfunc_aes_mul_gf2p4__1626__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1630__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1630__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1630__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1630__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1630__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1630__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1626__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1626__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1631__g 
                        = __Vfunc_aes_mul_gf2p4__1626__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1631__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1631__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1631__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1631__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1631__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1631__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1626__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1626__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1626__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1638__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1638__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2305188044366456925ull);
    __Vfunc_aes_mul_gf2p2__1639__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1638__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1639__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1638__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1639__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1639__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1639__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1639__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1639__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1639__d)));
    __Vfunc_aes_mul_gf2p2__1639__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1639__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1639__d)));
    __Vfunc_aes_mul_gf2p2__1639__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1639__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1639__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1639__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1639__b)));
    __Vfunc_aes_mul_gf2p2__1639__Vfuncout = __Vfunc_aes_mul_gf2p2__1639__f;
    __Vfunc_aes_mul_gf2p4__1638__a = __Vfunc_aes_mul_gf2p2__1639__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1640__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1638__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1638__delta)));
    __Vfunc_aes_mul_gf2p2__1640__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1638__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1638__gamma)));
    __Vfunc_aes_mul_gf2p2__1640__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1640__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1640__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1640__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1640__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1640__d)));
    __Vfunc_aes_mul_gf2p2__1640__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1640__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1640__d)));
    __Vfunc_aes_mul_gf2p2__1640__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1640__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1640__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1640__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1640__b)));
    __Vfunc_aes_mul_gf2p2__1640__Vfuncout = __Vfunc_aes_mul_gf2p2__1640__f;
    __Vfunc_aes_mul_gf2p4__1638__b = __Vfunc_aes_mul_gf2p2__1640__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1641__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1638__delta));
    __Vfunc_aes_mul_gf2p2__1641__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1638__gamma));
    __Vfunc_aes_mul_gf2p2__1641__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1641__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1641__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1641__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1641__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1641__d)));
    __Vfunc_aes_mul_gf2p2__1641__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1641__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1641__d)));
    __Vfunc_aes_mul_gf2p2__1641__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1641__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1641__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1641__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1641__b)));
    __Vfunc_aes_mul_gf2p2__1641__Vfuncout = __Vfunc_aes_mul_gf2p2__1641__f;
    __Vfunc_aes_mul_gf2p4__1638__c = __Vfunc_aes_mul_gf2p2__1641__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1638__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1638__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1642__g 
                        = __Vfunc_aes_mul_gf2p4__1638__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1642__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1642__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1642__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1642__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1642__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1642__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1638__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1638__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1643__g 
                        = __Vfunc_aes_mul_gf2p4__1638__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1643__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1643__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1643__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1643__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1643__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1643__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1638__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1638__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1638__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1608__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1608__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1608__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13796964484431521991ull);
    __Vfunc_aes_mul_gf2p2__1609__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1608__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1609__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1608__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1609__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1609__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1609__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1609__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1609__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1609__d)));
    __Vfunc_aes_mul_gf2p2__1609__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1609__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1609__d)));
    __Vfunc_aes_mul_gf2p2__1609__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1609__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1609__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1609__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1609__b)));
    __Vfunc_aes_mul_gf2p2__1609__Vfuncout = __Vfunc_aes_mul_gf2p2__1609__f;
    __Vfunc_aes_mul_gf2p4__1608__a = __Vfunc_aes_mul_gf2p2__1609__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1610__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1608__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1608__delta)));
    __Vfunc_aes_mul_gf2p2__1610__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1608__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1608__gamma)));
    __Vfunc_aes_mul_gf2p2__1610__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1610__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1610__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1610__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1610__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1610__d)));
    __Vfunc_aes_mul_gf2p2__1610__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1610__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1610__d)));
    __Vfunc_aes_mul_gf2p2__1610__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1610__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1610__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1610__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1610__b)));
    __Vfunc_aes_mul_gf2p2__1610__Vfuncout = __Vfunc_aes_mul_gf2p2__1610__f;
    __Vfunc_aes_mul_gf2p4__1608__b = __Vfunc_aes_mul_gf2p2__1610__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1611__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1608__delta));
    __Vfunc_aes_mul_gf2p2__1611__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1608__gamma));
    __Vfunc_aes_mul_gf2p2__1611__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1611__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1611__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1611__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1611__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1611__d)));
    __Vfunc_aes_mul_gf2p2__1611__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1611__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1611__d)));
    __Vfunc_aes_mul_gf2p2__1611__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1611__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1611__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1611__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1611__b)));
    __Vfunc_aes_mul_gf2p2__1611__Vfuncout = __Vfunc_aes_mul_gf2p2__1611__f;
    __Vfunc_aes_mul_gf2p4__1608__c = __Vfunc_aes_mul_gf2p2__1611__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1608__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1608__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1612__g 
                        = __Vfunc_aes_mul_gf2p4__1608__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1612__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1612__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1612__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1612__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1612__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1612__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1608__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1608__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1613__g 
                        = __Vfunc_aes_mul_gf2p4__1608__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1613__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1613__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1613__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1613__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1613__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1613__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1608__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1608__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1608__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1614__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1614__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1614__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15497169801740238370ull);
    __Vfunc_aes_mul_gf2p2__1615__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1614__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1615__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1614__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1615__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1615__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1615__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1615__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1615__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1615__d)));
    __Vfunc_aes_mul_gf2p2__1615__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1615__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1615__d)));
    __Vfunc_aes_mul_gf2p2__1615__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1615__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1615__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1615__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1615__b)));
    __Vfunc_aes_mul_gf2p2__1615__Vfuncout = __Vfunc_aes_mul_gf2p2__1615__f;
    __Vfunc_aes_mul_gf2p4__1614__a = __Vfunc_aes_mul_gf2p2__1615__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1616__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1614__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1614__delta)));
    __Vfunc_aes_mul_gf2p2__1616__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1614__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1614__gamma)));
    __Vfunc_aes_mul_gf2p2__1616__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1616__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1616__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1616__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1616__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1616__d)));
    __Vfunc_aes_mul_gf2p2__1616__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1616__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1616__d)));
    __Vfunc_aes_mul_gf2p2__1616__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1616__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1616__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1616__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1616__b)));
    __Vfunc_aes_mul_gf2p2__1616__Vfuncout = __Vfunc_aes_mul_gf2p2__1616__f;
    __Vfunc_aes_mul_gf2p4__1614__b = __Vfunc_aes_mul_gf2p2__1616__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1617__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1614__delta));
    __Vfunc_aes_mul_gf2p2__1617__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1614__gamma));
    __Vfunc_aes_mul_gf2p2__1617__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1617__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1617__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1617__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1617__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1617__d)));
    __Vfunc_aes_mul_gf2p2__1617__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1617__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1617__d)));
    __Vfunc_aes_mul_gf2p2__1617__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1617__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1617__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1617__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1617__b)));
    __Vfunc_aes_mul_gf2p2__1617__Vfuncout = __Vfunc_aes_mul_gf2p2__1617__f;
    __Vfunc_aes_mul_gf2p4__1614__c = __Vfunc_aes_mul_gf2p2__1617__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1614__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1614__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1618__g 
                        = __Vfunc_aes_mul_gf2p4__1614__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1618__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1618__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1618__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1618__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1618__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1618__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1614__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1614__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1619__g 
                        = __Vfunc_aes_mul_gf2p4__1614__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1619__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1619__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1619__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1619__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1619__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1619__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1614__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1614__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1614__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1632__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1632__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1632__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1057619790265014236ull);
    __Vfunc_aes_mul_gf2p2__1633__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1632__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1633__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1632__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1633__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1633__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1633__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1633__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1633__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1633__d)));
    __Vfunc_aes_mul_gf2p2__1633__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1633__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1633__d)));
    __Vfunc_aes_mul_gf2p2__1633__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1633__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1633__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1633__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1633__b)));
    __Vfunc_aes_mul_gf2p2__1633__Vfuncout = __Vfunc_aes_mul_gf2p2__1633__f;
    __Vfunc_aes_mul_gf2p4__1632__a = __Vfunc_aes_mul_gf2p2__1633__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1634__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1632__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1632__delta)));
    __Vfunc_aes_mul_gf2p2__1634__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1632__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1632__gamma)));
    __Vfunc_aes_mul_gf2p2__1634__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1634__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1634__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1634__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1634__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1634__d)));
    __Vfunc_aes_mul_gf2p2__1634__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1634__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1634__d)));
    __Vfunc_aes_mul_gf2p2__1634__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1634__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1634__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1634__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1634__b)));
    __Vfunc_aes_mul_gf2p2__1634__Vfuncout = __Vfunc_aes_mul_gf2p2__1634__f;
    __Vfunc_aes_mul_gf2p4__1632__b = __Vfunc_aes_mul_gf2p2__1634__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1635__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1632__delta));
    __Vfunc_aes_mul_gf2p2__1635__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1632__gamma));
    __Vfunc_aes_mul_gf2p2__1635__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1635__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1635__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1635__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1635__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1635__d)));
    __Vfunc_aes_mul_gf2p2__1635__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1635__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1635__d)));
    __Vfunc_aes_mul_gf2p2__1635__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1635__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1635__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1635__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1635__b)));
    __Vfunc_aes_mul_gf2p2__1635__Vfuncout = __Vfunc_aes_mul_gf2p2__1635__f;
    __Vfunc_aes_mul_gf2p4__1632__c = __Vfunc_aes_mul_gf2p2__1635__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1632__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1632__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1636__g 
                        = __Vfunc_aes_mul_gf2p4__1632__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1636__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1636__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1636__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1636__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1636__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1636__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1632__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1632__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1637__g 
                        = __Vfunc_aes_mul_gf2p4__1632__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1637__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1637__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1637__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1637__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1637__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1637__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1632__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1632__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1632__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1644__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1644__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1644__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18285066340989490951ull);
    __Vfunc_aes_mul_gf2p2__1645__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1644__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1645__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1644__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1645__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1645__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1645__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1645__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1645__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1645__d)));
    __Vfunc_aes_mul_gf2p2__1645__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1645__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1645__d)));
    __Vfunc_aes_mul_gf2p2__1645__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1645__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1645__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1645__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1645__b)));
    __Vfunc_aes_mul_gf2p2__1645__Vfuncout = __Vfunc_aes_mul_gf2p2__1645__f;
    __Vfunc_aes_mul_gf2p4__1644__a = __Vfunc_aes_mul_gf2p2__1645__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1646__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1644__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1644__delta)));
    __Vfunc_aes_mul_gf2p2__1646__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1644__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1644__gamma)));
    __Vfunc_aes_mul_gf2p2__1646__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1646__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1646__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1646__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1646__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1646__d)));
    __Vfunc_aes_mul_gf2p2__1646__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1646__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1646__d)));
    __Vfunc_aes_mul_gf2p2__1646__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1646__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1646__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1646__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1646__b)));
    __Vfunc_aes_mul_gf2p2__1646__Vfuncout = __Vfunc_aes_mul_gf2p2__1646__f;
    __Vfunc_aes_mul_gf2p4__1644__b = __Vfunc_aes_mul_gf2p2__1646__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1647__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1644__delta));
    __Vfunc_aes_mul_gf2p2__1647__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1644__gamma));
    __Vfunc_aes_mul_gf2p2__1647__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1647__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1647__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1647__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1647__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1647__d)));
    __Vfunc_aes_mul_gf2p2__1647__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1647__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1647__d)));
    __Vfunc_aes_mul_gf2p2__1647__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1647__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1647__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1647__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1647__b)));
    __Vfunc_aes_mul_gf2p2__1647__Vfuncout = __Vfunc_aes_mul_gf2p2__1647__f;
    __Vfunc_aes_mul_gf2p4__1644__c = __Vfunc_aes_mul_gf2p2__1647__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1644__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1644__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1648__g 
                        = __Vfunc_aes_mul_gf2p4__1644__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1648__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1648__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1648__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1648__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1648__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1648__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1644__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1644__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1649__g 
                        = __Vfunc_aes_mul_gf2p4__1644__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1649__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1649__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1649__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1649__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1649__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1649__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1644__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1644__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1644__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1592__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1592__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1592__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1592__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1592__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1592__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1592__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1592__d)));
    __Vfunc_aes_mul_gf2p2__1592__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1592__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1592__d)));
    __Vfunc_aes_mul_gf2p2__1592__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1592__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1592__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1592__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1592__b)));
    __Vfunc_aes_mul_gf2p2__1592__Vfuncout = __Vfunc_aes_mul_gf2p2__1592__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1592__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1593__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1593__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1593__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1593__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1593__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1593__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1593__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1593__d)));
    __Vfunc_aes_mul_gf2p2__1593__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1593__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1593__d)));
    __Vfunc_aes_mul_gf2p2__1593__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1593__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1593__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1593__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1593__b)));
    __Vfunc_aes_mul_gf2p2__1593__Vfuncout = __Vfunc_aes_mul_gf2p2__1593__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1593__Vfuncout;
    __Vfunc_aes_square_gf2p2__1588__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__1588__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1588__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1588__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1588__Vfuncout = __Vfunc_aes_square_gf2p2__1588__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1588__Vfuncout;
    __Vfunc_aes_square_gf2p2__1589__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1589__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1589__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1589__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1589__Vfuncout = __Vfunc_aes_square_gf2p2__1589__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1589__Vfuncout;
}

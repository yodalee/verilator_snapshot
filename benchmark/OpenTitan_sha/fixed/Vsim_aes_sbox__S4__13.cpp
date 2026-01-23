// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1340__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1340__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1340__gamma;
    __Vfunc_aes_mul_gf2p4__1340__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1340__delta;
    __Vfunc_aes_mul_gf2p4__1340__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1340__a;
    __Vfunc_aes_mul_gf2p4__1340__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1340__b;
    __Vfunc_aes_mul_gf2p4__1340__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1340__c;
    __Vfunc_aes_mul_gf2p4__1340__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1341__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1341__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1341__g;
    __Vfunc_aes_mul_gf2p2__1341__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1341__d;
    __Vfunc_aes_mul_gf2p2__1341__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1341__f;
    __Vfunc_aes_mul_gf2p2__1341__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1341__a;
    __Vfunc_aes_mul_gf2p2__1341__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1341__b;
    __Vfunc_aes_mul_gf2p2__1341__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1341__c;
    __Vfunc_aes_mul_gf2p2__1341__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1342__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1342__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1342__g;
    __Vfunc_aes_mul_gf2p2__1342__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1342__d;
    __Vfunc_aes_mul_gf2p2__1342__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1342__f;
    __Vfunc_aes_mul_gf2p2__1342__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1342__a;
    __Vfunc_aes_mul_gf2p2__1342__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1342__b;
    __Vfunc_aes_mul_gf2p2__1342__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1342__c;
    __Vfunc_aes_mul_gf2p2__1342__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1343__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1343__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1343__g;
    __Vfunc_aes_mul_gf2p2__1343__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1343__d;
    __Vfunc_aes_mul_gf2p2__1343__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1343__f;
    __Vfunc_aes_mul_gf2p2__1343__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1343__a;
    __Vfunc_aes_mul_gf2p2__1343__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1343__b;
    __Vfunc_aes_mul_gf2p2__1343__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1343__c;
    __Vfunc_aes_mul_gf2p2__1343__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1346__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1346__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1346__gamma;
    __Vfunc_aes_mul_gf2p4__1346__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1346__delta;
    __Vfunc_aes_mul_gf2p4__1346__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1346__a;
    __Vfunc_aes_mul_gf2p4__1346__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1346__b;
    __Vfunc_aes_mul_gf2p4__1346__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1346__c;
    __Vfunc_aes_mul_gf2p4__1346__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1347__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1347__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1347__g;
    __Vfunc_aes_mul_gf2p2__1347__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1347__d;
    __Vfunc_aes_mul_gf2p2__1347__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1347__f;
    __Vfunc_aes_mul_gf2p2__1347__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1347__a;
    __Vfunc_aes_mul_gf2p2__1347__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1347__b;
    __Vfunc_aes_mul_gf2p2__1347__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1347__c;
    __Vfunc_aes_mul_gf2p2__1347__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1348__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1348__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1348__g;
    __Vfunc_aes_mul_gf2p2__1348__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1348__d;
    __Vfunc_aes_mul_gf2p2__1348__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1348__f;
    __Vfunc_aes_mul_gf2p2__1348__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1348__a;
    __Vfunc_aes_mul_gf2p2__1348__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1348__b;
    __Vfunc_aes_mul_gf2p2__1348__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1348__c;
    __Vfunc_aes_mul_gf2p2__1348__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1349__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1349__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1349__g;
    __Vfunc_aes_mul_gf2p2__1349__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1349__d;
    __Vfunc_aes_mul_gf2p2__1349__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1349__f;
    __Vfunc_aes_mul_gf2p2__1349__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1349__a;
    __Vfunc_aes_mul_gf2p2__1349__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1349__b;
    __Vfunc_aes_mul_gf2p2__1349__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1349__c;
    __Vfunc_aes_mul_gf2p2__1349__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1370__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1370__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1370__g;
    __Vfunc_aes_mul_gf2p2__1370__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1370__d;
    __Vfunc_aes_mul_gf2p2__1370__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1370__f;
    __Vfunc_aes_mul_gf2p2__1370__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1370__a;
    __Vfunc_aes_mul_gf2p2__1370__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1370__b;
    __Vfunc_aes_mul_gf2p2__1370__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1370__c;
    __Vfunc_aes_mul_gf2p2__1370__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1371__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1371__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1371__g;
    __Vfunc_aes_mul_gf2p2__1371__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1371__d;
    __Vfunc_aes_mul_gf2p2__1371__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1371__f;
    __Vfunc_aes_mul_gf2p2__1371__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1371__a;
    __Vfunc_aes_mul_gf2p2__1371__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1371__b;
    __Vfunc_aes_mul_gf2p2__1371__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1371__c;
    __Vfunc_aes_mul_gf2p2__1371__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1374__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1374__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1374__g;
    __Vfunc_aes_mul_gf2p2__1374__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1374__d;
    __Vfunc_aes_mul_gf2p2__1374__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1374__f;
    __Vfunc_aes_mul_gf2p2__1374__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1374__a;
    __Vfunc_aes_mul_gf2p2__1374__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1374__b;
    __Vfunc_aes_mul_gf2p2__1374__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1374__c;
    __Vfunc_aes_mul_gf2p2__1374__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1375__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1375__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1375__g;
    __Vfunc_aes_mul_gf2p2__1375__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1375__d;
    __Vfunc_aes_mul_gf2p2__1375__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1375__f;
    __Vfunc_aes_mul_gf2p2__1375__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1375__a;
    __Vfunc_aes_mul_gf2p2__1375__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1375__b;
    __Vfunc_aes_mul_gf2p2__1375__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1375__c;
    __Vfunc_aes_mul_gf2p2__1375__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1378__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1378__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1378__g;
    __Vfunc_aes_mul_gf2p2__1378__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1378__d;
    __Vfunc_aes_mul_gf2p2__1378__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1378__f;
    __Vfunc_aes_mul_gf2p2__1378__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1378__a;
    __Vfunc_aes_mul_gf2p2__1378__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1378__b;
    __Vfunc_aes_mul_gf2p2__1378__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1378__c;
    __Vfunc_aes_mul_gf2p2__1378__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1379__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1379__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1379__g;
    __Vfunc_aes_mul_gf2p2__1379__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1379__d;
    __Vfunc_aes_mul_gf2p2__1379__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1379__f;
    __Vfunc_aes_mul_gf2p2__1379__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1379__a;
    __Vfunc_aes_mul_gf2p2__1379__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1379__b;
    __Vfunc_aes_mul_gf2p2__1379__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1379__c;
    __Vfunc_aes_mul_gf2p2__1379__c = 0;
    // Body
    __Vfunc_aes_mul_gf2p2__1370__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1370__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1370__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1370__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1370__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1370__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1370__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1370__d)));
    __Vfunc_aes_mul_gf2p2__1370__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1370__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1370__d)));
    __Vfunc_aes_mul_gf2p2__1370__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1370__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1370__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1370__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1370__b)));
    __Vfunc_aes_mul_gf2p2__1370__Vfuncout = __Vfunc_aes_mul_gf2p2__1370__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1370__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1371__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1371__g = (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1371__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1371__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1371__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1371__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1371__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1371__d)));
    __Vfunc_aes_mul_gf2p2__1371__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1371__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1371__d)));
    __Vfunc_aes_mul_gf2p2__1371__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1371__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1371__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1371__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1371__b)));
    __Vfunc_aes_mul_gf2p2__1371__Vfuncout = __Vfunc_aes_mul_gf2p2__1371__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1371__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1374__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1374__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1374__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1374__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1374__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1374__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1374__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1374__d)));
    __Vfunc_aes_mul_gf2p2__1374__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1374__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1374__d)));
    __Vfunc_aes_mul_gf2p2__1374__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1374__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1374__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1374__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1374__b)));
    __Vfunc_aes_mul_gf2p2__1374__Vfuncout = __Vfunc_aes_mul_gf2p2__1374__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1374__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1375__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 0x00000010U));
    __Vfunc_aes_mul_gf2p2__1375__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1375__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1375__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1375__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1375__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1375__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1375__d)));
    __Vfunc_aes_mul_gf2p2__1375__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1375__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1375__d)));
    __Vfunc_aes_mul_gf2p2__1375__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1375__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1375__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1375__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1375__b)));
    __Vfunc_aes_mul_gf2p2__1375__Vfuncout = __Vfunc_aes_mul_gf2p2__1375__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1375__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1340__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__111__03a84__KET__);
    __Vfunc_aes_mul_gf2p4__1340__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                             >> 4U));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1340__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5593992903653605322ull);
    __Vfunc_aes_mul_gf2p2__1341__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1340__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1341__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1340__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1341__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1341__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1341__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1341__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1341__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1341__d)));
    __Vfunc_aes_mul_gf2p2__1341__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1341__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1341__d)));
    __Vfunc_aes_mul_gf2p2__1341__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1341__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1341__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1341__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1341__b)));
    __Vfunc_aes_mul_gf2p2__1341__Vfuncout = __Vfunc_aes_mul_gf2p2__1341__f;
    __Vfunc_aes_mul_gf2p4__1340__a = __Vfunc_aes_mul_gf2p2__1341__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1342__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1340__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1340__delta)));
    __Vfunc_aes_mul_gf2p2__1342__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1340__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1340__gamma)));
    __Vfunc_aes_mul_gf2p2__1342__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1342__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1342__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1342__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1342__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1342__d)));
    __Vfunc_aes_mul_gf2p2__1342__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1342__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1342__d)));
    __Vfunc_aes_mul_gf2p2__1342__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1342__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1342__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1342__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1342__b)));
    __Vfunc_aes_mul_gf2p2__1342__Vfuncout = __Vfunc_aes_mul_gf2p2__1342__f;
    __Vfunc_aes_mul_gf2p4__1340__b = __Vfunc_aes_mul_gf2p2__1342__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1343__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1340__delta));
    __Vfunc_aes_mul_gf2p2__1343__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1340__gamma));
    __Vfunc_aes_mul_gf2p2__1343__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1343__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1343__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1343__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1343__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1343__d)));
    __Vfunc_aes_mul_gf2p2__1343__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1343__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1343__d)));
    __Vfunc_aes_mul_gf2p2__1343__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1343__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1343__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1343__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1343__b)));
    __Vfunc_aes_mul_gf2p2__1343__Vfuncout = __Vfunc_aes_mul_gf2p2__1343__f;
    __Vfunc_aes_mul_gf2p4__1340__c = __Vfunc_aes_mul_gf2p2__1343__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1340__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1340__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1344__g 
                        = __Vfunc_aes_mul_gf2p4__1340__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1344__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1344__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1344__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1344__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1344__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1344__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1340__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1340__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1345__g 
                        = __Vfunc_aes_mul_gf2p4__1340__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1345__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1345__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1345__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1345__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1345__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1345__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1340__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1340__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__1340__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1346__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__111__03a84__KET__);
    __Vfunc_aes_mul_gf2p4__1346__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1346__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6166150706485491732ull);
    __Vfunc_aes_mul_gf2p2__1347__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1346__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1347__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1346__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1347__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1347__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1347__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1347__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1347__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1347__d)));
    __Vfunc_aes_mul_gf2p2__1347__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1347__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1347__d)));
    __Vfunc_aes_mul_gf2p2__1347__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1347__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1347__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1347__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1347__b)));
    __Vfunc_aes_mul_gf2p2__1347__Vfuncout = __Vfunc_aes_mul_gf2p2__1347__f;
    __Vfunc_aes_mul_gf2p4__1346__a = __Vfunc_aes_mul_gf2p2__1347__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1348__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1346__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1346__delta)));
    __Vfunc_aes_mul_gf2p2__1348__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1346__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1346__gamma)));
    __Vfunc_aes_mul_gf2p2__1348__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1348__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1348__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1348__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1348__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1348__d)));
    __Vfunc_aes_mul_gf2p2__1348__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1348__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1348__d)));
    __Vfunc_aes_mul_gf2p2__1348__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1348__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1348__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1348__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1348__b)));
    __Vfunc_aes_mul_gf2p2__1348__Vfuncout = __Vfunc_aes_mul_gf2p2__1348__f;
    __Vfunc_aes_mul_gf2p4__1346__b = __Vfunc_aes_mul_gf2p2__1348__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1349__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1346__delta));
    __Vfunc_aes_mul_gf2p2__1349__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1346__gamma));
    __Vfunc_aes_mul_gf2p2__1349__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1349__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1349__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1349__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1349__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1349__d)));
    __Vfunc_aes_mul_gf2p2__1349__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1349__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1349__d)));
    __Vfunc_aes_mul_gf2p2__1349__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1349__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1349__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1349__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1349__b)));
    __Vfunc_aes_mul_gf2p2__1349__Vfuncout = __Vfunc_aes_mul_gf2p2__1349__f;
    __Vfunc_aes_mul_gf2p4__1346__c = __Vfunc_aes_mul_gf2p2__1349__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1346__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1346__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1350__g 
                        = __Vfunc_aes_mul_gf2p4__1346__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1350__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1350__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1350__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1350__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1350__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1350__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1346__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1346__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1351__g 
                        = __Vfunc_aes_mul_gf2p4__1346__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1351__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1351__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1351__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1351__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1351__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1351__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1346__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1346__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__1346__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1378__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1378__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega;
    __Vfunc_aes_mul_gf2p2__1378__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1378__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1378__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1378__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1378__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1378__d)));
    __Vfunc_aes_mul_gf2p2__1378__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1378__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1378__d)));
    __Vfunc_aes_mul_gf2p2__1378__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1378__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1378__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1378__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1378__b)));
    __Vfunc_aes_mul_gf2p2__1378__Vfuncout = __Vfunc_aes_mul_gf2p2__1378__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1378__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1379__d = (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__111__03a84__KET__ 
                                            >> 0x0000000cU));
    __Vfunc_aes_mul_gf2p2__1379__g = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega;
    __Vfunc_aes_mul_gf2p2__1379__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1379__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1379__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1379__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1379__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1379__d)));
    __Vfunc_aes_mul_gf2p2__1379__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1379__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1379__d)));
    __Vfunc_aes_mul_gf2p2__1379__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1379__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1379__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1379__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1379__b)));
    __Vfunc_aes_mul_gf2p2__1379__Vfuncout = __Vfunc_aes_mul_gf2p2__1379__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1379__Vfuncout;
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1443__Vfuncout;
    __Vfunc_aes_square_gf2p2__1443__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1443__g;
    __Vfunc_aes_square_gf2p2__1443__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1443__d;
    __Vfunc_aes_square_gf2p2__1443__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1447__Vfuncout;
    __Vfunc_aes_square_gf2p2__1447__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1447__g;
    __Vfunc_aes_square_gf2p2__1447__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1447__d;
    __Vfunc_aes_square_gf2p2__1447__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1462__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1462__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1462__gamma;
    __Vfunc_aes_mul_gf2p4__1462__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1462__delta;
    __Vfunc_aes_mul_gf2p4__1462__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1462__a;
    __Vfunc_aes_mul_gf2p4__1462__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1462__b;
    __Vfunc_aes_mul_gf2p4__1462__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1462__c;
    __Vfunc_aes_mul_gf2p4__1462__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1463__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1463__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1463__g;
    __Vfunc_aes_mul_gf2p2__1463__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1463__d;
    __Vfunc_aes_mul_gf2p2__1463__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1463__f;
    __Vfunc_aes_mul_gf2p2__1463__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1463__a;
    __Vfunc_aes_mul_gf2p2__1463__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1463__b;
    __Vfunc_aes_mul_gf2p2__1463__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1463__c;
    __Vfunc_aes_mul_gf2p2__1463__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1464__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1464__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1464__g;
    __Vfunc_aes_mul_gf2p2__1464__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1464__d;
    __Vfunc_aes_mul_gf2p2__1464__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1464__f;
    __Vfunc_aes_mul_gf2p2__1464__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1464__a;
    __Vfunc_aes_mul_gf2p2__1464__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1464__b;
    __Vfunc_aes_mul_gf2p2__1464__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1464__c;
    __Vfunc_aes_mul_gf2p2__1464__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1465__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1465__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1465__g;
    __Vfunc_aes_mul_gf2p2__1465__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1465__d;
    __Vfunc_aes_mul_gf2p2__1465__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1465__f;
    __Vfunc_aes_mul_gf2p2__1465__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1465__a;
    __Vfunc_aes_mul_gf2p2__1465__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1465__b;
    __Vfunc_aes_mul_gf2p2__1465__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1465__c;
    __Vfunc_aes_mul_gf2p2__1465__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1468__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1468__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1468__gamma;
    __Vfunc_aes_mul_gf2p4__1468__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1468__delta;
    __Vfunc_aes_mul_gf2p4__1468__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1468__a;
    __Vfunc_aes_mul_gf2p4__1468__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1468__b;
    __Vfunc_aes_mul_gf2p4__1468__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1468__c;
    __Vfunc_aes_mul_gf2p4__1468__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1469__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1469__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1469__g;
    __Vfunc_aes_mul_gf2p2__1469__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1469__d;
    __Vfunc_aes_mul_gf2p2__1469__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1469__f;
    __Vfunc_aes_mul_gf2p2__1469__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1469__a;
    __Vfunc_aes_mul_gf2p2__1469__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1469__b;
    __Vfunc_aes_mul_gf2p2__1469__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1469__c;
    __Vfunc_aes_mul_gf2p2__1469__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1470__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1470__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1470__g;
    __Vfunc_aes_mul_gf2p2__1470__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1470__d;
    __Vfunc_aes_mul_gf2p2__1470__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1470__f;
    __Vfunc_aes_mul_gf2p2__1470__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1470__a;
    __Vfunc_aes_mul_gf2p2__1470__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1470__b;
    __Vfunc_aes_mul_gf2p2__1470__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1470__c;
    __Vfunc_aes_mul_gf2p2__1470__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1471__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1471__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1471__g;
    __Vfunc_aes_mul_gf2p2__1471__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1471__d;
    __Vfunc_aes_mul_gf2p2__1471__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1471__f;
    __Vfunc_aes_mul_gf2p2__1471__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1471__a;
    __Vfunc_aes_mul_gf2p2__1471__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1471__b;
    __Vfunc_aes_mul_gf2p2__1471__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1471__c;
    __Vfunc_aes_mul_gf2p2__1471__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1474__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1474__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1474__g;
    __Vfunc_aes_scale_omega2_gf2p2__1474__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1474__d;
    __Vfunc_aes_scale_omega2_gf2p2__1474__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1475__Vfuncout;
    __Vfunc_aes_square_gf2p2__1475__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1475__g;
    __Vfunc_aes_square_gf2p2__1475__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1475__d;
    __Vfunc_aes_square_gf2p2__1475__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1476__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1476__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1476__g;
    __Vfunc_aes_scale_omega2_gf2p2__1476__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1476__d;
    __Vfunc_aes_scale_omega2_gf2p2__1476__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1477__Vfuncout;
    __Vfunc_aes_square_gf2p2__1477__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1477__g;
    __Vfunc_aes_square_gf2p2__1477__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1477__d;
    __Vfunc_aes_square_gf2p2__1477__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1478__Vfuncout;
    __Vfunc_aes_square_gf2p2__1478__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1478__g;
    __Vfunc_aes_square_gf2p2__1478__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1478__d;
    __Vfunc_aes_square_gf2p2__1478__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1479__Vfuncout;
    __Vfunc_aes_square_gf2p2__1479__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1479__g;
    __Vfunc_aes_square_gf2p2__1479__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1479__d;
    __Vfunc_aes_square_gf2p2__1479__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1482__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1482__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1482__g;
    __Vfunc_aes_mul_gf2p2__1482__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1482__d;
    __Vfunc_aes_mul_gf2p2__1482__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1482__f;
    __Vfunc_aes_mul_gf2p2__1482__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1482__a;
    __Vfunc_aes_mul_gf2p2__1482__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1482__b;
    __Vfunc_aes_mul_gf2p2__1482__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1482__c;
    __Vfunc_aes_mul_gf2p2__1482__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1483__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1483__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1483__g;
    __Vfunc_aes_mul_gf2p2__1483__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1483__d;
    __Vfunc_aes_mul_gf2p2__1483__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1483__f;
    __Vfunc_aes_mul_gf2p2__1483__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1483__a;
    __Vfunc_aes_mul_gf2p2__1483__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1483__b;
    __Vfunc_aes_mul_gf2p2__1483__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1483__c;
    __Vfunc_aes_mul_gf2p2__1483__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1486__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1486__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1486__g;
    __Vfunc_aes_mul_gf2p2__1486__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1486__d;
    __Vfunc_aes_mul_gf2p2__1486__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1486__f;
    __Vfunc_aes_mul_gf2p2__1486__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1486__a;
    __Vfunc_aes_mul_gf2p2__1486__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1486__b;
    __Vfunc_aes_mul_gf2p2__1486__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1486__c;
    __Vfunc_aes_mul_gf2p2__1486__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1487__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1487__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1487__g;
    __Vfunc_aes_mul_gf2p2__1487__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1487__d;
    __Vfunc_aes_mul_gf2p2__1487__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1487__f;
    __Vfunc_aes_mul_gf2p2__1487__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1487__a;
    __Vfunc_aes_mul_gf2p2__1487__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1487__b;
    __Vfunc_aes_mul_gf2p2__1487__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1487__c;
    __Vfunc_aes_mul_gf2p2__1487__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1490__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1490__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1490__g;
    __Vfunc_aes_mul_gf2p2__1490__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1490__d;
    __Vfunc_aes_mul_gf2p2__1490__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1490__f;
    __Vfunc_aes_mul_gf2p2__1490__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1490__a;
    __Vfunc_aes_mul_gf2p2__1490__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1490__b;
    __Vfunc_aes_mul_gf2p2__1490__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1490__c;
    __Vfunc_aes_mul_gf2p2__1490__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1491__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1491__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1491__g;
    __Vfunc_aes_mul_gf2p2__1491__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1491__d;
    __Vfunc_aes_mul_gf2p2__1491__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1491__f;
    __Vfunc_aes_mul_gf2p2__1491__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1491__a;
    __Vfunc_aes_mul_gf2p2__1491__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1491__b;
    __Vfunc_aes_mul_gf2p2__1491__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1491__c;
    __Vfunc_aes_mul_gf2p2__1491__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1492__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1492__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1492__gamma;
    __Vfunc_aes_mul_gf2p4__1492__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1492__delta;
    __Vfunc_aes_mul_gf2p4__1492__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1492__a;
    __Vfunc_aes_mul_gf2p4__1492__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1492__b;
    __Vfunc_aes_mul_gf2p4__1492__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1492__c;
    __Vfunc_aes_mul_gf2p4__1492__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1493__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1493__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1493__g;
    __Vfunc_aes_mul_gf2p2__1493__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1493__d;
    __Vfunc_aes_mul_gf2p2__1493__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1493__f;
    __Vfunc_aes_mul_gf2p2__1493__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1493__a;
    __Vfunc_aes_mul_gf2p2__1493__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1493__b;
    __Vfunc_aes_mul_gf2p2__1493__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1493__c;
    __Vfunc_aes_mul_gf2p2__1493__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1494__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1494__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1494__g;
    __Vfunc_aes_mul_gf2p2__1494__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1494__d;
    __Vfunc_aes_mul_gf2p2__1494__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1494__f;
    __Vfunc_aes_mul_gf2p2__1494__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1494__a;
    __Vfunc_aes_mul_gf2p2__1494__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1494__b;
    __Vfunc_aes_mul_gf2p2__1494__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1494__c;
    __Vfunc_aes_mul_gf2p2__1494__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1495__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1495__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1495__g;
    __Vfunc_aes_mul_gf2p2__1495__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1495__d;
    __Vfunc_aes_mul_gf2p2__1495__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1495__f;
    __Vfunc_aes_mul_gf2p2__1495__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1495__a;
    __Vfunc_aes_mul_gf2p2__1495__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1495__b;
    __Vfunc_aes_mul_gf2p2__1495__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1495__c;
    __Vfunc_aes_mul_gf2p2__1495__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1498__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1498__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1498__gamma;
    __Vfunc_aes_mul_gf2p4__1498__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1498__delta;
    __Vfunc_aes_mul_gf2p4__1498__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1498__a;
    __Vfunc_aes_mul_gf2p4__1498__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1498__b;
    __Vfunc_aes_mul_gf2p4__1498__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1498__c;
    __Vfunc_aes_mul_gf2p4__1498__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1499__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1499__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1499__g;
    __Vfunc_aes_mul_gf2p2__1499__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1499__d;
    __Vfunc_aes_mul_gf2p2__1499__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1499__f;
    __Vfunc_aes_mul_gf2p2__1499__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1499__a;
    __Vfunc_aes_mul_gf2p2__1499__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1499__b;
    __Vfunc_aes_mul_gf2p2__1499__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1499__c;
    __Vfunc_aes_mul_gf2p2__1499__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1500__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1500__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1500__g;
    __Vfunc_aes_mul_gf2p2__1500__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1500__d;
    __Vfunc_aes_mul_gf2p2__1500__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1500__f;
    __Vfunc_aes_mul_gf2p2__1500__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1500__a;
    __Vfunc_aes_mul_gf2p2__1500__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1500__b;
    __Vfunc_aes_mul_gf2p2__1500__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1500__c;
    __Vfunc_aes_mul_gf2p2__1500__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1501__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1501__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1501__g;
    __Vfunc_aes_mul_gf2p2__1501__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1501__d;
    __Vfunc_aes_mul_gf2p2__1501__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1501__f;
    __Vfunc_aes_mul_gf2p2__1501__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1501__a;
    __Vfunc_aes_mul_gf2p2__1501__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1501__b;
    __Vfunc_aes_mul_gf2p2__1501__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1501__c;
    __Vfunc_aes_mul_gf2p2__1501__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1504__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1504__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1504__gamma;
    __Vfunc_aes_mul_gf2p4__1504__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1504__delta;
    __Vfunc_aes_mul_gf2p4__1504__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1504__a;
    __Vfunc_aes_mul_gf2p4__1504__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1504__b;
    __Vfunc_aes_mul_gf2p4__1504__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1504__c;
    __Vfunc_aes_mul_gf2p4__1504__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1505__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1505__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1505__g;
    __Vfunc_aes_mul_gf2p2__1505__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1505__d;
    __Vfunc_aes_mul_gf2p2__1505__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1505__f;
    __Vfunc_aes_mul_gf2p2__1505__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1505__a;
    __Vfunc_aes_mul_gf2p2__1505__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1505__b;
    __Vfunc_aes_mul_gf2p2__1505__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1505__c;
    __Vfunc_aes_mul_gf2p2__1505__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1506__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1506__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1506__g;
    __Vfunc_aes_mul_gf2p2__1506__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1506__d;
    __Vfunc_aes_mul_gf2p2__1506__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1506__f;
    __Vfunc_aes_mul_gf2p2__1506__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1506__a;
    __Vfunc_aes_mul_gf2p2__1506__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1506__b;
    __Vfunc_aes_mul_gf2p2__1506__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1506__c;
    __Vfunc_aes_mul_gf2p2__1506__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1507__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1507__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1507__g;
    __Vfunc_aes_mul_gf2p2__1507__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1507__d;
    __Vfunc_aes_mul_gf2p2__1507__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1507__f;
    __Vfunc_aes_mul_gf2p2__1507__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1507__a;
    __Vfunc_aes_mul_gf2p2__1507__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1507__b;
    __Vfunc_aes_mul_gf2p2__1507__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1507__c;
    __Vfunc_aes_mul_gf2p2__1507__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1510__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1510__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1510__gamma;
    __Vfunc_aes_mul_gf2p4__1510__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1510__delta;
    __Vfunc_aes_mul_gf2p4__1510__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1510__a;
    __Vfunc_aes_mul_gf2p4__1510__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1510__b;
    __Vfunc_aes_mul_gf2p4__1510__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1510__c;
    __Vfunc_aes_mul_gf2p4__1510__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1511__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1511__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1511__g;
    __Vfunc_aes_mul_gf2p2__1511__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1511__d;
    __Vfunc_aes_mul_gf2p2__1511__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1511__f;
    __Vfunc_aes_mul_gf2p2__1511__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1511__a;
    __Vfunc_aes_mul_gf2p2__1511__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1511__b;
    __Vfunc_aes_mul_gf2p2__1511__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1511__c;
    __Vfunc_aes_mul_gf2p2__1511__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1512__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1512__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1512__g;
    __Vfunc_aes_mul_gf2p2__1512__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1512__d;
    __Vfunc_aes_mul_gf2p2__1512__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1512__f;
    __Vfunc_aes_mul_gf2p2__1512__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1512__a;
    __Vfunc_aes_mul_gf2p2__1512__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1512__b;
    __Vfunc_aes_mul_gf2p2__1512__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1512__c;
    __Vfunc_aes_mul_gf2p2__1512__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1513__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1513__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1513__g;
    __Vfunc_aes_mul_gf2p2__1513__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1513__d;
    __Vfunc_aes_mul_gf2p2__1513__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1513__f;
    __Vfunc_aes_mul_gf2p2__1513__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1513__a;
    __Vfunc_aes_mul_gf2p2__1513__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1513__b;
    __Vfunc_aes_mul_gf2p2__1513__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1513__c;
    __Vfunc_aes_mul_gf2p2__1513__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1516__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1516__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1516__gamma;
    __Vfunc_aes_mul_gf2p4__1516__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1516__delta;
    __Vfunc_aes_mul_gf2p4__1516__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1516__a;
    __Vfunc_aes_mul_gf2p4__1516__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1516__b;
    __Vfunc_aes_mul_gf2p4__1516__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1516__c;
    __Vfunc_aes_mul_gf2p4__1516__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1517__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1517__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1517__g;
    __Vfunc_aes_mul_gf2p2__1517__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1517__d;
    __Vfunc_aes_mul_gf2p2__1517__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1517__f;
    __Vfunc_aes_mul_gf2p2__1517__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1517__a;
    __Vfunc_aes_mul_gf2p2__1517__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1517__b;
    __Vfunc_aes_mul_gf2p2__1517__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1517__c;
    __Vfunc_aes_mul_gf2p2__1517__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1518__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1518__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1518__g;
    __Vfunc_aes_mul_gf2p2__1518__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1518__d;
    __Vfunc_aes_mul_gf2p2__1518__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1518__f;
    __Vfunc_aes_mul_gf2p2__1518__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1518__a;
    __Vfunc_aes_mul_gf2p2__1518__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1518__b;
    __Vfunc_aes_mul_gf2p2__1518__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1518__c;
    __Vfunc_aes_mul_gf2p2__1518__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1519__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1519__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1519__g;
    __Vfunc_aes_mul_gf2p2__1519__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1519__d;
    __Vfunc_aes_mul_gf2p2__1519__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1519__f;
    __Vfunc_aes_mul_gf2p2__1519__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1519__a;
    __Vfunc_aes_mul_gf2p2__1519__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1519__b;
    __Vfunc_aes_mul_gf2p2__1519__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1519__c;
    __Vfunc_aes_mul_gf2p2__1519__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1522__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1522__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1522__gamma;
    __Vfunc_aes_mul_gf2p4__1522__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1522__delta;
    __Vfunc_aes_mul_gf2p4__1522__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1522__a;
    __Vfunc_aes_mul_gf2p4__1522__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1522__b;
    __Vfunc_aes_mul_gf2p4__1522__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1522__c;
    __Vfunc_aes_mul_gf2p4__1522__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1523__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1523__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1523__g;
    __Vfunc_aes_mul_gf2p2__1523__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1523__d;
    __Vfunc_aes_mul_gf2p2__1523__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1523__f;
    __Vfunc_aes_mul_gf2p2__1523__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1523__a;
    __Vfunc_aes_mul_gf2p2__1523__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1523__b;
    __Vfunc_aes_mul_gf2p2__1523__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1523__c;
    __Vfunc_aes_mul_gf2p2__1523__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1524__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1524__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1524__g;
    __Vfunc_aes_mul_gf2p2__1524__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1524__d;
    __Vfunc_aes_mul_gf2p2__1524__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1524__f;
    __Vfunc_aes_mul_gf2p2__1524__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1524__a;
    __Vfunc_aes_mul_gf2p2__1524__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1524__b;
    __Vfunc_aes_mul_gf2p2__1524__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1524__c;
    __Vfunc_aes_mul_gf2p2__1524__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1525__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1525__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1525__g;
    __Vfunc_aes_mul_gf2p2__1525__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1525__d;
    __Vfunc_aes_mul_gf2p2__1525__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1525__f;
    __Vfunc_aes_mul_gf2p2__1525__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1525__a;
    __Vfunc_aes_mul_gf2p2__1525__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1525__b;
    __Vfunc_aes_mul_gf2p2__1525__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1525__c;
    __Vfunc_aes_mul_gf2p2__1525__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1528__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1528__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1528__gamma;
    __Vfunc_aes_mul_gf2p4__1528__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1528__delta;
    __Vfunc_aes_mul_gf2p4__1528__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1528__a;
    __Vfunc_aes_mul_gf2p4__1528__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1528__b;
    __Vfunc_aes_mul_gf2p4__1528__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1528__c;
    __Vfunc_aes_mul_gf2p4__1528__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1529__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__g;
    __Vfunc_aes_mul_gf2p2__1529__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__d;
    __Vfunc_aes_mul_gf2p2__1529__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__f;
    __Vfunc_aes_mul_gf2p2__1529__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1529__a;
    __Vfunc_aes_mul_gf2p2__1529__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1529__b;
    __Vfunc_aes_mul_gf2p2__1529__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1529__c;
    __Vfunc_aes_mul_gf2p2__1529__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1530__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__g;
    __Vfunc_aes_mul_gf2p2__1530__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__d;
    __Vfunc_aes_mul_gf2p2__1530__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__f;
    __Vfunc_aes_mul_gf2p2__1530__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1530__a;
    __Vfunc_aes_mul_gf2p2__1530__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1530__b;
    __Vfunc_aes_mul_gf2p2__1530__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1530__c;
    __Vfunc_aes_mul_gf2p2__1530__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1531__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__g;
    __Vfunc_aes_mul_gf2p2__1531__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__d;
    __Vfunc_aes_mul_gf2p2__1531__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__f;
    __Vfunc_aes_mul_gf2p2__1531__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1531__a;
    __Vfunc_aes_mul_gf2p2__1531__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1531__b;
    __Vfunc_aes_mul_gf2p2__1531__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1531__c;
    __Vfunc_aes_mul_gf2p2__1531__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1534__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1534__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1534__gamma;
    __Vfunc_aes_mul_gf2p4__1534__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1534__delta;
    __Vfunc_aes_mul_gf2p4__1534__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1534__a;
    __Vfunc_aes_mul_gf2p4__1534__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1534__b;
    __Vfunc_aes_mul_gf2p4__1534__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1534__c;
    __Vfunc_aes_mul_gf2p4__1534__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1535__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1535__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1535__g;
    __Vfunc_aes_mul_gf2p2__1535__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1535__d;
    __Vfunc_aes_mul_gf2p2__1535__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1535__f;
    __Vfunc_aes_mul_gf2p2__1535__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1535__a;
    __Vfunc_aes_mul_gf2p2__1535__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1535__b;
    __Vfunc_aes_mul_gf2p2__1535__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1535__c;
    __Vfunc_aes_mul_gf2p2__1535__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1536__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1536__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1536__g;
    __Vfunc_aes_mul_gf2p2__1536__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1536__d;
    __Vfunc_aes_mul_gf2p2__1536__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1536__f;
    __Vfunc_aes_mul_gf2p2__1536__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1536__a;
    __Vfunc_aes_mul_gf2p2__1536__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1536__b;
    __Vfunc_aes_mul_gf2p2__1536__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1536__c;
    __Vfunc_aes_mul_gf2p2__1536__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1537__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1537__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1537__g;
    __Vfunc_aes_mul_gf2p2__1537__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1537__d;
    __Vfunc_aes_mul_gf2p2__1537__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1537__f;
    __Vfunc_aes_mul_gf2p2__1537__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1537__a;
    __Vfunc_aes_mul_gf2p2__1537__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1537__b;
    __Vfunc_aes_mul_gf2p2__1537__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1537__c;
    __Vfunc_aes_mul_gf2p2__1537__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
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
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__223__03a196__KET__ 
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
                vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_b 
                    = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [0U][1U] >> 0x00000018U);
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1430__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1430__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1430__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1430__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1430__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][1U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][1U] 
                                                      >> 0x00000018U))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1431__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1431__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1431__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1431__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1431__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [0U][1U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1432__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1432__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1432__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1432__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1432__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_b 
                    = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [1U][1U] >> 0x00000018U);
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1433__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1433__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1433__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1433__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1433__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][1U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1434__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1434__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1434__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1434__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1434__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][1U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1435__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1435__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1435__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1435__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1435__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma)));
    __Vfunc_aes_square_gf2p2__1443__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1442__gamma));
    __Vfunc_aes_square_gf2p2__1443__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1443__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1443__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1443__Vfuncout = __Vfunc_aes_square_gf2p2__1443__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__b = __Vfunc_aes_square_gf2p2__1443__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1444__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1444__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1444__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1444__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1444__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1444__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1444__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1445__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1445__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1445__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1445__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1445__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1445__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1445__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1442__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma)));
    __Vfunc_aes_square_gf2p2__1447__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1446__gamma));
    __Vfunc_aes_square_gf2p2__1447__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1447__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1447__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1447__Vfuncout = __Vfunc_aes_square_gf2p2__1447__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__b = __Vfunc_aes_square_gf2p2__1447__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1448__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1448__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1448__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1448__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1448__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1448__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1448__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1449__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1449__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1449__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1449__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1449__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1449__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1449__Vfuncout)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1446__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__1462__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__1462__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1462__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5389774426567160306ull);
    __Vfunc_aes_mul_gf2p2__1463__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1462__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1463__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1462__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1463__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1463__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1463__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1463__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1463__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1463__d)));
    __Vfunc_aes_mul_gf2p2__1463__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1463__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1463__d)));
    __Vfunc_aes_mul_gf2p2__1463__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1463__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1463__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1463__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1463__b)));
    __Vfunc_aes_mul_gf2p2__1463__Vfuncout = __Vfunc_aes_mul_gf2p2__1463__f;
    __Vfunc_aes_mul_gf2p4__1462__a = __Vfunc_aes_mul_gf2p2__1463__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1464__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1462__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1462__delta)));
    __Vfunc_aes_mul_gf2p2__1464__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1462__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1462__gamma)));
    __Vfunc_aes_mul_gf2p2__1464__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1464__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1464__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1464__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1464__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1464__d)));
    __Vfunc_aes_mul_gf2p2__1464__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1464__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1464__d)));
    __Vfunc_aes_mul_gf2p2__1464__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1464__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1464__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1464__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1464__b)));
    __Vfunc_aes_mul_gf2p2__1464__Vfuncout = __Vfunc_aes_mul_gf2p2__1464__f;
    __Vfunc_aes_mul_gf2p4__1462__b = __Vfunc_aes_mul_gf2p2__1464__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1465__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1462__delta));
    __Vfunc_aes_mul_gf2p2__1465__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1462__gamma));
    __Vfunc_aes_mul_gf2p2__1465__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1465__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1465__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1465__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1465__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1465__d)));
    __Vfunc_aes_mul_gf2p2__1465__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1465__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1465__d)));
    __Vfunc_aes_mul_gf2p2__1465__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1465__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1465__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1465__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1465__b)));
    __Vfunc_aes_mul_gf2p2__1465__Vfuncout = __Vfunc_aes_mul_gf2p2__1465__f;
    __Vfunc_aes_mul_gf2p4__1462__c = __Vfunc_aes_mul_gf2p2__1465__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1462__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1462__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1466__g 
                        = __Vfunc_aes_mul_gf2p4__1462__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1466__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1466__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1466__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1466__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1466__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1466__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1462__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1462__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1467__g 
                        = __Vfunc_aes_mul_gf2p4__1462__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1467__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1467__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1467__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1467__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1467__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1467__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1462__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1462__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1462__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1468__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__1468__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1468__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2478459364049979053ull);
    __Vfunc_aes_mul_gf2p2__1469__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1468__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1469__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1468__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1469__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1469__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1469__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1469__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1469__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1469__d)));
    __Vfunc_aes_mul_gf2p2__1469__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1469__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1469__d)));
    __Vfunc_aes_mul_gf2p2__1469__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1469__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1469__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1469__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1469__b)));
    __Vfunc_aes_mul_gf2p2__1469__Vfuncout = __Vfunc_aes_mul_gf2p2__1469__f;
    __Vfunc_aes_mul_gf2p4__1468__a = __Vfunc_aes_mul_gf2p2__1469__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1470__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1468__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1468__delta)));
    __Vfunc_aes_mul_gf2p2__1470__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1468__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1468__gamma)));
    __Vfunc_aes_mul_gf2p2__1470__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1470__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1470__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1470__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1470__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1470__d)));
    __Vfunc_aes_mul_gf2p2__1470__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1470__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1470__d)));
    __Vfunc_aes_mul_gf2p2__1470__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1470__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1470__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1470__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1470__b)));
    __Vfunc_aes_mul_gf2p2__1470__Vfuncout = __Vfunc_aes_mul_gf2p2__1470__f;
    __Vfunc_aes_mul_gf2p4__1468__b = __Vfunc_aes_mul_gf2p2__1470__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1471__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1468__delta));
    __Vfunc_aes_mul_gf2p2__1471__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1468__gamma));
    __Vfunc_aes_mul_gf2p2__1471__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1471__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1471__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1471__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1471__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1471__d)));
    __Vfunc_aes_mul_gf2p2__1471__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1471__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1471__d)));
    __Vfunc_aes_mul_gf2p2__1471__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1471__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1471__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1471__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1471__b)));
    __Vfunc_aes_mul_gf2p2__1471__Vfuncout = __Vfunc_aes_mul_gf2p2__1471__f;
    __Vfunc_aes_mul_gf2p4__1468__c = __Vfunc_aes_mul_gf2p2__1471__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1468__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1468__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1472__g 
                        = __Vfunc_aes_mul_gf2p4__1468__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1472__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1472__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1472__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1472__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1472__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1472__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1468__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1468__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1473__g 
                        = __Vfunc_aes_mul_gf2p4__1468__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1473__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1473__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1473__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1473__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1473__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1473__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1468__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1468__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1468__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1486__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1486__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1486__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1486__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1486__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1486__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1486__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1486__d)));
    __Vfunc_aes_mul_gf2p2__1486__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1486__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1486__d)));
    __Vfunc_aes_mul_gf2p2__1486__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1486__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1486__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1486__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1486__b)));
    __Vfunc_aes_mul_gf2p2__1486__Vfuncout = __Vfunc_aes_mul_gf2p2__1486__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1486__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1487__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1487__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1487__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1487__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1487__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1487__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1487__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1487__d)));
    __Vfunc_aes_mul_gf2p2__1487__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1487__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1487__d)));
    __Vfunc_aes_mul_gf2p2__1487__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1487__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1487__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1487__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1487__b)));
    __Vfunc_aes_mul_gf2p2__1487__Vfuncout = __Vfunc_aes_mul_gf2p2__1487__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1487__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1490__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1490__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1490__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1490__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1490__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1490__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1490__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1490__d)));
    __Vfunc_aes_mul_gf2p2__1490__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1490__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1490__d)));
    __Vfunc_aes_mul_gf2p2__1490__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1490__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1490__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1490__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1490__b)));
    __Vfunc_aes_mul_gf2p2__1490__Vfuncout = __Vfunc_aes_mul_gf2p2__1490__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1490__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1491__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1491__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1491__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1491__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1491__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1491__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1491__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1491__d)));
    __Vfunc_aes_mul_gf2p2__1491__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1491__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1491__d)));
    __Vfunc_aes_mul_gf2p2__1491__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1491__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1491__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1491__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1491__b)));
    __Vfunc_aes_mul_gf2p2__1491__Vfuncout = __Vfunc_aes_mul_gf2p2__1491__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1491__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1436__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1436__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1436__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1436__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1436__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1437__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1437__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1437__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1437__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1437__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1438__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1438__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1438__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__1438__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1438__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1439__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1439__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1439__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1439__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1439__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1440__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1440__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1440__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1440__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1440__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1441__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1441__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1441__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1441__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1441__Vfuncout))));
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
    __Vfunc_aes_square_gf2p2__1475__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__1475__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1475__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1475__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1475__Vfuncout = __Vfunc_aes_square_gf2p2__1475__d;
    __Vfunc_aes_scale_omega2_gf2p2__1474__g = __Vfunc_aes_square_gf2p2__1475__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1474__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1474__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1474__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1474__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1474__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1474__Vfuncout;
    __Vfunc_aes_square_gf2p2__1477__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__1477__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1477__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1477__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1477__Vfuncout = __Vfunc_aes_square_gf2p2__1477__d;
    __Vfunc_aes_scale_omega2_gf2p2__1476__g = __Vfunc_aes_square_gf2p2__1477__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1476__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1476__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1476__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1476__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1476__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1476__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1492__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__1492__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1492__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9148473583219553223ull);
    __Vfunc_aes_mul_gf2p2__1493__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1492__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1493__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1492__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1493__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1493__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1493__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1493__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1493__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1493__d)));
    __Vfunc_aes_mul_gf2p2__1493__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1493__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1493__d)));
    __Vfunc_aes_mul_gf2p2__1493__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1493__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1493__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1493__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1493__b)));
    __Vfunc_aes_mul_gf2p2__1493__Vfuncout = __Vfunc_aes_mul_gf2p2__1493__f;
    __Vfunc_aes_mul_gf2p4__1492__a = __Vfunc_aes_mul_gf2p2__1493__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1494__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1492__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1492__delta)));
    __Vfunc_aes_mul_gf2p2__1494__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1492__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1492__gamma)));
    __Vfunc_aes_mul_gf2p2__1494__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1494__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1494__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1494__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1494__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1494__d)));
    __Vfunc_aes_mul_gf2p2__1494__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1494__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1494__d)));
    __Vfunc_aes_mul_gf2p2__1494__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1494__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1494__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1494__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1494__b)));
    __Vfunc_aes_mul_gf2p2__1494__Vfuncout = __Vfunc_aes_mul_gf2p2__1494__f;
    __Vfunc_aes_mul_gf2p4__1492__b = __Vfunc_aes_mul_gf2p2__1494__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1495__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1492__delta));
    __Vfunc_aes_mul_gf2p2__1495__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1492__gamma));
    __Vfunc_aes_mul_gf2p2__1495__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1495__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1495__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1495__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1495__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1495__d)));
    __Vfunc_aes_mul_gf2p2__1495__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1495__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1495__d)));
    __Vfunc_aes_mul_gf2p2__1495__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1495__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1495__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1495__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1495__b)));
    __Vfunc_aes_mul_gf2p2__1495__Vfuncout = __Vfunc_aes_mul_gf2p2__1495__f;
    __Vfunc_aes_mul_gf2p4__1492__c = __Vfunc_aes_mul_gf2p2__1495__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1492__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1492__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1496__g 
                        = __Vfunc_aes_mul_gf2p4__1492__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1496__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1496__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1496__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1496__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1496__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1496__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1492__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1492__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1497__g 
                        = __Vfunc_aes_mul_gf2p4__1492__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1497__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1497__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1497__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1497__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1497__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1497__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1492__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1492__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1492__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1510__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__1510__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1510__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 898184799076045007ull);
    __Vfunc_aes_mul_gf2p2__1511__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1510__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1511__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1510__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1511__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1511__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1511__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1511__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1511__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1511__d)));
    __Vfunc_aes_mul_gf2p2__1511__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1511__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1511__d)));
    __Vfunc_aes_mul_gf2p2__1511__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1511__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1511__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1511__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1511__b)));
    __Vfunc_aes_mul_gf2p2__1511__Vfuncout = __Vfunc_aes_mul_gf2p2__1511__f;
    __Vfunc_aes_mul_gf2p4__1510__a = __Vfunc_aes_mul_gf2p2__1511__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1512__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1510__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1510__delta)));
    __Vfunc_aes_mul_gf2p2__1512__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1510__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1510__gamma)));
    __Vfunc_aes_mul_gf2p2__1512__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1512__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1512__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1512__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1512__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1512__d)));
    __Vfunc_aes_mul_gf2p2__1512__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1512__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1512__d)));
    __Vfunc_aes_mul_gf2p2__1512__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1512__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1512__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1512__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1512__b)));
    __Vfunc_aes_mul_gf2p2__1512__Vfuncout = __Vfunc_aes_mul_gf2p2__1512__f;
    __Vfunc_aes_mul_gf2p4__1510__b = __Vfunc_aes_mul_gf2p2__1512__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1513__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1510__delta));
    __Vfunc_aes_mul_gf2p2__1513__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1510__gamma));
    __Vfunc_aes_mul_gf2p2__1513__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1513__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1513__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1513__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1513__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1513__d)));
    __Vfunc_aes_mul_gf2p2__1513__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1513__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1513__d)));
    __Vfunc_aes_mul_gf2p2__1513__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1513__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1513__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1513__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1513__b)));
    __Vfunc_aes_mul_gf2p2__1513__Vfuncout = __Vfunc_aes_mul_gf2p2__1513__f;
    __Vfunc_aes_mul_gf2p4__1510__c = __Vfunc_aes_mul_gf2p2__1513__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1510__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1510__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1514__g 
                        = __Vfunc_aes_mul_gf2p4__1510__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1514__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1514__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1514__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1514__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1514__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1514__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1510__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1510__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1515__g 
                        = __Vfunc_aes_mul_gf2p4__1510__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1515__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1515__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1515__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1515__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1515__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1515__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1510__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1510__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1510__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1516__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__1516__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17097845890293972950ull);
    __Vfunc_aes_mul_gf2p2__1517__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1516__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1517__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1516__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1517__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1517__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1517__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1517__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1517__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1517__d)));
    __Vfunc_aes_mul_gf2p2__1517__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1517__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1517__d)));
    __Vfunc_aes_mul_gf2p2__1517__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1517__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1517__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1517__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1517__b)));
    __Vfunc_aes_mul_gf2p2__1517__Vfuncout = __Vfunc_aes_mul_gf2p2__1517__f;
    __Vfunc_aes_mul_gf2p4__1516__a = __Vfunc_aes_mul_gf2p2__1517__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1518__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1516__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1516__delta)));
    __Vfunc_aes_mul_gf2p2__1518__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1516__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1516__gamma)));
    __Vfunc_aes_mul_gf2p2__1518__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1518__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1518__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1518__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1518__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1518__d)));
    __Vfunc_aes_mul_gf2p2__1518__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1518__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1518__d)));
    __Vfunc_aes_mul_gf2p2__1518__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1518__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1518__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1518__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1518__b)));
    __Vfunc_aes_mul_gf2p2__1518__Vfuncout = __Vfunc_aes_mul_gf2p2__1518__f;
    __Vfunc_aes_mul_gf2p4__1516__b = __Vfunc_aes_mul_gf2p2__1518__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1519__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1516__delta));
    __Vfunc_aes_mul_gf2p2__1519__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1516__gamma));
    __Vfunc_aes_mul_gf2p2__1519__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1519__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1519__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1519__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1519__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1519__d)));
    __Vfunc_aes_mul_gf2p2__1519__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1519__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1519__d)));
    __Vfunc_aes_mul_gf2p2__1519__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1519__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1519__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1519__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1519__b)));
    __Vfunc_aes_mul_gf2p2__1519__Vfuncout = __Vfunc_aes_mul_gf2p2__1519__f;
    __Vfunc_aes_mul_gf2p4__1516__c = __Vfunc_aes_mul_gf2p2__1519__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1516__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1516__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1520__g 
                        = __Vfunc_aes_mul_gf2p4__1516__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1520__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1520__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1520__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1520__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1520__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1520__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1516__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1516__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1521__g 
                        = __Vfunc_aes_mul_gf2p4__1516__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1521__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1521__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1521__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1521__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1521__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1521__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1516__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1516__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1516__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1528__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1528__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4206560513874002405ull);
    __Vfunc_aes_mul_gf2p2__1529__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1528__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1529__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1528__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1529__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1529__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1529__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1529__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1529__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1529__d)));
    __Vfunc_aes_mul_gf2p2__1529__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1529__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1529__d)));
    __Vfunc_aes_mul_gf2p2__1529__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1529__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1529__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1529__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1529__b)));
    __Vfunc_aes_mul_gf2p2__1529__Vfuncout = __Vfunc_aes_mul_gf2p2__1529__f;
    __Vfunc_aes_mul_gf2p4__1528__a = __Vfunc_aes_mul_gf2p2__1529__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1530__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1528__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1528__delta)));
    __Vfunc_aes_mul_gf2p2__1530__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1528__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1528__gamma)));
    __Vfunc_aes_mul_gf2p2__1530__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1530__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1530__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1530__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1530__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1530__d)));
    __Vfunc_aes_mul_gf2p2__1530__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1530__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1530__d)));
    __Vfunc_aes_mul_gf2p2__1530__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1530__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1530__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1530__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1530__b)));
    __Vfunc_aes_mul_gf2p2__1530__Vfuncout = __Vfunc_aes_mul_gf2p2__1530__f;
    __Vfunc_aes_mul_gf2p4__1528__b = __Vfunc_aes_mul_gf2p2__1530__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1531__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1528__delta));
    __Vfunc_aes_mul_gf2p2__1531__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1528__gamma));
    __Vfunc_aes_mul_gf2p2__1531__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1531__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1531__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1531__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1531__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1531__d)));
    __Vfunc_aes_mul_gf2p2__1531__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1531__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1531__d)));
    __Vfunc_aes_mul_gf2p2__1531__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1531__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1531__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1531__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1531__b)));
    __Vfunc_aes_mul_gf2p2__1531__Vfuncout = __Vfunc_aes_mul_gf2p2__1531__f;
    __Vfunc_aes_mul_gf2p4__1528__c = __Vfunc_aes_mul_gf2p2__1531__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1528__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1528__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1532__g 
                        = __Vfunc_aes_mul_gf2p4__1528__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1532__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1532__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1532__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1532__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1532__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1532__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1528__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1528__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1533__g 
                        = __Vfunc_aes_mul_gf2p4__1528__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1533__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1533__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1533__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1533__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1533__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1533__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1528__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1528__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1528__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1498__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1498__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1498__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1605896360341773847ull);
    __Vfunc_aes_mul_gf2p2__1499__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1498__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1499__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1498__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1499__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1499__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1499__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1499__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1499__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1499__d)));
    __Vfunc_aes_mul_gf2p2__1499__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1499__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1499__d)));
    __Vfunc_aes_mul_gf2p2__1499__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1499__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1499__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1499__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1499__b)));
    __Vfunc_aes_mul_gf2p2__1499__Vfuncout = __Vfunc_aes_mul_gf2p2__1499__f;
    __Vfunc_aes_mul_gf2p4__1498__a = __Vfunc_aes_mul_gf2p2__1499__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1500__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1498__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1498__delta)));
    __Vfunc_aes_mul_gf2p2__1500__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1498__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1498__gamma)));
    __Vfunc_aes_mul_gf2p2__1500__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1500__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1500__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1500__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1500__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1500__d)));
    __Vfunc_aes_mul_gf2p2__1500__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1500__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1500__d)));
    __Vfunc_aes_mul_gf2p2__1500__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1500__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1500__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1500__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1500__b)));
    __Vfunc_aes_mul_gf2p2__1500__Vfuncout = __Vfunc_aes_mul_gf2p2__1500__f;
    __Vfunc_aes_mul_gf2p4__1498__b = __Vfunc_aes_mul_gf2p2__1500__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1501__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1498__delta));
    __Vfunc_aes_mul_gf2p2__1501__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1498__gamma));
    __Vfunc_aes_mul_gf2p2__1501__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1501__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1501__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1501__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1501__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1501__d)));
    __Vfunc_aes_mul_gf2p2__1501__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1501__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1501__d)));
    __Vfunc_aes_mul_gf2p2__1501__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1501__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1501__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1501__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1501__b)));
    __Vfunc_aes_mul_gf2p2__1501__Vfuncout = __Vfunc_aes_mul_gf2p2__1501__f;
    __Vfunc_aes_mul_gf2p4__1498__c = __Vfunc_aes_mul_gf2p2__1501__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1498__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1498__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1502__g 
                        = __Vfunc_aes_mul_gf2p4__1498__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1502__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1502__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1502__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1502__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1502__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1502__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1498__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1498__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1503__g 
                        = __Vfunc_aes_mul_gf2p4__1498__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1503__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1503__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1503__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1503__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1503__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1503__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1498__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1498__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1498__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1504__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1504__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1504__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3354097969216181644ull);
    __Vfunc_aes_mul_gf2p2__1505__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1504__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1505__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1504__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1505__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1505__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1505__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1505__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1505__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1505__d)));
    __Vfunc_aes_mul_gf2p2__1505__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1505__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1505__d)));
    __Vfunc_aes_mul_gf2p2__1505__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1505__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1505__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1505__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1505__b)));
    __Vfunc_aes_mul_gf2p2__1505__Vfuncout = __Vfunc_aes_mul_gf2p2__1505__f;
    __Vfunc_aes_mul_gf2p4__1504__a = __Vfunc_aes_mul_gf2p2__1505__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1506__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1504__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1504__delta)));
    __Vfunc_aes_mul_gf2p2__1506__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1504__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1504__gamma)));
    __Vfunc_aes_mul_gf2p2__1506__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1506__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1506__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1506__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1506__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1506__d)));
    __Vfunc_aes_mul_gf2p2__1506__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1506__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1506__d)));
    __Vfunc_aes_mul_gf2p2__1506__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1506__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1506__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1506__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1506__b)));
    __Vfunc_aes_mul_gf2p2__1506__Vfuncout = __Vfunc_aes_mul_gf2p2__1506__f;
    __Vfunc_aes_mul_gf2p4__1504__b = __Vfunc_aes_mul_gf2p2__1506__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1507__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1504__delta));
    __Vfunc_aes_mul_gf2p2__1507__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1504__gamma));
    __Vfunc_aes_mul_gf2p2__1507__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1507__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1507__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1507__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1507__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1507__d)));
    __Vfunc_aes_mul_gf2p2__1507__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1507__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1507__d)));
    __Vfunc_aes_mul_gf2p2__1507__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1507__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1507__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1507__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1507__b)));
    __Vfunc_aes_mul_gf2p2__1507__Vfuncout = __Vfunc_aes_mul_gf2p2__1507__f;
    __Vfunc_aes_mul_gf2p4__1504__c = __Vfunc_aes_mul_gf2p2__1507__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1504__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1504__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1508__g 
                        = __Vfunc_aes_mul_gf2p4__1504__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1508__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1508__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1508__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1508__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1508__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1508__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1504__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1504__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1509__g 
                        = __Vfunc_aes_mul_gf2p4__1504__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1509__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1509__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1509__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1509__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1509__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1509__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1504__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1504__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1504__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1522__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1522__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1522__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1707396912859235874ull);
    __Vfunc_aes_mul_gf2p2__1523__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1522__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1523__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1522__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1523__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1523__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1523__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1523__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1523__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1523__d)));
    __Vfunc_aes_mul_gf2p2__1523__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1523__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1523__d)));
    __Vfunc_aes_mul_gf2p2__1523__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1523__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1523__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1523__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1523__b)));
    __Vfunc_aes_mul_gf2p2__1523__Vfuncout = __Vfunc_aes_mul_gf2p2__1523__f;
    __Vfunc_aes_mul_gf2p4__1522__a = __Vfunc_aes_mul_gf2p2__1523__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1524__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1522__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1522__delta)));
    __Vfunc_aes_mul_gf2p2__1524__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1522__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1522__gamma)));
    __Vfunc_aes_mul_gf2p2__1524__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1524__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1524__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1524__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1524__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1524__d)));
    __Vfunc_aes_mul_gf2p2__1524__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1524__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1524__d)));
    __Vfunc_aes_mul_gf2p2__1524__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1524__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1524__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1524__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1524__b)));
    __Vfunc_aes_mul_gf2p2__1524__Vfuncout = __Vfunc_aes_mul_gf2p2__1524__f;
    __Vfunc_aes_mul_gf2p4__1522__b = __Vfunc_aes_mul_gf2p2__1524__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1525__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1522__delta));
    __Vfunc_aes_mul_gf2p2__1525__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1522__gamma));
    __Vfunc_aes_mul_gf2p2__1525__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1525__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1525__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1525__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1525__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1525__d)));
    __Vfunc_aes_mul_gf2p2__1525__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1525__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1525__d)));
    __Vfunc_aes_mul_gf2p2__1525__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1525__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1525__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1525__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1525__b)));
    __Vfunc_aes_mul_gf2p2__1525__Vfuncout = __Vfunc_aes_mul_gf2p2__1525__f;
    __Vfunc_aes_mul_gf2p4__1522__c = __Vfunc_aes_mul_gf2p2__1525__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1522__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1522__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1526__g 
                        = __Vfunc_aes_mul_gf2p4__1522__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1526__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1526__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1526__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1526__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1526__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1526__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1522__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1522__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1527__g 
                        = __Vfunc_aes_mul_gf2p4__1522__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1527__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1527__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1527__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1527__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1527__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1527__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1522__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1522__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1522__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1534__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1534__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1534__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5461591993310508797ull);
    __Vfunc_aes_mul_gf2p2__1535__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1534__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1535__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1534__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1535__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1535__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1535__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1535__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1535__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1535__d)));
    __Vfunc_aes_mul_gf2p2__1535__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1535__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1535__d)));
    __Vfunc_aes_mul_gf2p2__1535__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1535__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1535__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1535__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1535__b)));
    __Vfunc_aes_mul_gf2p2__1535__Vfuncout = __Vfunc_aes_mul_gf2p2__1535__f;
    __Vfunc_aes_mul_gf2p4__1534__a = __Vfunc_aes_mul_gf2p2__1535__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1536__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1534__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1534__delta)));
    __Vfunc_aes_mul_gf2p2__1536__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1534__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1534__gamma)));
    __Vfunc_aes_mul_gf2p2__1536__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1536__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1536__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1536__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1536__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1536__d)));
    __Vfunc_aes_mul_gf2p2__1536__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1536__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1536__d)));
    __Vfunc_aes_mul_gf2p2__1536__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1536__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1536__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1536__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1536__b)));
    __Vfunc_aes_mul_gf2p2__1536__Vfuncout = __Vfunc_aes_mul_gf2p2__1536__f;
    __Vfunc_aes_mul_gf2p4__1534__b = __Vfunc_aes_mul_gf2p2__1536__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1537__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1534__delta));
    __Vfunc_aes_mul_gf2p2__1537__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1534__gamma));
    __Vfunc_aes_mul_gf2p2__1537__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1537__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1537__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1537__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1537__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1537__d)));
    __Vfunc_aes_mul_gf2p2__1537__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1537__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1537__d)));
    __Vfunc_aes_mul_gf2p2__1537__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1537__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1537__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1537__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1537__b)));
    __Vfunc_aes_mul_gf2p2__1537__Vfuncout = __Vfunc_aes_mul_gf2p2__1537__f;
    __Vfunc_aes_mul_gf2p4__1534__c = __Vfunc_aes_mul_gf2p2__1537__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1534__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1534__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1538__g 
                        = __Vfunc_aes_mul_gf2p4__1534__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1538__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1538__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1538__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1538__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1538__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1538__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1534__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1534__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1539__g 
                        = __Vfunc_aes_mul_gf2p4__1534__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1539__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1539__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1539__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1539__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1539__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1539__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1534__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1534__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1534__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1482__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1482__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1482__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1482__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1482__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1482__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1482__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1482__d)));
    __Vfunc_aes_mul_gf2p2__1482__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1482__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1482__d)));
    __Vfunc_aes_mul_gf2p2__1482__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1482__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1482__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1482__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1482__b)));
    __Vfunc_aes_mul_gf2p2__1482__Vfuncout = __Vfunc_aes_mul_gf2p2__1482__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1482__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1483__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1483__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1483__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1483__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1483__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1483__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1483__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1483__d)));
    __Vfunc_aes_mul_gf2p2__1483__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1483__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1483__d)));
    __Vfunc_aes_mul_gf2p2__1483__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1483__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1483__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1483__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1483__b)));
    __Vfunc_aes_mul_gf2p2__1483__Vfuncout = __Vfunc_aes_mul_gf2p2__1483__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1483__Vfuncout;
    __Vfunc_aes_square_gf2p2__1478__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__1478__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1478__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1478__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1478__Vfuncout = __Vfunc_aes_square_gf2p2__1478__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1478__Vfuncout;
    __Vfunc_aes_square_gf2p2__1479__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1479__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1479__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1479__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1479__Vfuncout = __Vfunc_aes_square_gf2p2__1479__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1479__Vfuncout;
}

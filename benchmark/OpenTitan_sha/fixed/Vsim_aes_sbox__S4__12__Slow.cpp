// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1333__Vfuncout;
    __Vfunc_aes_square_gf2p2__1333__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1333__g;
    __Vfunc_aes_square_gf2p2__1333__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1333__d;
    __Vfunc_aes_square_gf2p2__1333__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1337__Vfuncout;
    __Vfunc_aes_square_gf2p2__1337__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1337__g;
    __Vfunc_aes_square_gf2p2__1337__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1337__d;
    __Vfunc_aes_square_gf2p2__1337__d = 0;
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
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1352__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1352__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1352__gamma;
    __Vfunc_aes_mul_gf2p4__1352__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1352__delta;
    __Vfunc_aes_mul_gf2p4__1352__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1352__a;
    __Vfunc_aes_mul_gf2p4__1352__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1352__b;
    __Vfunc_aes_mul_gf2p4__1352__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1352__c;
    __Vfunc_aes_mul_gf2p4__1352__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1353__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1353__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1353__g;
    __Vfunc_aes_mul_gf2p2__1353__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1353__d;
    __Vfunc_aes_mul_gf2p2__1353__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1353__f;
    __Vfunc_aes_mul_gf2p2__1353__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1353__a;
    __Vfunc_aes_mul_gf2p2__1353__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1353__b;
    __Vfunc_aes_mul_gf2p2__1353__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1353__c;
    __Vfunc_aes_mul_gf2p2__1353__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1354__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1354__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1354__g;
    __Vfunc_aes_mul_gf2p2__1354__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1354__d;
    __Vfunc_aes_mul_gf2p2__1354__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1354__f;
    __Vfunc_aes_mul_gf2p2__1354__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1354__a;
    __Vfunc_aes_mul_gf2p2__1354__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1354__b;
    __Vfunc_aes_mul_gf2p2__1354__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1354__c;
    __Vfunc_aes_mul_gf2p2__1354__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1355__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1355__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1355__g;
    __Vfunc_aes_mul_gf2p2__1355__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1355__d;
    __Vfunc_aes_mul_gf2p2__1355__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1355__f;
    __Vfunc_aes_mul_gf2p2__1355__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1355__a;
    __Vfunc_aes_mul_gf2p2__1355__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1355__b;
    __Vfunc_aes_mul_gf2p2__1355__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1355__c;
    __Vfunc_aes_mul_gf2p2__1355__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1358__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1358__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1358__gamma;
    __Vfunc_aes_mul_gf2p4__1358__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1358__delta;
    __Vfunc_aes_mul_gf2p4__1358__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1358__a;
    __Vfunc_aes_mul_gf2p4__1358__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1358__b;
    __Vfunc_aes_mul_gf2p4__1358__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1358__c;
    __Vfunc_aes_mul_gf2p4__1358__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1359__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1359__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1359__g;
    __Vfunc_aes_mul_gf2p2__1359__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1359__d;
    __Vfunc_aes_mul_gf2p2__1359__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1359__f;
    __Vfunc_aes_mul_gf2p2__1359__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1359__a;
    __Vfunc_aes_mul_gf2p2__1359__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1359__b;
    __Vfunc_aes_mul_gf2p2__1359__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1359__c;
    __Vfunc_aes_mul_gf2p2__1359__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1360__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1360__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1360__g;
    __Vfunc_aes_mul_gf2p2__1360__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1360__d;
    __Vfunc_aes_mul_gf2p2__1360__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1360__f;
    __Vfunc_aes_mul_gf2p2__1360__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1360__a;
    __Vfunc_aes_mul_gf2p2__1360__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1360__b;
    __Vfunc_aes_mul_gf2p2__1360__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1360__c;
    __Vfunc_aes_mul_gf2p2__1360__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1361__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1361__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1361__g;
    __Vfunc_aes_mul_gf2p2__1361__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1361__d;
    __Vfunc_aes_mul_gf2p2__1361__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1361__f;
    __Vfunc_aes_mul_gf2p2__1361__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1361__a;
    __Vfunc_aes_mul_gf2p2__1361__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1361__b;
    __Vfunc_aes_mul_gf2p2__1361__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1361__c;
    __Vfunc_aes_mul_gf2p2__1361__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1364__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1364__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1364__g;
    __Vfunc_aes_scale_omega2_gf2p2__1364__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1364__d;
    __Vfunc_aes_scale_omega2_gf2p2__1364__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1365__Vfuncout;
    __Vfunc_aes_square_gf2p2__1365__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1365__g;
    __Vfunc_aes_square_gf2p2__1365__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1365__d;
    __Vfunc_aes_square_gf2p2__1365__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1366__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1366__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1366__g;
    __Vfunc_aes_scale_omega2_gf2p2__1366__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1366__d;
    __Vfunc_aes_scale_omega2_gf2p2__1366__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1367__Vfuncout;
    __Vfunc_aes_square_gf2p2__1367__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1367__g;
    __Vfunc_aes_square_gf2p2__1367__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1367__d;
    __Vfunc_aes_square_gf2p2__1367__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1368__Vfuncout;
    __Vfunc_aes_square_gf2p2__1368__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1368__g;
    __Vfunc_aes_square_gf2p2__1368__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1368__d;
    __Vfunc_aes_square_gf2p2__1368__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1369__Vfuncout;
    __Vfunc_aes_square_gf2p2__1369__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1369__g;
    __Vfunc_aes_square_gf2p2__1369__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1369__d;
    __Vfunc_aes_square_gf2p2__1369__d = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1372__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1372__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1372__g;
    __Vfunc_aes_mul_gf2p2__1372__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1372__d;
    __Vfunc_aes_mul_gf2p2__1372__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1372__f;
    __Vfunc_aes_mul_gf2p2__1372__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1372__a;
    __Vfunc_aes_mul_gf2p2__1372__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1372__b;
    __Vfunc_aes_mul_gf2p2__1372__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1372__c;
    __Vfunc_aes_mul_gf2p2__1372__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1373__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1373__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1373__g;
    __Vfunc_aes_mul_gf2p2__1373__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1373__d;
    __Vfunc_aes_mul_gf2p2__1373__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1373__f;
    __Vfunc_aes_mul_gf2p2__1373__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1373__a;
    __Vfunc_aes_mul_gf2p2__1373__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1373__b;
    __Vfunc_aes_mul_gf2p2__1373__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1373__c;
    __Vfunc_aes_mul_gf2p2__1373__c = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1376__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1376__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1376__g;
    __Vfunc_aes_mul_gf2p2__1376__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1376__d;
    __Vfunc_aes_mul_gf2p2__1376__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1376__f;
    __Vfunc_aes_mul_gf2p2__1376__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1376__a;
    __Vfunc_aes_mul_gf2p2__1376__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1376__b;
    __Vfunc_aes_mul_gf2p2__1376__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1376__c;
    __Vfunc_aes_mul_gf2p2__1376__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1377__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1377__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1377__g;
    __Vfunc_aes_mul_gf2p2__1377__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1377__d;
    __Vfunc_aes_mul_gf2p2__1377__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1377__f;
    __Vfunc_aes_mul_gf2p2__1377__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1377__a;
    __Vfunc_aes_mul_gf2p2__1377__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1377__b;
    __Vfunc_aes_mul_gf2p2__1377__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1377__c;
    __Vfunc_aes_mul_gf2p2__1377__c = 0;
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
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1380__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1380__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1380__g;
    __Vfunc_aes_mul_gf2p2__1380__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1380__d;
    __Vfunc_aes_mul_gf2p2__1380__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1380__f;
    __Vfunc_aes_mul_gf2p2__1380__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1380__a;
    __Vfunc_aes_mul_gf2p2__1380__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1380__b;
    __Vfunc_aes_mul_gf2p2__1380__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1380__c;
    __Vfunc_aes_mul_gf2p2__1380__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1381__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1381__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1381__g;
    __Vfunc_aes_mul_gf2p2__1381__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1381__d;
    __Vfunc_aes_mul_gf2p2__1381__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1381__f;
    __Vfunc_aes_mul_gf2p2__1381__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1381__a;
    __Vfunc_aes_mul_gf2p2__1381__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1381__b;
    __Vfunc_aes_mul_gf2p2__1381__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1381__c;
    __Vfunc_aes_mul_gf2p2__1381__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1382__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1382__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1382__gamma;
    __Vfunc_aes_mul_gf2p4__1382__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1382__delta;
    __Vfunc_aes_mul_gf2p4__1382__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1382__a;
    __Vfunc_aes_mul_gf2p4__1382__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1382__b;
    __Vfunc_aes_mul_gf2p4__1382__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1382__c;
    __Vfunc_aes_mul_gf2p4__1382__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1383__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1383__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1383__g;
    __Vfunc_aes_mul_gf2p2__1383__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1383__d;
    __Vfunc_aes_mul_gf2p2__1383__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1383__f;
    __Vfunc_aes_mul_gf2p2__1383__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1383__a;
    __Vfunc_aes_mul_gf2p2__1383__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1383__b;
    __Vfunc_aes_mul_gf2p2__1383__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1383__c;
    __Vfunc_aes_mul_gf2p2__1383__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1384__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1384__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1384__g;
    __Vfunc_aes_mul_gf2p2__1384__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1384__d;
    __Vfunc_aes_mul_gf2p2__1384__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1384__f;
    __Vfunc_aes_mul_gf2p2__1384__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1384__a;
    __Vfunc_aes_mul_gf2p2__1384__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1384__b;
    __Vfunc_aes_mul_gf2p2__1384__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1384__c;
    __Vfunc_aes_mul_gf2p2__1384__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1385__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1385__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1385__g;
    __Vfunc_aes_mul_gf2p2__1385__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1385__d;
    __Vfunc_aes_mul_gf2p2__1385__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1385__f;
    __Vfunc_aes_mul_gf2p2__1385__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1385__a;
    __Vfunc_aes_mul_gf2p2__1385__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1385__b;
    __Vfunc_aes_mul_gf2p2__1385__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1385__c;
    __Vfunc_aes_mul_gf2p2__1385__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1388__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1388__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1388__gamma;
    __Vfunc_aes_mul_gf2p4__1388__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1388__delta;
    __Vfunc_aes_mul_gf2p4__1388__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1388__a;
    __Vfunc_aes_mul_gf2p4__1388__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1388__b;
    __Vfunc_aes_mul_gf2p4__1388__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1388__c;
    __Vfunc_aes_mul_gf2p4__1388__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1389__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1389__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1389__g;
    __Vfunc_aes_mul_gf2p2__1389__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1389__d;
    __Vfunc_aes_mul_gf2p2__1389__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1389__f;
    __Vfunc_aes_mul_gf2p2__1389__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1389__a;
    __Vfunc_aes_mul_gf2p2__1389__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1389__b;
    __Vfunc_aes_mul_gf2p2__1389__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1389__c;
    __Vfunc_aes_mul_gf2p2__1389__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1390__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1390__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1390__g;
    __Vfunc_aes_mul_gf2p2__1390__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1390__d;
    __Vfunc_aes_mul_gf2p2__1390__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1390__f;
    __Vfunc_aes_mul_gf2p2__1390__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1390__a;
    __Vfunc_aes_mul_gf2p2__1390__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1390__b;
    __Vfunc_aes_mul_gf2p2__1390__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1390__c;
    __Vfunc_aes_mul_gf2p2__1390__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1391__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1391__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1391__g;
    __Vfunc_aes_mul_gf2p2__1391__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1391__d;
    __Vfunc_aes_mul_gf2p2__1391__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1391__f;
    __Vfunc_aes_mul_gf2p2__1391__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1391__a;
    __Vfunc_aes_mul_gf2p2__1391__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1391__b;
    __Vfunc_aes_mul_gf2p2__1391__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1391__c;
    __Vfunc_aes_mul_gf2p2__1391__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1394__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1394__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1394__gamma;
    __Vfunc_aes_mul_gf2p4__1394__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1394__delta;
    __Vfunc_aes_mul_gf2p4__1394__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1394__a;
    __Vfunc_aes_mul_gf2p4__1394__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1394__b;
    __Vfunc_aes_mul_gf2p4__1394__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1394__c;
    __Vfunc_aes_mul_gf2p4__1394__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1395__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1395__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1395__g;
    __Vfunc_aes_mul_gf2p2__1395__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1395__d;
    __Vfunc_aes_mul_gf2p2__1395__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1395__f;
    __Vfunc_aes_mul_gf2p2__1395__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1395__a;
    __Vfunc_aes_mul_gf2p2__1395__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1395__b;
    __Vfunc_aes_mul_gf2p2__1395__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1395__c;
    __Vfunc_aes_mul_gf2p2__1395__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1396__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1396__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1396__g;
    __Vfunc_aes_mul_gf2p2__1396__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1396__d;
    __Vfunc_aes_mul_gf2p2__1396__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1396__f;
    __Vfunc_aes_mul_gf2p2__1396__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1396__a;
    __Vfunc_aes_mul_gf2p2__1396__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1396__b;
    __Vfunc_aes_mul_gf2p2__1396__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1396__c;
    __Vfunc_aes_mul_gf2p2__1396__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1397__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1397__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1397__g;
    __Vfunc_aes_mul_gf2p2__1397__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1397__d;
    __Vfunc_aes_mul_gf2p2__1397__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1397__f;
    __Vfunc_aes_mul_gf2p2__1397__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1397__a;
    __Vfunc_aes_mul_gf2p2__1397__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1397__b;
    __Vfunc_aes_mul_gf2p2__1397__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1397__c;
    __Vfunc_aes_mul_gf2p2__1397__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1400__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1400__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1400__gamma;
    __Vfunc_aes_mul_gf2p4__1400__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1400__delta;
    __Vfunc_aes_mul_gf2p4__1400__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1400__a;
    __Vfunc_aes_mul_gf2p4__1400__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1400__b;
    __Vfunc_aes_mul_gf2p4__1400__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1400__c;
    __Vfunc_aes_mul_gf2p4__1400__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1401__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1401__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1401__g;
    __Vfunc_aes_mul_gf2p2__1401__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1401__d;
    __Vfunc_aes_mul_gf2p2__1401__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1401__f;
    __Vfunc_aes_mul_gf2p2__1401__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1401__a;
    __Vfunc_aes_mul_gf2p2__1401__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1401__b;
    __Vfunc_aes_mul_gf2p2__1401__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1401__c;
    __Vfunc_aes_mul_gf2p2__1401__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1402__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1402__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1402__g;
    __Vfunc_aes_mul_gf2p2__1402__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1402__d;
    __Vfunc_aes_mul_gf2p2__1402__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1402__f;
    __Vfunc_aes_mul_gf2p2__1402__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1402__a;
    __Vfunc_aes_mul_gf2p2__1402__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1402__b;
    __Vfunc_aes_mul_gf2p2__1402__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1402__c;
    __Vfunc_aes_mul_gf2p2__1402__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1403__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1403__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1403__g;
    __Vfunc_aes_mul_gf2p2__1403__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1403__d;
    __Vfunc_aes_mul_gf2p2__1403__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1403__f;
    __Vfunc_aes_mul_gf2p2__1403__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1403__a;
    __Vfunc_aes_mul_gf2p2__1403__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1403__b;
    __Vfunc_aes_mul_gf2p2__1403__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1403__c;
    __Vfunc_aes_mul_gf2p2__1403__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1406__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1406__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1406__gamma;
    __Vfunc_aes_mul_gf2p4__1406__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1406__delta;
    __Vfunc_aes_mul_gf2p4__1406__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1406__a;
    __Vfunc_aes_mul_gf2p4__1406__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1406__b;
    __Vfunc_aes_mul_gf2p4__1406__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1406__c;
    __Vfunc_aes_mul_gf2p4__1406__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1407__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1407__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1407__g;
    __Vfunc_aes_mul_gf2p2__1407__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1407__d;
    __Vfunc_aes_mul_gf2p2__1407__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1407__f;
    __Vfunc_aes_mul_gf2p2__1407__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1407__a;
    __Vfunc_aes_mul_gf2p2__1407__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1407__b;
    __Vfunc_aes_mul_gf2p2__1407__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1407__c;
    __Vfunc_aes_mul_gf2p2__1407__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1408__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1408__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1408__g;
    __Vfunc_aes_mul_gf2p2__1408__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1408__d;
    __Vfunc_aes_mul_gf2p2__1408__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1408__f;
    __Vfunc_aes_mul_gf2p2__1408__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1408__a;
    __Vfunc_aes_mul_gf2p2__1408__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1408__b;
    __Vfunc_aes_mul_gf2p2__1408__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1408__c;
    __Vfunc_aes_mul_gf2p2__1408__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1409__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1409__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1409__g;
    __Vfunc_aes_mul_gf2p2__1409__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1409__d;
    __Vfunc_aes_mul_gf2p2__1409__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1409__f;
    __Vfunc_aes_mul_gf2p2__1409__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1409__a;
    __Vfunc_aes_mul_gf2p2__1409__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1409__b;
    __Vfunc_aes_mul_gf2p2__1409__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1409__c;
    __Vfunc_aes_mul_gf2p2__1409__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1412__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1412__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1412__gamma;
    __Vfunc_aes_mul_gf2p4__1412__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1412__delta;
    __Vfunc_aes_mul_gf2p4__1412__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1412__a;
    __Vfunc_aes_mul_gf2p4__1412__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1412__b;
    __Vfunc_aes_mul_gf2p4__1412__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1412__c;
    __Vfunc_aes_mul_gf2p4__1412__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1413__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1413__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1413__g;
    __Vfunc_aes_mul_gf2p2__1413__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1413__d;
    __Vfunc_aes_mul_gf2p2__1413__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1413__f;
    __Vfunc_aes_mul_gf2p2__1413__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1413__a;
    __Vfunc_aes_mul_gf2p2__1413__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1413__b;
    __Vfunc_aes_mul_gf2p2__1413__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1413__c;
    __Vfunc_aes_mul_gf2p2__1413__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1414__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1414__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1414__g;
    __Vfunc_aes_mul_gf2p2__1414__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1414__d;
    __Vfunc_aes_mul_gf2p2__1414__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1414__f;
    __Vfunc_aes_mul_gf2p2__1414__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1414__a;
    __Vfunc_aes_mul_gf2p2__1414__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1414__b;
    __Vfunc_aes_mul_gf2p2__1414__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1414__c;
    __Vfunc_aes_mul_gf2p2__1414__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1415__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__g;
    __Vfunc_aes_mul_gf2p2__1415__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__d;
    __Vfunc_aes_mul_gf2p2__1415__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1415__f;
    __Vfunc_aes_mul_gf2p2__1415__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1415__a;
    __Vfunc_aes_mul_gf2p2__1415__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1415__b;
    __Vfunc_aes_mul_gf2p2__1415__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1415__c;
    __Vfunc_aes_mul_gf2p2__1415__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1418__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1418__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1418__gamma;
    __Vfunc_aes_mul_gf2p4__1418__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1418__delta;
    __Vfunc_aes_mul_gf2p4__1418__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1418__a;
    __Vfunc_aes_mul_gf2p4__1418__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1418__b;
    __Vfunc_aes_mul_gf2p4__1418__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1418__c;
    __Vfunc_aes_mul_gf2p4__1418__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1419__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__g;
    __Vfunc_aes_mul_gf2p2__1419__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__d;
    __Vfunc_aes_mul_gf2p2__1419__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__f;
    __Vfunc_aes_mul_gf2p2__1419__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1419__a;
    __Vfunc_aes_mul_gf2p2__1419__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1419__b;
    __Vfunc_aes_mul_gf2p2__1419__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1419__c;
    __Vfunc_aes_mul_gf2p2__1419__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1420__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__g;
    __Vfunc_aes_mul_gf2p2__1420__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__d;
    __Vfunc_aes_mul_gf2p2__1420__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__f;
    __Vfunc_aes_mul_gf2p2__1420__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1420__a;
    __Vfunc_aes_mul_gf2p2__1420__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1420__b;
    __Vfunc_aes_mul_gf2p2__1420__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1420__c;
    __Vfunc_aes_mul_gf2p2__1420__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1421__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__g;
    __Vfunc_aes_mul_gf2p2__1421__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__d;
    __Vfunc_aes_mul_gf2p2__1421__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__f;
    __Vfunc_aes_mul_gf2p2__1421__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1421__a;
    __Vfunc_aes_mul_gf2p2__1421__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1421__b;
    __Vfunc_aes_mul_gf2p2__1421__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1421__c;
    __Vfunc_aes_mul_gf2p2__1421__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1424__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1424__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1424__gamma;
    __Vfunc_aes_mul_gf2p4__1424__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1424__delta;
    __Vfunc_aes_mul_gf2p4__1424__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1424__a;
    __Vfunc_aes_mul_gf2p4__1424__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1424__b;
    __Vfunc_aes_mul_gf2p4__1424__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1424__c;
    __Vfunc_aes_mul_gf2p4__1424__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1425__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1425__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1425__g;
    __Vfunc_aes_mul_gf2p2__1425__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1425__d;
    __Vfunc_aes_mul_gf2p2__1425__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1425__f;
    __Vfunc_aes_mul_gf2p2__1425__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1425__a;
    __Vfunc_aes_mul_gf2p2__1425__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1425__b;
    __Vfunc_aes_mul_gf2p2__1425__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1425__c;
    __Vfunc_aes_mul_gf2p2__1425__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1426__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1426__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1426__g;
    __Vfunc_aes_mul_gf2p2__1426__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1426__d;
    __Vfunc_aes_mul_gf2p2__1426__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1426__f;
    __Vfunc_aes_mul_gf2p2__1426__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1426__a;
    __Vfunc_aes_mul_gf2p2__1426__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1426__b;
    __Vfunc_aes_mul_gf2p2__1426__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1426__c;
    __Vfunc_aes_mul_gf2p2__1426__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1427__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1427__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1427__g;
    __Vfunc_aes_mul_gf2p2__1427__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1427__d;
    __Vfunc_aes_mul_gf2p2__1427__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1427__f;
    __Vfunc_aes_mul_gf2p2__1427__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1427__a;
    __Vfunc_aes_mul_gf2p2__1427__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1427__b;
    __Vfunc_aes_mul_gf2p2__1427__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1427__c;
    __Vfunc_aes_mul_gf2p2__1427__c = 0;
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
                vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_b 
                    = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [0U][0U] >> 0x00000018U);
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1320__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1320__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1320__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1320__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1320__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_b 
                        = (0x000000ffU & (0x63U ^ (
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                    [0U][0U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                      [0U][0U] 
                                                      >> 0x00000018U))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1321__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1321__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1321__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1321__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1321__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [0U][0U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1322__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1322__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1322__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1322__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1322__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_b 
                    = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [1U][0U] >> 0x00000018U);
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1323__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1323__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1323__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1323__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][0U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1324__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1324__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1324__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1324__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1324__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_b 
                        = (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][0U] >> 0x00000018U);
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1325__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1325__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1325__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1325__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1325__Vfuncout))));
    __Vfunc_aes_mul_gf2p2__1372__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1372__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1372__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1372__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1372__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1372__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1372__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1372__d)));
    __Vfunc_aes_mul_gf2p2__1372__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1372__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1372__d)));
    __Vfunc_aes_mul_gf2p2__1372__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1372__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1372__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1372__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1372__b)));
    __Vfunc_aes_mul_gf2p2__1372__Vfuncout = __Vfunc_aes_mul_gf2p2__1372__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1372__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1373__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1373__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1373__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1373__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1373__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1373__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1373__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1373__d)));
    __Vfunc_aes_mul_gf2p2__1373__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1373__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1373__d)));
    __Vfunc_aes_mul_gf2p2__1373__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1373__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1373__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1373__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1373__b)));
    __Vfunc_aes_mul_gf2p2__1373__Vfuncout = __Vfunc_aes_mul_gf2p2__1373__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1373__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1352__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__1352__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__1352__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15576855963906699644ull);
    __Vfunc_aes_mul_gf2p2__1353__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1352__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1353__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1352__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1353__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1353__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1353__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1353__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1353__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1353__d)));
    __Vfunc_aes_mul_gf2p2__1353__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1353__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1353__d)));
    __Vfunc_aes_mul_gf2p2__1353__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1353__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1353__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1353__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1353__b)));
    __Vfunc_aes_mul_gf2p2__1353__Vfuncout = __Vfunc_aes_mul_gf2p2__1353__f;
    __Vfunc_aes_mul_gf2p4__1352__a = __Vfunc_aes_mul_gf2p2__1353__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1354__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1352__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1352__delta)));
    __Vfunc_aes_mul_gf2p2__1354__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1352__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1352__gamma)));
    __Vfunc_aes_mul_gf2p2__1354__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1354__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1354__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1354__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1354__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1354__d)));
    __Vfunc_aes_mul_gf2p2__1354__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1354__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1354__d)));
    __Vfunc_aes_mul_gf2p2__1354__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1354__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1354__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1354__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1354__b)));
    __Vfunc_aes_mul_gf2p2__1354__Vfuncout = __Vfunc_aes_mul_gf2p2__1354__f;
    __Vfunc_aes_mul_gf2p4__1352__b = __Vfunc_aes_mul_gf2p2__1354__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1355__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1352__delta));
    __Vfunc_aes_mul_gf2p2__1355__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1352__gamma));
    __Vfunc_aes_mul_gf2p2__1355__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1355__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1355__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1355__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1355__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1355__d)));
    __Vfunc_aes_mul_gf2p2__1355__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1355__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1355__d)));
    __Vfunc_aes_mul_gf2p2__1355__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1355__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1355__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1355__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1355__b)));
    __Vfunc_aes_mul_gf2p2__1355__Vfuncout = __Vfunc_aes_mul_gf2p2__1355__f;
    __Vfunc_aes_mul_gf2p4__1352__c = __Vfunc_aes_mul_gf2p2__1355__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1352__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1352__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1356__g 
                        = __Vfunc_aes_mul_gf2p4__1352__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1356__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1356__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1356__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1356__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1356__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1356__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1352__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1352__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1357__g 
                        = __Vfunc_aes_mul_gf2p4__1352__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1357__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1357__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1357__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1357__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1357__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1357__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1352__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1352__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1352__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1358__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__1358__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1358__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16723593774242443849ull);
    __Vfunc_aes_mul_gf2p2__1359__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1358__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1359__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1358__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1359__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1359__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1359__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1359__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1359__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1359__d)));
    __Vfunc_aes_mul_gf2p2__1359__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1359__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1359__d)));
    __Vfunc_aes_mul_gf2p2__1359__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1359__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1359__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1359__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1359__b)));
    __Vfunc_aes_mul_gf2p2__1359__Vfuncout = __Vfunc_aes_mul_gf2p2__1359__f;
    __Vfunc_aes_mul_gf2p4__1358__a = __Vfunc_aes_mul_gf2p2__1359__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1360__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1358__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1358__delta)));
    __Vfunc_aes_mul_gf2p2__1360__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1358__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1358__gamma)));
    __Vfunc_aes_mul_gf2p2__1360__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1360__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1360__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1360__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1360__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1360__d)));
    __Vfunc_aes_mul_gf2p2__1360__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1360__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1360__d)));
    __Vfunc_aes_mul_gf2p2__1360__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1360__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1360__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1360__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1360__b)));
    __Vfunc_aes_mul_gf2p2__1360__Vfuncout = __Vfunc_aes_mul_gf2p2__1360__f;
    __Vfunc_aes_mul_gf2p4__1358__b = __Vfunc_aes_mul_gf2p2__1360__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1361__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1358__delta));
    __Vfunc_aes_mul_gf2p2__1361__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1358__gamma));
    __Vfunc_aes_mul_gf2p2__1361__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1361__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1361__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1361__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1361__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1361__d)));
    __Vfunc_aes_mul_gf2p2__1361__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1361__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1361__d)));
    __Vfunc_aes_mul_gf2p2__1361__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1361__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1361__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1361__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1361__b)));
    __Vfunc_aes_mul_gf2p2__1361__Vfuncout = __Vfunc_aes_mul_gf2p2__1361__f;
    __Vfunc_aes_mul_gf2p4__1358__c = __Vfunc_aes_mul_gf2p2__1361__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1358__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1358__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1362__g 
                        = __Vfunc_aes_mul_gf2p4__1358__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1362__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1362__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1362__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1362__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1362__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1362__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1358__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1358__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1363__g 
                        = __Vfunc_aes_mul_gf2p4__1358__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1363__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1363__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1363__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1363__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1363__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1363__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1358__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1358__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1358__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1376__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1376__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1376__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1376__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1376__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1376__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1376__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1376__d)));
    __Vfunc_aes_mul_gf2p2__1376__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1376__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1376__d)));
    __Vfunc_aes_mul_gf2p2__1376__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1376__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1376__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1376__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1376__b)));
    __Vfunc_aes_mul_gf2p2__1376__Vfuncout = __Vfunc_aes_mul_gf2p2__1376__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1376__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1377__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1377__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1377__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1377__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1377__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1377__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1377__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1377__d)));
    __Vfunc_aes_mul_gf2p2__1377__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1377__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1377__d)));
    __Vfunc_aes_mul_gf2p2__1377__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1377__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1377__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1377__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1377__b)));
    __Vfunc_aes_mul_gf2p2__1377__Vfuncout = __Vfunc_aes_mul_gf2p2__1377__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1377__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1380__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__1380__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1380__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1380__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1380__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1380__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1380__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1380__d)));
    __Vfunc_aes_mul_gf2p2__1380__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1380__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1380__d)));
    __Vfunc_aes_mul_gf2p2__1380__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1380__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1380__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1380__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1380__b)));
    __Vfunc_aes_mul_gf2p2__1380__Vfuncout = __Vfunc_aes_mul_gf2p2__1380__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1380__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1381__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__1381__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1381__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1381__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1381__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1381__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1381__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1381__d)));
    __Vfunc_aes_mul_gf2p2__1381__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1381__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1381__d)));
    __Vfunc_aes_mul_gf2p2__1381__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1381__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1381__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1381__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1381__b)));
    __Vfunc_aes_mul_gf2p2__1381__Vfuncout = __Vfunc_aes_mul_gf2p2__1381__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1381__Vfuncout;
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1326__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1326__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1326__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1326__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1326__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1327__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1327__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1327__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1327__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1327__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__1328__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1328__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__1328__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__1328__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1328__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__1329__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1329__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__1329__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__1329__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1329__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1330__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1330__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1330__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1330__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1330__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1331__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1331__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1331__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1331__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1331__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma)));
    __Vfunc_aes_square_gf2p2__1333__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1332__gamma));
    __Vfunc_aes_square_gf2p2__1333__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1333__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1333__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1333__Vfuncout = __Vfunc_aes_square_gf2p2__1333__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__b = __Vfunc_aes_square_gf2p2__1333__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1334__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1334__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1334__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1334__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1334__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1334__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1334__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1335__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1335__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1335__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1335__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1335__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1335__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1335__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1332__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1340__delta = (0x0000000fU 
                                          & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__111__03a84__KET__);
    __Vfunc_aes_mul_gf2p4__1340__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                             >> 4U));
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
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma)));
    __Vfunc_aes_square_gf2p2__1337__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1336__gamma));
    __Vfunc_aes_square_gf2p2__1337__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1337__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1337__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1337__Vfuncout = __Vfunc_aes_square_gf2p2__1337__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__b = __Vfunc_aes_square_gf2p2__1337__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1338__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1338__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1338__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1338__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__1338__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__1338__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__1338__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1339__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1339__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1339__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1339__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1339__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1339__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__1339__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1336__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1368__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                               ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                  >> 2U)));
    __Vfunc_aes_square_gf2p2__1368__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1368__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1368__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1368__Vfuncout = __Vfunc_aes_square_gf2p2__1368__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__1368__Vfuncout;
    __Vfunc_aes_square_gf2p2__1369__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                               ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__1369__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1369__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1369__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1369__Vfuncout = __Vfunc_aes_square_gf2p2__1369__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__1369__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1365__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__1365__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1365__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1365__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1365__Vfuncout = __Vfunc_aes_square_gf2p2__1365__d;
    __Vfunc_aes_scale_omega2_gf2p2__1364__g = __Vfunc_aes_square_gf2p2__1365__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1364__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1364__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1364__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1364__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1364__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1364__Vfuncout;
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
    __Vfunc_aes_square_gf2p2__1367__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                                >> 2U) 
                                               ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__1367__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1367__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1367__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1367__Vfuncout = __Vfunc_aes_square_gf2p2__1367__d;
    __Vfunc_aes_scale_omega2_gf2p2__1366__g = __Vfunc_aes_square_gf2p2__1367__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1366__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1366__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1366__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1366__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1366__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1366__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__1382__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__1382__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1382__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6072343587464036862ull);
    __Vfunc_aes_mul_gf2p2__1383__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1382__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1383__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1382__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1383__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1383__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1383__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1383__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1383__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1383__d)));
    __Vfunc_aes_mul_gf2p2__1383__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1383__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1383__d)));
    __Vfunc_aes_mul_gf2p2__1383__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1383__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1383__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1383__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1383__b)));
    __Vfunc_aes_mul_gf2p2__1383__Vfuncout = __Vfunc_aes_mul_gf2p2__1383__f;
    __Vfunc_aes_mul_gf2p4__1382__a = __Vfunc_aes_mul_gf2p2__1383__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1384__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1382__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1382__delta)));
    __Vfunc_aes_mul_gf2p2__1384__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1382__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1382__gamma)));
    __Vfunc_aes_mul_gf2p2__1384__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1384__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1384__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1384__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1384__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1384__d)));
    __Vfunc_aes_mul_gf2p2__1384__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1384__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1384__d)));
    __Vfunc_aes_mul_gf2p2__1384__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1384__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1384__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1384__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1384__b)));
    __Vfunc_aes_mul_gf2p2__1384__Vfuncout = __Vfunc_aes_mul_gf2p2__1384__f;
    __Vfunc_aes_mul_gf2p4__1382__b = __Vfunc_aes_mul_gf2p2__1384__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1385__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1382__delta));
    __Vfunc_aes_mul_gf2p2__1385__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1382__gamma));
    __Vfunc_aes_mul_gf2p2__1385__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1385__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1385__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1385__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1385__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1385__d)));
    __Vfunc_aes_mul_gf2p2__1385__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1385__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1385__d)));
    __Vfunc_aes_mul_gf2p2__1385__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1385__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1385__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1385__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1385__b)));
    __Vfunc_aes_mul_gf2p2__1385__Vfuncout = __Vfunc_aes_mul_gf2p2__1385__f;
    __Vfunc_aes_mul_gf2p4__1382__c = __Vfunc_aes_mul_gf2p2__1385__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1382__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1382__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1386__g 
                        = __Vfunc_aes_mul_gf2p4__1382__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1386__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1386__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1386__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1386__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1386__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1386__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1382__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1382__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1387__g 
                        = __Vfunc_aes_mul_gf2p4__1382__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1387__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1387__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1387__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1387__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1387__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1387__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1382__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1382__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1382__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1400__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    __Vfunc_aes_mul_gf2p4__1400__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1400__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18049948640074808946ull);
    __Vfunc_aes_mul_gf2p2__1401__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1400__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1401__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1400__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1401__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1401__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1401__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1401__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1401__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1401__d)));
    __Vfunc_aes_mul_gf2p2__1401__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1401__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1401__d)));
    __Vfunc_aes_mul_gf2p2__1401__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1401__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1401__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1401__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1401__b)));
    __Vfunc_aes_mul_gf2p2__1401__Vfuncout = __Vfunc_aes_mul_gf2p2__1401__f;
    __Vfunc_aes_mul_gf2p4__1400__a = __Vfunc_aes_mul_gf2p2__1401__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1402__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1400__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1400__delta)));
    __Vfunc_aes_mul_gf2p2__1402__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1400__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1400__gamma)));
    __Vfunc_aes_mul_gf2p2__1402__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1402__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1402__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1402__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1402__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1402__d)));
    __Vfunc_aes_mul_gf2p2__1402__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1402__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1402__d)));
    __Vfunc_aes_mul_gf2p2__1402__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1402__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1402__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1402__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1402__b)));
    __Vfunc_aes_mul_gf2p2__1402__Vfuncout = __Vfunc_aes_mul_gf2p2__1402__f;
    __Vfunc_aes_mul_gf2p4__1400__b = __Vfunc_aes_mul_gf2p2__1402__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1403__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1400__delta));
    __Vfunc_aes_mul_gf2p2__1403__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1400__gamma));
    __Vfunc_aes_mul_gf2p2__1403__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1403__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1403__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1403__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1403__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1403__d)));
    __Vfunc_aes_mul_gf2p2__1403__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1403__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1403__d)));
    __Vfunc_aes_mul_gf2p2__1403__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1403__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1403__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1403__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1403__b)));
    __Vfunc_aes_mul_gf2p2__1403__Vfuncout = __Vfunc_aes_mul_gf2p2__1403__f;
    __Vfunc_aes_mul_gf2p4__1400__c = __Vfunc_aes_mul_gf2p2__1403__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1400__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1400__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1404__g 
                        = __Vfunc_aes_mul_gf2p4__1400__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1404__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1404__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1404__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1404__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1404__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1404__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1400__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1400__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1405__g 
                        = __Vfunc_aes_mul_gf2p4__1400__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1405__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1405__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1405__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1405__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1405__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1405__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1400__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1400__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1400__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1406__delta = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    __Vfunc_aes_mul_gf2p4__1406__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18321245999869884426ull);
    __Vfunc_aes_mul_gf2p2__1407__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1406__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1407__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1406__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1407__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1407__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1407__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1407__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1407__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1407__d)));
    __Vfunc_aes_mul_gf2p2__1407__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1407__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1407__d)));
    __Vfunc_aes_mul_gf2p2__1407__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1407__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1407__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1407__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1407__b)));
    __Vfunc_aes_mul_gf2p2__1407__Vfuncout = __Vfunc_aes_mul_gf2p2__1407__f;
    __Vfunc_aes_mul_gf2p4__1406__a = __Vfunc_aes_mul_gf2p2__1407__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1408__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1406__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1406__delta)));
    __Vfunc_aes_mul_gf2p2__1408__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1406__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1406__gamma)));
    __Vfunc_aes_mul_gf2p2__1408__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1408__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1408__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1408__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1408__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1408__d)));
    __Vfunc_aes_mul_gf2p2__1408__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1408__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1408__d)));
    __Vfunc_aes_mul_gf2p2__1408__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1408__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1408__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1408__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1408__b)));
    __Vfunc_aes_mul_gf2p2__1408__Vfuncout = __Vfunc_aes_mul_gf2p2__1408__f;
    __Vfunc_aes_mul_gf2p4__1406__b = __Vfunc_aes_mul_gf2p2__1408__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1409__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1406__delta));
    __Vfunc_aes_mul_gf2p2__1409__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1406__gamma));
    __Vfunc_aes_mul_gf2p2__1409__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1409__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1409__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1409__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1409__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1409__d)));
    __Vfunc_aes_mul_gf2p2__1409__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1409__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1409__d)));
    __Vfunc_aes_mul_gf2p2__1409__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1409__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1409__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1409__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1409__b)));
    __Vfunc_aes_mul_gf2p2__1409__Vfuncout = __Vfunc_aes_mul_gf2p2__1409__f;
    __Vfunc_aes_mul_gf2p4__1406__c = __Vfunc_aes_mul_gf2p2__1409__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1406__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1406__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1410__g 
                        = __Vfunc_aes_mul_gf2p4__1406__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1410__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1410__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1410__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1410__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1410__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1410__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1406__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1406__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1411__g 
                        = __Vfunc_aes_mul_gf2p4__1406__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1411__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1411__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1411__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1411__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1411__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1411__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1406__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1406__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1406__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1418__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1418__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8488027393821995244ull);
    __Vfunc_aes_mul_gf2p2__1419__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1418__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1419__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1418__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1419__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1419__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1419__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1419__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1419__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1419__d)));
    __Vfunc_aes_mul_gf2p2__1419__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1419__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1419__d)));
    __Vfunc_aes_mul_gf2p2__1419__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1419__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1419__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1419__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1419__b)));
    __Vfunc_aes_mul_gf2p2__1419__Vfuncout = __Vfunc_aes_mul_gf2p2__1419__f;
    __Vfunc_aes_mul_gf2p4__1418__a = __Vfunc_aes_mul_gf2p2__1419__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1420__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1418__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1418__delta)));
    __Vfunc_aes_mul_gf2p2__1420__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1418__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1418__gamma)));
    __Vfunc_aes_mul_gf2p2__1420__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1420__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1420__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1420__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1420__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1420__d)));
    __Vfunc_aes_mul_gf2p2__1420__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1420__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1420__d)));
    __Vfunc_aes_mul_gf2p2__1420__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1420__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1420__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1420__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1420__b)));
    __Vfunc_aes_mul_gf2p2__1420__Vfuncout = __Vfunc_aes_mul_gf2p2__1420__f;
    __Vfunc_aes_mul_gf2p4__1418__b = __Vfunc_aes_mul_gf2p2__1420__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1421__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1418__delta));
    __Vfunc_aes_mul_gf2p2__1421__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1418__gamma));
    __Vfunc_aes_mul_gf2p2__1421__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1421__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1421__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1421__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1421__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1421__d)));
    __Vfunc_aes_mul_gf2p2__1421__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1421__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1421__d)));
    __Vfunc_aes_mul_gf2p2__1421__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1421__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1421__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1421__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1421__b)));
    __Vfunc_aes_mul_gf2p2__1421__Vfuncout = __Vfunc_aes_mul_gf2p2__1421__f;
    __Vfunc_aes_mul_gf2p4__1418__c = __Vfunc_aes_mul_gf2p2__1421__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1418__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1418__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1422__g 
                        = __Vfunc_aes_mul_gf2p4__1418__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1422__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1422__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1422__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1422__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1422__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1422__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1418__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1418__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1423__g 
                        = __Vfunc_aes_mul_gf2p4__1418__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1423__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1423__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1423__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1423__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1423__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1423__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1418__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1418__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1418__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1388__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1388__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1388__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7927631900098365286ull);
    __Vfunc_aes_mul_gf2p2__1389__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1388__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1389__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1388__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1389__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1389__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1389__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1389__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1389__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1389__d)));
    __Vfunc_aes_mul_gf2p2__1389__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1389__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1389__d)));
    __Vfunc_aes_mul_gf2p2__1389__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1389__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1389__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1389__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1389__b)));
    __Vfunc_aes_mul_gf2p2__1389__Vfuncout = __Vfunc_aes_mul_gf2p2__1389__f;
    __Vfunc_aes_mul_gf2p4__1388__a = __Vfunc_aes_mul_gf2p2__1389__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1390__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1388__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1388__delta)));
    __Vfunc_aes_mul_gf2p2__1390__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1388__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1388__gamma)));
    __Vfunc_aes_mul_gf2p2__1390__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1390__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1390__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1390__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1390__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1390__d)));
    __Vfunc_aes_mul_gf2p2__1390__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1390__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1390__d)));
    __Vfunc_aes_mul_gf2p2__1390__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1390__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1390__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1390__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1390__b)));
    __Vfunc_aes_mul_gf2p2__1390__Vfuncout = __Vfunc_aes_mul_gf2p2__1390__f;
    __Vfunc_aes_mul_gf2p4__1388__b = __Vfunc_aes_mul_gf2p2__1390__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1391__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1388__delta));
    __Vfunc_aes_mul_gf2p2__1391__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1388__gamma));
    __Vfunc_aes_mul_gf2p2__1391__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1391__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1391__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1391__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1391__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1391__d)));
    __Vfunc_aes_mul_gf2p2__1391__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1391__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1391__d)));
    __Vfunc_aes_mul_gf2p2__1391__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1391__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1391__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1391__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1391__b)));
    __Vfunc_aes_mul_gf2p2__1391__Vfuncout = __Vfunc_aes_mul_gf2p2__1391__f;
    __Vfunc_aes_mul_gf2p4__1388__c = __Vfunc_aes_mul_gf2p2__1391__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1388__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1388__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1392__g 
                        = __Vfunc_aes_mul_gf2p4__1388__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1392__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1392__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1392__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1392__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1392__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1392__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1388__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1388__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1393__g 
                        = __Vfunc_aes_mul_gf2p4__1388__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1393__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1393__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1393__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1393__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1393__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1393__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1388__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1388__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1388__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1394__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1394__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__1394__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3321297783466523504ull);
    __Vfunc_aes_mul_gf2p2__1395__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1394__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1395__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1394__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1395__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1395__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1395__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1395__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1395__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1395__d)));
    __Vfunc_aes_mul_gf2p2__1395__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1395__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1395__d)));
    __Vfunc_aes_mul_gf2p2__1395__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1395__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1395__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1395__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1395__b)));
    __Vfunc_aes_mul_gf2p2__1395__Vfuncout = __Vfunc_aes_mul_gf2p2__1395__f;
    __Vfunc_aes_mul_gf2p4__1394__a = __Vfunc_aes_mul_gf2p2__1395__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1396__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1394__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1394__delta)));
    __Vfunc_aes_mul_gf2p2__1396__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1394__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1394__gamma)));
    __Vfunc_aes_mul_gf2p2__1396__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1396__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1396__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1396__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1396__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1396__d)));
    __Vfunc_aes_mul_gf2p2__1396__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1396__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1396__d)));
    __Vfunc_aes_mul_gf2p2__1396__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1396__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1396__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1396__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1396__b)));
    __Vfunc_aes_mul_gf2p2__1396__Vfuncout = __Vfunc_aes_mul_gf2p2__1396__f;
    __Vfunc_aes_mul_gf2p4__1394__b = __Vfunc_aes_mul_gf2p2__1396__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1397__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1394__delta));
    __Vfunc_aes_mul_gf2p2__1397__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1394__gamma));
    __Vfunc_aes_mul_gf2p2__1397__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1397__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1397__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1397__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1397__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1397__d)));
    __Vfunc_aes_mul_gf2p2__1397__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1397__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1397__d)));
    __Vfunc_aes_mul_gf2p2__1397__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1397__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1397__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1397__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1397__b)));
    __Vfunc_aes_mul_gf2p2__1397__Vfuncout = __Vfunc_aes_mul_gf2p2__1397__f;
    __Vfunc_aes_mul_gf2p4__1394__c = __Vfunc_aes_mul_gf2p2__1397__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1394__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1394__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1398__g 
                        = __Vfunc_aes_mul_gf2p4__1394__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1398__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1398__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1398__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1398__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1398__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1398__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1394__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1394__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1399__g 
                        = __Vfunc_aes_mul_gf2p4__1394__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1399__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1399__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1399__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1399__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1399__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1399__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1394__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1394__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1394__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1412__delta = (0x0000000fU 
                                          & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1412__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__1412__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16660892330294559767ull);
    __Vfunc_aes_mul_gf2p2__1413__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1412__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1413__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1412__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1413__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1413__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1413__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1413__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1413__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1413__d)));
    __Vfunc_aes_mul_gf2p2__1413__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1413__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1413__d)));
    __Vfunc_aes_mul_gf2p2__1413__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1413__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1413__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1413__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1413__b)));
    __Vfunc_aes_mul_gf2p2__1413__Vfuncout = __Vfunc_aes_mul_gf2p2__1413__f;
    __Vfunc_aes_mul_gf2p4__1412__a = __Vfunc_aes_mul_gf2p2__1413__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1414__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1412__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1412__delta)));
    __Vfunc_aes_mul_gf2p2__1414__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1412__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1412__gamma)));
    __Vfunc_aes_mul_gf2p2__1414__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1414__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1414__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1414__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1414__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1414__d)));
    __Vfunc_aes_mul_gf2p2__1414__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1414__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1414__d)));
    __Vfunc_aes_mul_gf2p2__1414__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1414__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1414__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1414__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1414__b)));
    __Vfunc_aes_mul_gf2p2__1414__Vfuncout = __Vfunc_aes_mul_gf2p2__1414__f;
    __Vfunc_aes_mul_gf2p4__1412__b = __Vfunc_aes_mul_gf2p2__1414__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1415__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1412__delta));
    __Vfunc_aes_mul_gf2p2__1415__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1412__gamma));
    __Vfunc_aes_mul_gf2p2__1415__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1415__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1415__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1415__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1415__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1415__d)));
    __Vfunc_aes_mul_gf2p2__1415__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1415__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1415__d)));
    __Vfunc_aes_mul_gf2p2__1415__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1415__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1415__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1415__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1415__b)));
    __Vfunc_aes_mul_gf2p2__1415__Vfuncout = __Vfunc_aes_mul_gf2p2__1415__f;
    __Vfunc_aes_mul_gf2p4__1412__c = __Vfunc_aes_mul_gf2p2__1415__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1412__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1412__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1416__g 
                        = __Vfunc_aes_mul_gf2p4__1412__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1416__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1416__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1416__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1416__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1416__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1416__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1412__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1412__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1417__g 
                        = __Vfunc_aes_mul_gf2p4__1412__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1417__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1417__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1417__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1417__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1417__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1417__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1412__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1412__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1412__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1424__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__1424__gamma = (0x0000000fU 
                                          & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                             >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__1424__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2814600995552344026ull);
    __Vfunc_aes_mul_gf2p2__1425__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1424__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1425__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1424__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1425__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1425__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1425__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1425__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1425__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1425__d)));
    __Vfunc_aes_mul_gf2p2__1425__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1425__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1425__d)));
    __Vfunc_aes_mul_gf2p2__1425__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1425__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1425__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1425__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1425__b)));
    __Vfunc_aes_mul_gf2p2__1425__Vfuncout = __Vfunc_aes_mul_gf2p2__1425__f;
    __Vfunc_aes_mul_gf2p4__1424__a = __Vfunc_aes_mul_gf2p2__1425__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1426__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1424__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1424__delta)));
    __Vfunc_aes_mul_gf2p2__1426__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1424__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1424__gamma)));
    __Vfunc_aes_mul_gf2p2__1426__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1426__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1426__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1426__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1426__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1426__d)));
    __Vfunc_aes_mul_gf2p2__1426__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1426__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1426__d)));
    __Vfunc_aes_mul_gf2p2__1426__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1426__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1426__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1426__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1426__b)));
    __Vfunc_aes_mul_gf2p2__1426__Vfuncout = __Vfunc_aes_mul_gf2p2__1426__f;
    __Vfunc_aes_mul_gf2p4__1424__b = __Vfunc_aes_mul_gf2p2__1426__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1427__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1424__delta));
    __Vfunc_aes_mul_gf2p2__1427__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1424__gamma));
    __Vfunc_aes_mul_gf2p2__1427__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1427__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1427__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1427__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1427__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1427__d)));
    __Vfunc_aes_mul_gf2p2__1427__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1427__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1427__d)));
    __Vfunc_aes_mul_gf2p2__1427__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1427__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1427__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1427__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1427__b)));
    __Vfunc_aes_mul_gf2p2__1427__Vfuncout = __Vfunc_aes_mul_gf2p2__1427__f;
    __Vfunc_aes_mul_gf2p4__1424__c = __Vfunc_aes_mul_gf2p2__1427__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1424__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1424__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1428__g 
                        = __Vfunc_aes_mul_gf2p4__1424__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1428__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1428__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1428__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1428__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1428__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1428__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__1424__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__1424__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1429__g 
                        = __Vfunc_aes_mul_gf2p4__1424__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1429__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1429__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1429__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1429__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1429__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__1429__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__1424__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__1424__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__1424__Vfuncout;
}

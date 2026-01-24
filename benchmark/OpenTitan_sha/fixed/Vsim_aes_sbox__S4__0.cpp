// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_aes_sbox__S4___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___act_comb__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d 
        = (((IData)(vlSelfRef.out_req_o) & (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_out_ack_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))
            ? 0U : (7U & ((IData)(vlSelfRef.out_req_o)
                           ? (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)
                           : ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q) 
                              + (3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))));
}

void Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0(Vsim_aes_sbox__S4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vsim_aes_sbox__S4___nba_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__12__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__13__Vfuncout;
    __Vfunc_aes_square_gf2p2__13__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__13__g;
    __Vfunc_aes_square_gf2p2__13__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__13__d;
    __Vfunc_aes_square_gf2p2__13__d = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__delta;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__delta = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__a;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__a = 0;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__16__b;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__b = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__17__Vfuncout;
    __Vfunc_aes_square_gf2p2__17__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__17__g;
    __Vfunc_aes_square_gf2p2__17__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__17__d;
    __Vfunc_aes_square_gf2p2__17__d = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__32__Vfuncout;
    __Vfunc_aes_mul_gf2p4__32__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__32__gamma;
    __Vfunc_aes_mul_gf2p4__32__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__32__delta;
    __Vfunc_aes_mul_gf2p4__32__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__32__a;
    __Vfunc_aes_mul_gf2p4__32__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__32__b;
    __Vfunc_aes_mul_gf2p4__32__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__32__c;
    __Vfunc_aes_mul_gf2p4__32__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__33__Vfuncout;
    __Vfunc_aes_mul_gf2p2__33__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__33__g;
    __Vfunc_aes_mul_gf2p2__33__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__33__d;
    __Vfunc_aes_mul_gf2p2__33__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__33__f;
    __Vfunc_aes_mul_gf2p2__33__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__33__a;
    __Vfunc_aes_mul_gf2p2__33__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__33__b;
    __Vfunc_aes_mul_gf2p2__33__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__33__c;
    __Vfunc_aes_mul_gf2p2__33__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__34__Vfuncout;
    __Vfunc_aes_mul_gf2p2__34__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__34__g;
    __Vfunc_aes_mul_gf2p2__34__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__34__d;
    __Vfunc_aes_mul_gf2p2__34__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__34__f;
    __Vfunc_aes_mul_gf2p2__34__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__34__a;
    __Vfunc_aes_mul_gf2p2__34__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__34__b;
    __Vfunc_aes_mul_gf2p2__34__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__34__c;
    __Vfunc_aes_mul_gf2p2__34__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__35__Vfuncout;
    __Vfunc_aes_mul_gf2p2__35__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__35__g;
    __Vfunc_aes_mul_gf2p2__35__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__35__d;
    __Vfunc_aes_mul_gf2p2__35__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__35__f;
    __Vfunc_aes_mul_gf2p2__35__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__35__a;
    __Vfunc_aes_mul_gf2p2__35__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__35__b;
    __Vfunc_aes_mul_gf2p2__35__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__35__c;
    __Vfunc_aes_mul_gf2p2__35__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__38__Vfuncout;
    __Vfunc_aes_mul_gf2p4__38__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__38__gamma;
    __Vfunc_aes_mul_gf2p4__38__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__38__delta;
    __Vfunc_aes_mul_gf2p4__38__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__38__a;
    __Vfunc_aes_mul_gf2p4__38__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__38__b;
    __Vfunc_aes_mul_gf2p4__38__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__38__c;
    __Vfunc_aes_mul_gf2p4__38__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__39__Vfuncout;
    __Vfunc_aes_mul_gf2p2__39__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__39__g;
    __Vfunc_aes_mul_gf2p2__39__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__39__d;
    __Vfunc_aes_mul_gf2p2__39__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__39__f;
    __Vfunc_aes_mul_gf2p2__39__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__39__a;
    __Vfunc_aes_mul_gf2p2__39__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__39__b;
    __Vfunc_aes_mul_gf2p2__39__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__39__c;
    __Vfunc_aes_mul_gf2p2__39__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__40__Vfuncout;
    __Vfunc_aes_mul_gf2p2__40__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__40__g;
    __Vfunc_aes_mul_gf2p2__40__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__40__d;
    __Vfunc_aes_mul_gf2p2__40__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__40__f;
    __Vfunc_aes_mul_gf2p2__40__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__40__a;
    __Vfunc_aes_mul_gf2p2__40__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__40__b;
    __Vfunc_aes_mul_gf2p2__40__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__40__c;
    __Vfunc_aes_mul_gf2p2__40__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__41__Vfuncout;
    __Vfunc_aes_mul_gf2p2__41__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__41__g;
    __Vfunc_aes_mul_gf2p2__41__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__41__d;
    __Vfunc_aes_mul_gf2p2__41__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__41__f;
    __Vfunc_aes_mul_gf2p2__41__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__41__a;
    __Vfunc_aes_mul_gf2p2__41__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__41__b;
    __Vfunc_aes_mul_gf2p2__41__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__41__c;
    __Vfunc_aes_mul_gf2p2__41__c = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__44__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__44__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__44__g;
    __Vfunc_aes_scale_omega2_gf2p2__44__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__44__d;
    __Vfunc_aes_scale_omega2_gf2p2__44__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__45__Vfuncout;
    __Vfunc_aes_square_gf2p2__45__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__45__g;
    __Vfunc_aes_square_gf2p2__45__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__45__d;
    __Vfunc_aes_square_gf2p2__45__d = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__46__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__46__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__46__g;
    __Vfunc_aes_scale_omega2_gf2p2__46__g = 0;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__46__d;
    __Vfunc_aes_scale_omega2_gf2p2__46__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__47__Vfuncout;
    __Vfunc_aes_square_gf2p2__47__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__47__g;
    __Vfunc_aes_square_gf2p2__47__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__47__d;
    __Vfunc_aes_square_gf2p2__47__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__48__Vfuncout;
    __Vfunc_aes_square_gf2p2__48__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__48__g;
    __Vfunc_aes_square_gf2p2__48__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__48__d;
    __Vfunc_aes_square_gf2p2__48__d = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__49__Vfuncout;
    __Vfunc_aes_square_gf2p2__49__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__49__g;
    __Vfunc_aes_square_gf2p2__49__g = 0;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__49__d;
    __Vfunc_aes_square_gf2p2__49__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__52__Vfuncout;
    __Vfunc_aes_mul_gf2p2__52__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__52__g;
    __Vfunc_aes_mul_gf2p2__52__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__52__d;
    __Vfunc_aes_mul_gf2p2__52__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__52__f;
    __Vfunc_aes_mul_gf2p2__52__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__52__a;
    __Vfunc_aes_mul_gf2p2__52__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__52__b;
    __Vfunc_aes_mul_gf2p2__52__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__52__c;
    __Vfunc_aes_mul_gf2p2__52__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__53__Vfuncout;
    __Vfunc_aes_mul_gf2p2__53__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__53__g;
    __Vfunc_aes_mul_gf2p2__53__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__53__d;
    __Vfunc_aes_mul_gf2p2__53__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__53__f;
    __Vfunc_aes_mul_gf2p2__53__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__53__a;
    __Vfunc_aes_mul_gf2p2__53__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__53__b;
    __Vfunc_aes_mul_gf2p2__53__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__53__c;
    __Vfunc_aes_mul_gf2p2__53__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__56__Vfuncout;
    __Vfunc_aes_mul_gf2p2__56__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__56__g;
    __Vfunc_aes_mul_gf2p2__56__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__56__d;
    __Vfunc_aes_mul_gf2p2__56__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__56__f;
    __Vfunc_aes_mul_gf2p2__56__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__56__a;
    __Vfunc_aes_mul_gf2p2__56__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__56__b;
    __Vfunc_aes_mul_gf2p2__56__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__56__c;
    __Vfunc_aes_mul_gf2p2__56__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__57__Vfuncout;
    __Vfunc_aes_mul_gf2p2__57__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__57__g;
    __Vfunc_aes_mul_gf2p2__57__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__57__d;
    __Vfunc_aes_mul_gf2p2__57__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__57__f;
    __Vfunc_aes_mul_gf2p2__57__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__57__a;
    __Vfunc_aes_mul_gf2p2__57__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__57__b;
    __Vfunc_aes_mul_gf2p2__57__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__57__c;
    __Vfunc_aes_mul_gf2p2__57__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__60__Vfuncout;
    __Vfunc_aes_mul_gf2p2__60__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__60__g;
    __Vfunc_aes_mul_gf2p2__60__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__60__d;
    __Vfunc_aes_mul_gf2p2__60__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__60__f;
    __Vfunc_aes_mul_gf2p2__60__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__60__a;
    __Vfunc_aes_mul_gf2p2__60__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__60__b;
    __Vfunc_aes_mul_gf2p2__60__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__60__c;
    __Vfunc_aes_mul_gf2p2__60__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__61__Vfuncout;
    __Vfunc_aes_mul_gf2p2__61__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__61__g;
    __Vfunc_aes_mul_gf2p2__61__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__61__d;
    __Vfunc_aes_mul_gf2p2__61__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__61__f;
    __Vfunc_aes_mul_gf2p2__61__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__61__a;
    __Vfunc_aes_mul_gf2p2__61__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__61__b;
    __Vfunc_aes_mul_gf2p2__61__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__61__c;
    __Vfunc_aes_mul_gf2p2__61__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__62__Vfuncout;
    __Vfunc_aes_mul_gf2p4__62__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__62__gamma;
    __Vfunc_aes_mul_gf2p4__62__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__62__delta;
    __Vfunc_aes_mul_gf2p4__62__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__62__a;
    __Vfunc_aes_mul_gf2p4__62__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__62__b;
    __Vfunc_aes_mul_gf2p4__62__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__62__c;
    __Vfunc_aes_mul_gf2p4__62__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__63__Vfuncout;
    __Vfunc_aes_mul_gf2p2__63__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__63__g;
    __Vfunc_aes_mul_gf2p2__63__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__63__d;
    __Vfunc_aes_mul_gf2p2__63__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__63__f;
    __Vfunc_aes_mul_gf2p2__63__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__63__a;
    __Vfunc_aes_mul_gf2p2__63__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__63__b;
    __Vfunc_aes_mul_gf2p2__63__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__63__c;
    __Vfunc_aes_mul_gf2p2__63__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__64__Vfuncout;
    __Vfunc_aes_mul_gf2p2__64__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__64__g;
    __Vfunc_aes_mul_gf2p2__64__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__64__d;
    __Vfunc_aes_mul_gf2p2__64__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__64__f;
    __Vfunc_aes_mul_gf2p2__64__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__64__a;
    __Vfunc_aes_mul_gf2p2__64__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__64__b;
    __Vfunc_aes_mul_gf2p2__64__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__64__c;
    __Vfunc_aes_mul_gf2p2__64__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__65__Vfuncout;
    __Vfunc_aes_mul_gf2p2__65__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__65__g;
    __Vfunc_aes_mul_gf2p2__65__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__65__d;
    __Vfunc_aes_mul_gf2p2__65__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__65__f;
    __Vfunc_aes_mul_gf2p2__65__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__65__a;
    __Vfunc_aes_mul_gf2p2__65__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__65__b;
    __Vfunc_aes_mul_gf2p2__65__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__65__c;
    __Vfunc_aes_mul_gf2p2__65__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__68__Vfuncout;
    __Vfunc_aes_mul_gf2p4__68__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__68__gamma;
    __Vfunc_aes_mul_gf2p4__68__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__68__delta;
    __Vfunc_aes_mul_gf2p4__68__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__68__a;
    __Vfunc_aes_mul_gf2p4__68__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__68__b;
    __Vfunc_aes_mul_gf2p4__68__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__68__c;
    __Vfunc_aes_mul_gf2p4__68__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__69__Vfuncout;
    __Vfunc_aes_mul_gf2p2__69__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__69__g;
    __Vfunc_aes_mul_gf2p2__69__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__69__d;
    __Vfunc_aes_mul_gf2p2__69__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__69__f;
    __Vfunc_aes_mul_gf2p2__69__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__69__a;
    __Vfunc_aes_mul_gf2p2__69__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__69__b;
    __Vfunc_aes_mul_gf2p2__69__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__69__c;
    __Vfunc_aes_mul_gf2p2__69__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__70__Vfuncout;
    __Vfunc_aes_mul_gf2p2__70__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__70__g;
    __Vfunc_aes_mul_gf2p2__70__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__70__d;
    __Vfunc_aes_mul_gf2p2__70__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__70__f;
    __Vfunc_aes_mul_gf2p2__70__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__70__a;
    __Vfunc_aes_mul_gf2p2__70__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__70__b;
    __Vfunc_aes_mul_gf2p2__70__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__70__c;
    __Vfunc_aes_mul_gf2p2__70__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__71__Vfuncout;
    __Vfunc_aes_mul_gf2p2__71__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__71__g;
    __Vfunc_aes_mul_gf2p2__71__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__71__d;
    __Vfunc_aes_mul_gf2p2__71__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__71__f;
    __Vfunc_aes_mul_gf2p2__71__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__71__a;
    __Vfunc_aes_mul_gf2p2__71__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__71__b;
    __Vfunc_aes_mul_gf2p2__71__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__71__c;
    __Vfunc_aes_mul_gf2p2__71__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__74__Vfuncout;
    __Vfunc_aes_mul_gf2p4__74__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__74__gamma;
    __Vfunc_aes_mul_gf2p4__74__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__74__delta;
    __Vfunc_aes_mul_gf2p4__74__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__74__a;
    __Vfunc_aes_mul_gf2p4__74__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__74__b;
    __Vfunc_aes_mul_gf2p4__74__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__74__c;
    __Vfunc_aes_mul_gf2p4__74__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__75__Vfuncout;
    __Vfunc_aes_mul_gf2p2__75__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__75__g;
    __Vfunc_aes_mul_gf2p2__75__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__75__d;
    __Vfunc_aes_mul_gf2p2__75__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__75__f;
    __Vfunc_aes_mul_gf2p2__75__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__75__a;
    __Vfunc_aes_mul_gf2p2__75__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__75__b;
    __Vfunc_aes_mul_gf2p2__75__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__75__c;
    __Vfunc_aes_mul_gf2p2__75__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__76__Vfuncout;
    __Vfunc_aes_mul_gf2p2__76__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__76__g;
    __Vfunc_aes_mul_gf2p2__76__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__76__d;
    __Vfunc_aes_mul_gf2p2__76__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__76__f;
    __Vfunc_aes_mul_gf2p2__76__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__76__a;
    __Vfunc_aes_mul_gf2p2__76__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__76__b;
    __Vfunc_aes_mul_gf2p2__76__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__76__c;
    __Vfunc_aes_mul_gf2p2__76__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__77__Vfuncout;
    __Vfunc_aes_mul_gf2p2__77__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__77__g;
    __Vfunc_aes_mul_gf2p2__77__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__77__d;
    __Vfunc_aes_mul_gf2p2__77__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__77__f;
    __Vfunc_aes_mul_gf2p2__77__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__77__a;
    __Vfunc_aes_mul_gf2p2__77__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__77__b;
    __Vfunc_aes_mul_gf2p2__77__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__77__c;
    __Vfunc_aes_mul_gf2p2__77__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__80__Vfuncout;
    __Vfunc_aes_mul_gf2p4__80__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__80__gamma;
    __Vfunc_aes_mul_gf2p4__80__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__80__delta;
    __Vfunc_aes_mul_gf2p4__80__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__80__a;
    __Vfunc_aes_mul_gf2p4__80__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__80__b;
    __Vfunc_aes_mul_gf2p4__80__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__80__c;
    __Vfunc_aes_mul_gf2p4__80__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__81__Vfuncout;
    __Vfunc_aes_mul_gf2p2__81__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__81__g;
    __Vfunc_aes_mul_gf2p2__81__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__81__d;
    __Vfunc_aes_mul_gf2p2__81__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__81__f;
    __Vfunc_aes_mul_gf2p2__81__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__81__a;
    __Vfunc_aes_mul_gf2p2__81__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__81__b;
    __Vfunc_aes_mul_gf2p2__81__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__81__c;
    __Vfunc_aes_mul_gf2p2__81__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__82__Vfuncout;
    __Vfunc_aes_mul_gf2p2__82__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__82__g;
    __Vfunc_aes_mul_gf2p2__82__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__82__d;
    __Vfunc_aes_mul_gf2p2__82__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__82__f;
    __Vfunc_aes_mul_gf2p2__82__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__82__a;
    __Vfunc_aes_mul_gf2p2__82__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__82__b;
    __Vfunc_aes_mul_gf2p2__82__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__82__c;
    __Vfunc_aes_mul_gf2p2__82__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__83__Vfuncout;
    __Vfunc_aes_mul_gf2p2__83__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__83__g;
    __Vfunc_aes_mul_gf2p2__83__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__83__d;
    __Vfunc_aes_mul_gf2p2__83__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__83__f;
    __Vfunc_aes_mul_gf2p2__83__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__83__a;
    __Vfunc_aes_mul_gf2p2__83__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__83__b;
    __Vfunc_aes_mul_gf2p2__83__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__83__c;
    __Vfunc_aes_mul_gf2p2__83__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__86__Vfuncout;
    __Vfunc_aes_mul_gf2p4__86__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__86__gamma;
    __Vfunc_aes_mul_gf2p4__86__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__86__delta;
    __Vfunc_aes_mul_gf2p4__86__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__86__a;
    __Vfunc_aes_mul_gf2p4__86__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__86__b;
    __Vfunc_aes_mul_gf2p4__86__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__86__c;
    __Vfunc_aes_mul_gf2p4__86__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__87__Vfuncout;
    __Vfunc_aes_mul_gf2p2__87__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__87__g;
    __Vfunc_aes_mul_gf2p2__87__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__87__d;
    __Vfunc_aes_mul_gf2p2__87__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__87__f;
    __Vfunc_aes_mul_gf2p2__87__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__87__a;
    __Vfunc_aes_mul_gf2p2__87__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__87__b;
    __Vfunc_aes_mul_gf2p2__87__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__87__c;
    __Vfunc_aes_mul_gf2p2__87__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__88__Vfuncout;
    __Vfunc_aes_mul_gf2p2__88__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__88__g;
    __Vfunc_aes_mul_gf2p2__88__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__88__d;
    __Vfunc_aes_mul_gf2p2__88__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__88__f;
    __Vfunc_aes_mul_gf2p2__88__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__88__a;
    __Vfunc_aes_mul_gf2p2__88__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__88__b;
    __Vfunc_aes_mul_gf2p2__88__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__88__c;
    __Vfunc_aes_mul_gf2p2__88__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__89__Vfuncout;
    __Vfunc_aes_mul_gf2p2__89__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__89__g;
    __Vfunc_aes_mul_gf2p2__89__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__89__d;
    __Vfunc_aes_mul_gf2p2__89__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__89__f;
    __Vfunc_aes_mul_gf2p2__89__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__89__a;
    __Vfunc_aes_mul_gf2p2__89__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__89__b;
    __Vfunc_aes_mul_gf2p2__89__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__89__c;
    __Vfunc_aes_mul_gf2p2__89__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__92__Vfuncout;
    __Vfunc_aes_mul_gf2p4__92__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__92__gamma;
    __Vfunc_aes_mul_gf2p4__92__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__92__delta;
    __Vfunc_aes_mul_gf2p4__92__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__92__a;
    __Vfunc_aes_mul_gf2p4__92__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__92__b;
    __Vfunc_aes_mul_gf2p4__92__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__92__c;
    __Vfunc_aes_mul_gf2p4__92__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__93__Vfuncout;
    __Vfunc_aes_mul_gf2p2__93__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__93__g;
    __Vfunc_aes_mul_gf2p2__93__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__93__d;
    __Vfunc_aes_mul_gf2p2__93__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__93__f;
    __Vfunc_aes_mul_gf2p2__93__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__93__a;
    __Vfunc_aes_mul_gf2p2__93__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__93__b;
    __Vfunc_aes_mul_gf2p2__93__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__93__c;
    __Vfunc_aes_mul_gf2p2__93__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__94__Vfuncout;
    __Vfunc_aes_mul_gf2p2__94__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__94__g;
    __Vfunc_aes_mul_gf2p2__94__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__94__d;
    __Vfunc_aes_mul_gf2p2__94__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__94__f;
    __Vfunc_aes_mul_gf2p2__94__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__94__a;
    __Vfunc_aes_mul_gf2p2__94__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__94__b;
    __Vfunc_aes_mul_gf2p2__94__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__94__c;
    __Vfunc_aes_mul_gf2p2__94__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__Vfuncout;
    __Vfunc_aes_mul_gf2p2__95__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__g;
    __Vfunc_aes_mul_gf2p2__95__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__d;
    __Vfunc_aes_mul_gf2p2__95__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__95__f;
    __Vfunc_aes_mul_gf2p2__95__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__95__a;
    __Vfunc_aes_mul_gf2p2__95__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__95__b;
    __Vfunc_aes_mul_gf2p2__95__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__95__c;
    __Vfunc_aes_mul_gf2p2__95__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__98__Vfuncout;
    __Vfunc_aes_mul_gf2p4__98__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__98__gamma;
    __Vfunc_aes_mul_gf2p4__98__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__98__delta;
    __Vfunc_aes_mul_gf2p4__98__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__98__a;
    __Vfunc_aes_mul_gf2p4__98__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__98__b;
    __Vfunc_aes_mul_gf2p4__98__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__98__c;
    __Vfunc_aes_mul_gf2p4__98__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__Vfuncout;
    __Vfunc_aes_mul_gf2p2__99__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__g;
    __Vfunc_aes_mul_gf2p2__99__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__d;
    __Vfunc_aes_mul_gf2p2__99__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__f;
    __Vfunc_aes_mul_gf2p2__99__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__99__a;
    __Vfunc_aes_mul_gf2p2__99__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__99__b;
    __Vfunc_aes_mul_gf2p2__99__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__99__c;
    __Vfunc_aes_mul_gf2p2__99__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__Vfuncout;
    __Vfunc_aes_mul_gf2p2__100__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__g;
    __Vfunc_aes_mul_gf2p2__100__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__d;
    __Vfunc_aes_mul_gf2p2__100__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__f;
    __Vfunc_aes_mul_gf2p2__100__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__100__a;
    __Vfunc_aes_mul_gf2p2__100__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__100__b;
    __Vfunc_aes_mul_gf2p2__100__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__100__c;
    __Vfunc_aes_mul_gf2p2__100__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__Vfuncout;
    __Vfunc_aes_mul_gf2p2__101__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__g;
    __Vfunc_aes_mul_gf2p2__101__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__d;
    __Vfunc_aes_mul_gf2p2__101__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__f;
    __Vfunc_aes_mul_gf2p2__101__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__101__a;
    __Vfunc_aes_mul_gf2p2__101__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__101__b;
    __Vfunc_aes_mul_gf2p2__101__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__101__c;
    __Vfunc_aes_mul_gf2p2__101__c = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__104__Vfuncout;
    __Vfunc_aes_mul_gf2p4__104__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__104__gamma;
    __Vfunc_aes_mul_gf2p4__104__gamma = 0;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__104__delta;
    __Vfunc_aes_mul_gf2p4__104__delta = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__104__a;
    __Vfunc_aes_mul_gf2p4__104__a = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__104__b;
    __Vfunc_aes_mul_gf2p4__104__b = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__104__c;
    __Vfunc_aes_mul_gf2p4__104__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__105__Vfuncout;
    __Vfunc_aes_mul_gf2p2__105__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__105__g;
    __Vfunc_aes_mul_gf2p2__105__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__105__d;
    __Vfunc_aes_mul_gf2p2__105__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__105__f;
    __Vfunc_aes_mul_gf2p2__105__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__105__a;
    __Vfunc_aes_mul_gf2p2__105__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__105__b;
    __Vfunc_aes_mul_gf2p2__105__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__105__c;
    __Vfunc_aes_mul_gf2p2__105__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__106__Vfuncout;
    __Vfunc_aes_mul_gf2p2__106__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__106__g;
    __Vfunc_aes_mul_gf2p2__106__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__106__d;
    __Vfunc_aes_mul_gf2p2__106__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__106__f;
    __Vfunc_aes_mul_gf2p2__106__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__106__a;
    __Vfunc_aes_mul_gf2p2__106__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__106__b;
    __Vfunc_aes_mul_gf2p2__106__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__106__c;
    __Vfunc_aes_mul_gf2p2__106__c = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__107__Vfuncout;
    __Vfunc_aes_mul_gf2p2__107__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__107__g;
    __Vfunc_aes_mul_gf2p2__107__g = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__107__d;
    __Vfunc_aes_mul_gf2p2__107__d = 0;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__107__f;
    __Vfunc_aes_mul_gf2p2__107__f = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__107__a;
    __Vfunc_aes_mul_gf2p2__107__a = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__107__b;
    __Vfunc_aes_mul_gf2p2__107__b = 0;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__107__c;
    __Vfunc_aes_mul_gf2p2__107__c = 0;
    // Body
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x00fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                                                 >> 8U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                               >> 0x0000000aU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                    << 2U) ^ (0x03fffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                                                 >> 6U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
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
                                    ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__) 
                                   << 4U)) | (0x0000000fU 
                                              & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__)));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
                                    << 4U) ^ (0xfffffff0U 
                                              & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                                                 >> 0x00000010U)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                               >> 0x00000012U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
                                    << 2U) ^ (0x000ffffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                                                 >> 0x0000000cU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                               >> 0x0000000eU))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
                                    << 2U) ^ (0x0003fffcU 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                                                 >> 0x0000000eU)))) 
                   | (3U & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                               >> 0x00000010U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0x0000000cU & ((0x3ffffffcU & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                   >> 2U)) 
                                   ^ (0x003ffffcU & 
                                      (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                                       >> 0x0000000aU)))) 
                   | (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
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
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                                                 >> 0x00000014U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                                        >> 0x00000018U))));
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0x000000f0U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by) 
                                    << 4U) ^ (0x0000fff0U 
                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
                                                 >> 0x00000010U)))) 
                   | (0x0000000fU & ((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx) 
                                     ^ (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd__BRA__27__03a0__KET__ 
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
                vlSelfRef.__Vfunc_aes_mvm__0__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__0__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__0__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__0__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__0__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__0__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__0__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__0__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__0__vec_b 
                    = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [0U][0U]);
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__0__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__0__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__0__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__0__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__0__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_b 
                        = (0x000000ffU & (0x63U ^ vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                          [0U][0U]));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__1__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__1__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__1__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__1__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__1__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [0U][0U]);
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__2__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__2__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__2__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2__Vfuncout))));
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
            ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__3__mat_a
               [0U] = 0x98U;
                vlSelfRef.__Vfunc_aes_mvm__3__mat_a
               [1U] = 0xf3U;
                vlSelfRef.__Vfunc_aes_mvm__3__mat_a
               [2U] = 0xf2U;
                vlSelfRef.__Vfunc_aes_mvm__3__mat_a
               [3U] = 0x48U;
                vlSelfRef.__Vfunc_aes_mvm__3__mat_a
               [4U] = 9U;
                vlSelfRef.__Vfunc_aes_mvm__3__mat_a
               [5U] = 0x81U;
                vlSelfRef.__Vfunc_aes_mvm__3__mat_a
               [6U] = 0xa9U;
                vlSelfRef.__Vfunc_aes_mvm__3__mat_a
               [7U] = 0xffU;
                vlSelfRef.__Vfunc_aes_mvm__3__vec_b 
                    = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                       [1U][0U]);
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__3__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__3__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__3__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__3__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__3__Vfuncout))
            : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                   [0U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                   [1U] = 0x79U;
                    vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                   [2U] = 5U;
                    vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                   [3U] = 0xebU;
                    vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                   [4U] = 0x12U;
                    vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                   [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                   [6U] = 0x51U;
                    vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                   [7U] = 0x53U;
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][0U]);
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__4__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__4__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__4__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__4__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__4__Vfuncout))
                : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                   [0U] = 0x98U;
                    vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                   [1U] = 0xf3U;
                    vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                   [2U] = 0xf2U;
                    vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                   [3U] = 0x48U;
                    vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                   [4U] = 9U;
                    vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                   [5U] = 0x81U;
                    vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                   [6U] = 0xa9U;
                    vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                   [7U] = 0xffU;
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_b 
                        = (0x000000ffU & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                           [1U][0U]);
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__5__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__5__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__5__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__5__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__5__Vfuncout))));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__a = (3U 
                                                   & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma) 
                                                       >> 2U) 
                                                      ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma)));
    __Vfunc_aes_square_gf2p2__13__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__12__gamma));
    __Vfunc_aes_square_gf2p2__13__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__13__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__13__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__13__Vfuncout = __Vfunc_aes_square_gf2p2__13__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__b = __Vfunc_aes_square_gf2p2__13__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__14__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__12__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__14__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__14__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__14__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__14__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__14__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__14__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__15__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__12__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__15__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__15__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__15__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__15__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__15__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__15__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__12__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__12__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__12__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
            << 8U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma 
        = (0x0000000fU & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                           >> 4U) ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__a = (3U 
                                                   & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma) 
                                                       >> 2U) 
                                                      ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma)));
    __Vfunc_aes_square_gf2p2__17__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__16__gamma));
    __Vfunc_aes_square_gf2p2__17__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__17__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__17__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__17__Vfuncout = __Vfunc_aes_square_gf2p2__17__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__b = __Vfunc_aes_square_gf2p2__17__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__delta 
        = ((([&]() {
                    vlSelfRef.__Vfunc_aes_square_gf2p2__18__g 
                        = __Vfunc_aes_square_scale_gf2p4_gf2p2__16__a;
                    vlSelfRef.__Vfunc_aes_square_gf2p2__18__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__18__g) 
                                  << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__18__g) 
                                                   >> 1U)));
                    vlSelfRef.__Vfunc_aes_square_gf2p2__18__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_square_gf2p2__18__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_square_gf2p2__18__Vfuncout)) 
            << 2U) | ([&]() {
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__19__g 
                    = __Vfunc_aes_square_scale_gf2p4_gf2p2__16__b;
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__19__d 
                    = ((2U & (VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__19__g) 
                              << 1U)) | (1U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__19__g) 
                                               >> 1U)));
                vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__19__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__19__d;
            }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega_gf2p2__19__Vfuncout)));
    if (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) {
        if (vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                    << 4U) | (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma));
        }
    } else {
        vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    __Vfunc_aes_square_scale_gf2p4_gf2p2__16__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__16__delta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__16__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__32__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p4__32__gamma = (0x0000000fU 
                                        & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                           >> 0x0000000cU));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_aes_mul_gf2p4__32__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15478192743871101689ull);
    __Vfunc_aes_mul_gf2p2__33__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__32__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__33__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__32__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__33__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__33__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__33__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__33__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__33__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__33__d)));
    __Vfunc_aes_mul_gf2p2__33__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__33__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__33__d)));
    __Vfunc_aes_mul_gf2p2__33__f = ((((IData)(__Vfunc_aes_mul_gf2p2__33__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__33__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__33__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__33__b)));
    __Vfunc_aes_mul_gf2p2__33__Vfuncout = __Vfunc_aes_mul_gf2p2__33__f;
    __Vfunc_aes_mul_gf2p4__32__a = __Vfunc_aes_mul_gf2p2__33__Vfuncout;
    __Vfunc_aes_mul_gf2p2__34__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__32__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__32__delta)));
    __Vfunc_aes_mul_gf2p2__34__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__32__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__32__gamma)));
    __Vfunc_aes_mul_gf2p2__34__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__34__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__34__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__34__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__34__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__34__d)));
    __Vfunc_aes_mul_gf2p2__34__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__34__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__34__d)));
    __Vfunc_aes_mul_gf2p2__34__f = ((((IData)(__Vfunc_aes_mul_gf2p2__34__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__34__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__34__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__34__b)));
    __Vfunc_aes_mul_gf2p2__34__Vfuncout = __Vfunc_aes_mul_gf2p2__34__f;
    __Vfunc_aes_mul_gf2p4__32__b = __Vfunc_aes_mul_gf2p2__34__Vfuncout;
    __Vfunc_aes_mul_gf2p2__35__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__32__delta));
    __Vfunc_aes_mul_gf2p2__35__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__32__gamma));
    __Vfunc_aes_mul_gf2p2__35__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__35__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__35__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__35__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__35__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__35__d)));
    __Vfunc_aes_mul_gf2p2__35__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__35__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__35__d)));
    __Vfunc_aes_mul_gf2p2__35__f = ((((IData)(__Vfunc_aes_mul_gf2p2__35__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__35__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__35__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__35__b)));
    __Vfunc_aes_mul_gf2p2__35__Vfuncout = __Vfunc_aes_mul_gf2p2__35__f;
    __Vfunc_aes_mul_gf2p4__32__c = __Vfunc_aes_mul_gf2p2__35__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__32__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__32__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__36__g 
                        = __Vfunc_aes_mul_gf2p4__32__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__36__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__36__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__36__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__36__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__36__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__36__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__32__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__32__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__37__g 
                        = __Vfunc_aes_mul_gf2p4__32__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__37__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__37__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__37__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__37__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__37__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__37__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__32__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__32__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__32__Vfuncout;
    __Vfunc_aes_mul_gf2p4__38__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p4__38__gamma = (0x0000000fU 
                                        & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                           >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__38__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3833993094378021160ull);
    __Vfunc_aes_mul_gf2p2__39__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__38__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__39__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__38__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__39__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__39__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__39__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__39__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__39__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__39__d)));
    __Vfunc_aes_mul_gf2p2__39__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__39__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__39__d)));
    __Vfunc_aes_mul_gf2p2__39__f = ((((IData)(__Vfunc_aes_mul_gf2p2__39__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__39__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__39__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__39__b)));
    __Vfunc_aes_mul_gf2p2__39__Vfuncout = __Vfunc_aes_mul_gf2p2__39__f;
    __Vfunc_aes_mul_gf2p4__38__a = __Vfunc_aes_mul_gf2p2__39__Vfuncout;
    __Vfunc_aes_mul_gf2p2__40__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__38__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__38__delta)));
    __Vfunc_aes_mul_gf2p2__40__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__38__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__38__gamma)));
    __Vfunc_aes_mul_gf2p2__40__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__40__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__40__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__40__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__40__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__40__d)));
    __Vfunc_aes_mul_gf2p2__40__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__40__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__40__d)));
    __Vfunc_aes_mul_gf2p2__40__f = ((((IData)(__Vfunc_aes_mul_gf2p2__40__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__40__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__40__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__40__b)));
    __Vfunc_aes_mul_gf2p2__40__Vfuncout = __Vfunc_aes_mul_gf2p2__40__f;
    __Vfunc_aes_mul_gf2p4__38__b = __Vfunc_aes_mul_gf2p2__40__Vfuncout;
    __Vfunc_aes_mul_gf2p2__41__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__38__delta));
    __Vfunc_aes_mul_gf2p2__41__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__38__gamma));
    __Vfunc_aes_mul_gf2p2__41__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__41__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__41__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__41__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__41__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__41__d)));
    __Vfunc_aes_mul_gf2p2__41__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__41__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__41__d)));
    __Vfunc_aes_mul_gf2p2__41__f = ((((IData)(__Vfunc_aes_mul_gf2p2__41__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__41__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__41__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__41__b)));
    __Vfunc_aes_mul_gf2p2__41__Vfuncout = __Vfunc_aes_mul_gf2p2__41__f;
    __Vfunc_aes_mul_gf2p4__38__c = __Vfunc_aes_mul_gf2p2__41__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__38__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__38__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__42__g 
                        = __Vfunc_aes_mul_gf2p4__38__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__42__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__42__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__42__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__42__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__42__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__42__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__38__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__38__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__43__g 
                        = __Vfunc_aes_mul_gf2p4__38__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__43__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__43__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__43__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__43__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__43__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__43__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__38__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__38__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__38__Vfuncout;
    __Vfunc_aes_mul_gf2p2__56__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__56__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                          >> 6U));
    __Vfunc_aes_mul_gf2p2__56__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__56__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__56__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__56__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__56__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__56__d)));
    __Vfunc_aes_mul_gf2p2__56__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__56__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__56__d)));
    __Vfunc_aes_mul_gf2p2__56__f = ((((IData)(__Vfunc_aes_mul_gf2p2__56__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__56__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__56__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__56__b)));
    __Vfunc_aes_mul_gf2p2__56__Vfuncout = __Vfunc_aes_mul_gf2p2__56__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__56__Vfuncout;
    __Vfunc_aes_mul_gf2p2__57__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__57__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__57__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__57__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__57__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__57__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__57__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__57__d)));
    __Vfunc_aes_mul_gf2p2__57__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__57__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__57__d)));
    __Vfunc_aes_mul_gf2p2__57__f = ((((IData)(__Vfunc_aes_mul_gf2p2__57__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__57__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__57__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__57__b)));
    __Vfunc_aes_mul_gf2p2__57__Vfuncout = __Vfunc_aes_mul_gf2p2__57__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__57__Vfuncout;
    __Vfunc_aes_mul_gf2p2__60__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__60__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__60__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__60__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__60__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__60__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__60__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__60__d)));
    __Vfunc_aes_mul_gf2p2__60__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__60__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__60__d)));
    __Vfunc_aes_mul_gf2p2__60__f = ((((IData)(__Vfunc_aes_mul_gf2p2__60__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__60__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__60__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__60__b)));
    __Vfunc_aes_mul_gf2p2__60__Vfuncout = __Vfunc_aes_mul_gf2p2__60__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__60__Vfuncout;
    __Vfunc_aes_mul_gf2p2__61__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__61__g = (3U & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__61__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__61__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__61__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__61__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__61__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__61__d)));
    __Vfunc_aes_mul_gf2p2__61__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__61__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__61__d)));
    __Vfunc_aes_mul_gf2p2__61__f = ((((IData)(__Vfunc_aes_mul_gf2p2__61__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__61__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__61__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__61__b)));
    __Vfunc_aes_mul_gf2p2__61__Vfuncout = __Vfunc_aes_mul_gf2p2__61__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__61__Vfuncout;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__u_prim_flop_ab_yz0__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i 
        = ((3U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (1U == (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q)));
    vlSelfRef.data_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? (0x63U ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                     [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                     [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                     [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                     [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                     [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                     [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                     [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                     [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__6__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__6__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__6__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__6__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__6__Vfuncout)))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__7__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__7__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__7__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__7__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__7__Vfuncout))
                             : (0x63U ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                         [0U] = 0x58U;
                        vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                         [1U] = 0x2dU;
                        vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                         [2U] = 0x9eU;
                        vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                         [3U] = 0x0bU;
                        vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                         [4U] = 0xdcU;
                        vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                         [5U] = 4U;
                        vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                         [6U] = 3U;
                        vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                         [7U] = 0x24U;
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_b 
                            = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_inv;
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c = 0U;
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                           >> 7U) & 
                                          vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                          [0U])));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 6U)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 5U)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 4U)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 3U)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 2U)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                   >> 1U)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x03fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x07fffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x0ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x1ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x3ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x7ffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (2U & ((0xfffffffeU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0xfffffffeU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x07fffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x0ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x1ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x3ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x7ffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [4U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (4U & ((0xfffffffcU 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0xfffffffcU 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x0ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [0U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x1ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [1U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x3ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [2U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0x7ffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [3U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                        ^ (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                           [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [5U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [6U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (8U & ((0xfffffff8U 
                                         & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                        ^ (0xfffffff8U 
                                           & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                              [7U] 
                                              & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                 << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0x1ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        >> 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0x3ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0x7ffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                  [3U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000010U & ((0xfffffff0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xfffffff0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0x3fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        >> 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0x7fffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                  [2U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000020U & ((0xffffffe0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffe0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0x7fffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [0U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        >> 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                  [1U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000040U & ((0xffffffc0U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c) 
                                                 ^ 
                                                 (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                  [0U] 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b)))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [1U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 1U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [2U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 2U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [3U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 3U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [4U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 4U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [5U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 5U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [6U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 6U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__vec_c 
                            = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                               | (0x00000080U & ((0xffffff80U 
                                                  & (IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_c)) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (vlSelfRef.__Vfunc_aes_mvm__8__mat_a
                                                     [7U] 
                                                     & ((IData)(vlSelfRef.__Vfunc_aes_mvm__8__vec_b) 
                                                        << 7U))))));
                        vlSelfRef.__Vfunc_aes_mvm__8__Vfuncout 
                            = vlSelfRef.__Vfunc_aes_mvm__8__vec_c;
                    }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__8__Vfuncout)))));
    vlSelfRef.mask_o = ((1U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                         ? ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                            [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                            [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                            [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                            [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                            [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                            [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                            [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                            [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__9__vec_b 
                    = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__9__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__9__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__9__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__9__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__9__Vfuncout))
                         : ((2U == (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                             ? ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                [0U] = 0x64U;
                    vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                [1U] = 0x78U;
                    vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                [2U] = 0x6eU;
                    vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                [3U] = 0x8cU;
                    vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                [4U] = 0x68U;
                    vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                [5U] = 0x29U;
                    vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                [6U] = 0xdeU;
                    vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                [7U] = 0x60U;
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__10__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__10__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__10__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__10__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__10__Vfuncout))
                             : ([&]() {
                    vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                [0U] = 0x58U;
                    vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                [1U] = 0x2dU;
                    vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                [2U] = 0x9eU;
                    vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                [3U] = 0x0bU;
                    vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                [4U] = 0xdcU;
                    vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                [5U] = 4U;
                    vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                [6U] = 3U;
                    vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                [7U] = 0x24U;
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_b 
                        = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_inv;
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c = 0U;
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                       >> 7U) & vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                      [0U])));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                               >> 6U)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                               >> 5U)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                               >> 4U)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                               >> 3U)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                               >> 2U)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                               >> 1U)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x03fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x07fffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x0ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x1ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x3ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x7ffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0xfffffffeU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x07fffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x0ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x1ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x3ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x7ffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0xfffffffcU 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x0ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [0U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x1ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x3ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0x7ffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                    ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                       [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                    ^ (0xfffffff8U 
                                       & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                          [7U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                  << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0x1ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      >> 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0x3ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0x7ffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                [3U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000010U & ((0xfffffff0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xfffffff0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0x3fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      >> 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0x7fffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                [2U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000020U & ((0xffffffe0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffe0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0x7fffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [0U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      >> 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                [1U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000040U & ((0xffffffc0U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffffc0U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c) 
                                             ^ (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                [0U] 
                                                & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b)))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [1U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 1U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [2U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 2U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [3U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 3U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [4U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 4U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [5U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 5U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [6U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 6U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__vec_c 
                        = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                           | (0x00000080U & ((0xffffff80U 
                                              & (IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_c)) 
                                             ^ (0xffffff80U 
                                                & (vlSelfRef.__Vfunc_aes_mvm__11__mat_a
                                                   [7U] 
                                                   & ((IData)(vlSelfRef.__Vfunc_aes_mvm__11__vec_b) 
                                                      << 7U))))));
                    vlSelfRef.__Vfunc_aes_mvm__11__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_mvm__11__vec_c;
                }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__11__Vfuncout))));
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
    __Vfunc_aes_square_gf2p2__45__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma) 
                                              >> 2U) 
                                             ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma)));
    __Vfunc_aes_square_gf2p2__45__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__45__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__45__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__45__Vfuncout = __Vfunc_aes_square_gf2p2__45__d;
    __Vfunc_aes_scale_omega2_gf2p2__44__g = __Vfunc_aes_square_gf2p2__45__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__44__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__44__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__44__g)));
    __Vfunc_aes_scale_omega2_gf2p2__44__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__44__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__44__Vfuncout;
    __Vfunc_aes_square_gf2p2__47__g = (3U & (((IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma) 
                                              >> 2U) 
                                             ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma)));
    __Vfunc_aes_square_gf2p2__47__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__47__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__47__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__47__Vfuncout = __Vfunc_aes_square_gf2p2__47__d;
    __Vfunc_aes_scale_omega2_gf2p2__46__g = __Vfunc_aes_square_gf2p2__47__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__46__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__46__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__46__g)));
    __Vfunc_aes_scale_omega2_gf2p2__46__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__46__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__46__Vfuncout;
    __Vfunc_aes_mul_gf2p4__62__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    __Vfunc_aes_mul_gf2p4__62__gamma = (0x0000000fU 
                                        & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                           >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__62__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1761915638838862129ull);
    __Vfunc_aes_mul_gf2p2__63__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__62__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__63__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__62__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__63__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__63__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__63__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__63__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__63__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__63__d)));
    __Vfunc_aes_mul_gf2p2__63__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__63__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__63__d)));
    __Vfunc_aes_mul_gf2p2__63__f = ((((IData)(__Vfunc_aes_mul_gf2p2__63__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__63__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__63__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__63__b)));
    __Vfunc_aes_mul_gf2p2__63__Vfuncout = __Vfunc_aes_mul_gf2p2__63__f;
    __Vfunc_aes_mul_gf2p4__62__a = __Vfunc_aes_mul_gf2p2__63__Vfuncout;
    __Vfunc_aes_mul_gf2p2__64__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__62__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__62__delta)));
    __Vfunc_aes_mul_gf2p2__64__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__62__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__62__gamma)));
    __Vfunc_aes_mul_gf2p2__64__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__64__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__64__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__64__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__64__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__64__d)));
    __Vfunc_aes_mul_gf2p2__64__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__64__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__64__d)));
    __Vfunc_aes_mul_gf2p2__64__f = ((((IData)(__Vfunc_aes_mul_gf2p2__64__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__64__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__64__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__64__b)));
    __Vfunc_aes_mul_gf2p2__64__Vfuncout = __Vfunc_aes_mul_gf2p2__64__f;
    __Vfunc_aes_mul_gf2p4__62__b = __Vfunc_aes_mul_gf2p2__64__Vfuncout;
    __Vfunc_aes_mul_gf2p2__65__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__62__delta));
    __Vfunc_aes_mul_gf2p2__65__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__62__gamma));
    __Vfunc_aes_mul_gf2p2__65__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__65__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__65__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__65__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__65__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__65__d)));
    __Vfunc_aes_mul_gf2p2__65__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__65__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__65__d)));
    __Vfunc_aes_mul_gf2p2__65__f = ((((IData)(__Vfunc_aes_mul_gf2p2__65__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__65__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__65__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__65__b)));
    __Vfunc_aes_mul_gf2p2__65__Vfuncout = __Vfunc_aes_mul_gf2p2__65__f;
    __Vfunc_aes_mul_gf2p4__62__c = __Vfunc_aes_mul_gf2p2__65__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__62__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__62__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__66__g 
                        = __Vfunc_aes_mul_gf2p4__62__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__66__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__66__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__66__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__66__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__66__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__66__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__62__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__62__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__67__g 
                        = __Vfunc_aes_mul_gf2p4__62__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__67__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__67__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__67__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__67__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__67__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__67__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__62__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__62__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__62__Vfuncout;
    __Vfunc_aes_mul_gf2p4__80__delta = (0x0000000fU 
                                        & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                           >> 4U));
    __Vfunc_aes_mul_gf2p4__80__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__80__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15776006412951325713ull);
    __Vfunc_aes_mul_gf2p2__81__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__80__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__81__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__80__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__81__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__81__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__81__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__81__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__81__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__81__d)));
    __Vfunc_aes_mul_gf2p2__81__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__81__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__81__d)));
    __Vfunc_aes_mul_gf2p2__81__f = ((((IData)(__Vfunc_aes_mul_gf2p2__81__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__81__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__81__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__81__b)));
    __Vfunc_aes_mul_gf2p2__81__Vfuncout = __Vfunc_aes_mul_gf2p2__81__f;
    __Vfunc_aes_mul_gf2p4__80__a = __Vfunc_aes_mul_gf2p2__81__Vfuncout;
    __Vfunc_aes_mul_gf2p2__82__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__80__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__80__delta)));
    __Vfunc_aes_mul_gf2p2__82__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__80__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__80__gamma)));
    __Vfunc_aes_mul_gf2p2__82__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__82__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__82__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__82__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__82__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__82__d)));
    __Vfunc_aes_mul_gf2p2__82__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__82__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__82__d)));
    __Vfunc_aes_mul_gf2p2__82__f = ((((IData)(__Vfunc_aes_mul_gf2p2__82__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__82__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__82__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__82__b)));
    __Vfunc_aes_mul_gf2p2__82__Vfuncout = __Vfunc_aes_mul_gf2p2__82__f;
    __Vfunc_aes_mul_gf2p4__80__b = __Vfunc_aes_mul_gf2p2__82__Vfuncout;
    __Vfunc_aes_mul_gf2p2__83__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__80__delta));
    __Vfunc_aes_mul_gf2p2__83__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__80__gamma));
    __Vfunc_aes_mul_gf2p2__83__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__83__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__83__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__83__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__83__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__83__d)));
    __Vfunc_aes_mul_gf2p2__83__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__83__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__83__d)));
    __Vfunc_aes_mul_gf2p2__83__f = ((((IData)(__Vfunc_aes_mul_gf2p2__83__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__83__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__83__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__83__b)));
    __Vfunc_aes_mul_gf2p2__83__Vfuncout = __Vfunc_aes_mul_gf2p2__83__f;
    __Vfunc_aes_mul_gf2p4__80__c = __Vfunc_aes_mul_gf2p2__83__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__80__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__80__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__84__g 
                        = __Vfunc_aes_mul_gf2p4__80__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__84__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__84__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__84__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__84__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__84__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__84__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__80__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__80__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__85__g 
                        = __Vfunc_aes_mul_gf2p4__80__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__85__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__85__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__85__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__85__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__85__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__85__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__80__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__80__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__80__Vfuncout;
    __Vfunc_aes_mul_gf2p4__86__delta = (0x0000000fU 
                                        & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p4__86__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__86__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11139393955715707967ull);
    __Vfunc_aes_mul_gf2p2__87__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__86__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__87__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__86__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__87__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__87__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__87__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__87__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__87__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__87__d)));
    __Vfunc_aes_mul_gf2p2__87__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__87__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__87__d)));
    __Vfunc_aes_mul_gf2p2__87__f = ((((IData)(__Vfunc_aes_mul_gf2p2__87__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__87__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__87__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__87__b)));
    __Vfunc_aes_mul_gf2p2__87__Vfuncout = __Vfunc_aes_mul_gf2p2__87__f;
    __Vfunc_aes_mul_gf2p4__86__a = __Vfunc_aes_mul_gf2p2__87__Vfuncout;
    __Vfunc_aes_mul_gf2p2__88__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__86__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__86__delta)));
    __Vfunc_aes_mul_gf2p2__88__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__86__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__86__gamma)));
    __Vfunc_aes_mul_gf2p2__88__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__88__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__88__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__88__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__88__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__88__d)));
    __Vfunc_aes_mul_gf2p2__88__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__88__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__88__d)));
    __Vfunc_aes_mul_gf2p2__88__f = ((((IData)(__Vfunc_aes_mul_gf2p2__88__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__88__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__88__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__88__b)));
    __Vfunc_aes_mul_gf2p2__88__Vfuncout = __Vfunc_aes_mul_gf2p2__88__f;
    __Vfunc_aes_mul_gf2p4__86__b = __Vfunc_aes_mul_gf2p2__88__Vfuncout;
    __Vfunc_aes_mul_gf2p2__89__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__86__delta));
    __Vfunc_aes_mul_gf2p2__89__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__86__gamma));
    __Vfunc_aes_mul_gf2p2__89__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__89__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__89__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__89__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__89__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__89__d)));
    __Vfunc_aes_mul_gf2p2__89__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__89__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__89__d)));
    __Vfunc_aes_mul_gf2p2__89__f = ((((IData)(__Vfunc_aes_mul_gf2p2__89__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__89__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__89__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__89__b)));
    __Vfunc_aes_mul_gf2p2__89__Vfuncout = __Vfunc_aes_mul_gf2p2__89__f;
    __Vfunc_aes_mul_gf2p4__86__c = __Vfunc_aes_mul_gf2p2__89__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__86__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__86__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__90__g 
                        = __Vfunc_aes_mul_gf2p4__86__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__90__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__90__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__90__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__90__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__90__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__90__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__86__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__86__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__91__g 
                        = __Vfunc_aes_mul_gf2p4__86__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__91__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__91__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__91__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__91__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__91__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__91__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__86__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__86__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__86__Vfuncout;
    __Vfunc_aes_mul_gf2p4__98__delta = (0x0000000fU 
                                        & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__98__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__a_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__98__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11633063309433321852ull);
    __Vfunc_aes_mul_gf2p2__99__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__98__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__99__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__98__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__99__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__99__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__99__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__99__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__99__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__99__d)));
    __Vfunc_aes_mul_gf2p2__99__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__99__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__99__d)));
    __Vfunc_aes_mul_gf2p2__99__f = ((((IData)(__Vfunc_aes_mul_gf2p2__99__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__99__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__99__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__99__b)));
    __Vfunc_aes_mul_gf2p2__99__Vfuncout = __Vfunc_aes_mul_gf2p2__99__f;
    __Vfunc_aes_mul_gf2p4__98__a = __Vfunc_aes_mul_gf2p2__99__Vfuncout;
    __Vfunc_aes_mul_gf2p2__100__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__98__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__98__delta)));
    __Vfunc_aes_mul_gf2p2__100__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__98__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__98__gamma)));
    __Vfunc_aes_mul_gf2p2__100__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__100__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__100__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__100__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__100__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__100__d)));
    __Vfunc_aes_mul_gf2p2__100__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__100__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__100__d)));
    __Vfunc_aes_mul_gf2p2__100__f = ((((IData)(__Vfunc_aes_mul_gf2p2__100__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__100__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__100__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__100__b)));
    __Vfunc_aes_mul_gf2p2__100__Vfuncout = __Vfunc_aes_mul_gf2p2__100__f;
    __Vfunc_aes_mul_gf2p4__98__b = __Vfunc_aes_mul_gf2p2__100__Vfuncout;
    __Vfunc_aes_mul_gf2p2__101__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__98__delta));
    __Vfunc_aes_mul_gf2p2__101__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__98__gamma));
    __Vfunc_aes_mul_gf2p2__101__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__101__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__101__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__101__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__101__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__101__d)));
    __Vfunc_aes_mul_gf2p2__101__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__101__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__101__d)));
    __Vfunc_aes_mul_gf2p2__101__f = ((((IData)(__Vfunc_aes_mul_gf2p2__101__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__101__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__101__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__101__b)));
    __Vfunc_aes_mul_gf2p2__101__Vfuncout = __Vfunc_aes_mul_gf2p2__101__f;
    __Vfunc_aes_mul_gf2p4__98__c = __Vfunc_aes_mul_gf2p2__101__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__98__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__98__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__102__g 
                        = __Vfunc_aes_mul_gf2p4__98__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__102__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__102__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__102__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__102__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__102__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__102__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__98__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__98__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__103__g 
                        = __Vfunc_aes_mul_gf2p4__98__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__103__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__103__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__103__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__103__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__103__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__103__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__98__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__98__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__98__Vfuncout;
    __Vfunc_aes_mul_gf2p4__68__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__68__gamma = (0x0000000fU 
                                        & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                           >> 4U));
    vlSelf->__Vfunc_aes_mul_gf2p4__68__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 311451565181086614ull);
    __Vfunc_aes_mul_gf2p2__69__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__68__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__69__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__68__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__69__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__69__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__69__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__69__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__69__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__69__d)));
    __Vfunc_aes_mul_gf2p2__69__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__69__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__69__d)));
    __Vfunc_aes_mul_gf2p2__69__f = ((((IData)(__Vfunc_aes_mul_gf2p2__69__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__69__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__69__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__69__b)));
    __Vfunc_aes_mul_gf2p2__69__Vfuncout = __Vfunc_aes_mul_gf2p2__69__f;
    __Vfunc_aes_mul_gf2p4__68__a = __Vfunc_aes_mul_gf2p2__69__Vfuncout;
    __Vfunc_aes_mul_gf2p2__70__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__68__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__68__delta)));
    __Vfunc_aes_mul_gf2p2__70__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__68__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__68__gamma)));
    __Vfunc_aes_mul_gf2p2__70__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__70__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__70__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__70__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__70__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__70__d)));
    __Vfunc_aes_mul_gf2p2__70__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__70__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__70__d)));
    __Vfunc_aes_mul_gf2p2__70__f = ((((IData)(__Vfunc_aes_mul_gf2p2__70__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__70__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__70__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__70__b)));
    __Vfunc_aes_mul_gf2p2__70__Vfuncout = __Vfunc_aes_mul_gf2p2__70__f;
    __Vfunc_aes_mul_gf2p4__68__b = __Vfunc_aes_mul_gf2p2__70__Vfuncout;
    __Vfunc_aes_mul_gf2p2__71__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__68__delta));
    __Vfunc_aes_mul_gf2p2__71__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__68__gamma));
    __Vfunc_aes_mul_gf2p2__71__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__71__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__71__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__71__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__71__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__71__d)));
    __Vfunc_aes_mul_gf2p2__71__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__71__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__71__d)));
    __Vfunc_aes_mul_gf2p2__71__f = ((((IData)(__Vfunc_aes_mul_gf2p2__71__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__71__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__71__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__71__b)));
    __Vfunc_aes_mul_gf2p2__71__Vfuncout = __Vfunc_aes_mul_gf2p2__71__f;
    __Vfunc_aes_mul_gf2p4__68__c = __Vfunc_aes_mul_gf2p2__71__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__68__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__68__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__72__g 
                        = __Vfunc_aes_mul_gf2p4__68__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__72__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__72__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__72__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__72__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__72__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__72__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__68__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__68__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__73__g 
                        = __Vfunc_aes_mul_gf2p4__68__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__73__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__73__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__73__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__73__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__73__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__73__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__68__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__68__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__68__Vfuncout;
    __Vfunc_aes_mul_gf2p4__74__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__74__gamma = (0x0000000fU 
                                        & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                           >> 0x0000000cU));
    vlSelf->__Vfunc_aes_mul_gf2p4__74__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18300221043253115725ull);
    __Vfunc_aes_mul_gf2p2__75__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__74__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__75__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__74__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__75__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__75__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__75__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__75__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__75__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__75__d)));
    __Vfunc_aes_mul_gf2p2__75__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__75__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__75__d)));
    __Vfunc_aes_mul_gf2p2__75__f = ((((IData)(__Vfunc_aes_mul_gf2p2__75__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__75__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__75__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__75__b)));
    __Vfunc_aes_mul_gf2p2__75__Vfuncout = __Vfunc_aes_mul_gf2p2__75__f;
    __Vfunc_aes_mul_gf2p4__74__a = __Vfunc_aes_mul_gf2p2__75__Vfuncout;
    __Vfunc_aes_mul_gf2p2__76__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__74__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__74__delta)));
    __Vfunc_aes_mul_gf2p2__76__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__74__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__74__gamma)));
    __Vfunc_aes_mul_gf2p2__76__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__76__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__76__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__76__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__76__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__76__d)));
    __Vfunc_aes_mul_gf2p2__76__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__76__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__76__d)));
    __Vfunc_aes_mul_gf2p2__76__f = ((((IData)(__Vfunc_aes_mul_gf2p2__76__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__76__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__76__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__76__b)));
    __Vfunc_aes_mul_gf2p2__76__Vfuncout = __Vfunc_aes_mul_gf2p2__76__f;
    __Vfunc_aes_mul_gf2p4__74__b = __Vfunc_aes_mul_gf2p2__76__Vfuncout;
    __Vfunc_aes_mul_gf2p2__77__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__74__delta));
    __Vfunc_aes_mul_gf2p2__77__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__74__gamma));
    __Vfunc_aes_mul_gf2p2__77__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__77__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__77__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__77__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__77__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__77__d)));
    __Vfunc_aes_mul_gf2p2__77__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__77__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__77__d)));
    __Vfunc_aes_mul_gf2p2__77__f = ((((IData)(__Vfunc_aes_mul_gf2p2__77__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__77__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__77__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__77__b)));
    __Vfunc_aes_mul_gf2p2__77__Vfuncout = __Vfunc_aes_mul_gf2p2__77__f;
    __Vfunc_aes_mul_gf2p4__74__c = __Vfunc_aes_mul_gf2p2__77__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__74__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__74__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__78__g 
                        = __Vfunc_aes_mul_gf2p4__74__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__78__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__78__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__78__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__78__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__78__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__78__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__74__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__74__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__79__g 
                        = __Vfunc_aes_mul_gf2p4__74__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__79__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__79__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__79__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__79__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__79__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__79__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__74__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__74__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__74__Vfuncout;
    __Vfunc_aes_mul_gf2p4__92__delta = (0x0000000fU 
                                        & (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__92__gamma = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    vlSelf->__Vfunc_aes_mul_gf2p4__92__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18079009451886073318ull);
    __Vfunc_aes_mul_gf2p2__93__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__92__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__93__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__92__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__93__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__93__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__93__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__93__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__93__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__93__d)));
    __Vfunc_aes_mul_gf2p2__93__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__93__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__93__d)));
    __Vfunc_aes_mul_gf2p2__93__f = ((((IData)(__Vfunc_aes_mul_gf2p2__93__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__93__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__93__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__93__b)));
    __Vfunc_aes_mul_gf2p2__93__Vfuncout = __Vfunc_aes_mul_gf2p2__93__f;
    __Vfunc_aes_mul_gf2p4__92__a = __Vfunc_aes_mul_gf2p2__93__Vfuncout;
    __Vfunc_aes_mul_gf2p2__94__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__92__delta) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__92__delta)));
    __Vfunc_aes_mul_gf2p2__94__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__92__gamma) 
                                           >> 2U) ^ (IData)(__Vfunc_aes_mul_gf2p4__92__gamma)));
    __Vfunc_aes_mul_gf2p2__94__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__94__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__94__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__94__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__94__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__94__d)));
    __Vfunc_aes_mul_gf2p2__94__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__94__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__94__d)));
    __Vfunc_aes_mul_gf2p2__94__f = ((((IData)(__Vfunc_aes_mul_gf2p2__94__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__94__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__94__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__94__b)));
    __Vfunc_aes_mul_gf2p2__94__Vfuncout = __Vfunc_aes_mul_gf2p2__94__f;
    __Vfunc_aes_mul_gf2p4__92__b = __Vfunc_aes_mul_gf2p2__94__Vfuncout;
    __Vfunc_aes_mul_gf2p2__95__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__92__delta));
    __Vfunc_aes_mul_gf2p2__95__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__92__gamma));
    __Vfunc_aes_mul_gf2p2__95__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__95__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__95__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__95__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__95__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__95__d)));
    __Vfunc_aes_mul_gf2p2__95__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__95__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__95__d)));
    __Vfunc_aes_mul_gf2p2__95__f = ((((IData)(__Vfunc_aes_mul_gf2p2__95__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__95__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__95__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__95__b)));
    __Vfunc_aes_mul_gf2p2__95__Vfuncout = __Vfunc_aes_mul_gf2p2__95__f;
    __Vfunc_aes_mul_gf2p4__92__c = __Vfunc_aes_mul_gf2p2__95__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__92__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__92__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__96__g 
                        = __Vfunc_aes_mul_gf2p4__92__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__96__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__96__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__96__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__96__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__96__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__96__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__92__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__92__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__97__g 
                        = __Vfunc_aes_mul_gf2p4__92__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__97__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__97__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__97__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__97__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__97__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__97__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__92__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__92__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__92__Vfuncout;
    __Vfunc_aes_mul_gf2p4__104__delta = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__b_x;
    __Vfunc_aes_mul_gf2p4__104__gamma = (0x0000000fU 
                                         & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                            >> 8U));
    vlSelf->__Vfunc_aes_mul_gf2p4__104__theta = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11986098921478388490ull);
    __Vfunc_aes_mul_gf2p2__105__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__104__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__105__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__104__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__105__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__105__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__105__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__105__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__105__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__105__d)));
    __Vfunc_aes_mul_gf2p2__105__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__105__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__105__d)));
    __Vfunc_aes_mul_gf2p2__105__f = ((((IData)(__Vfunc_aes_mul_gf2p2__105__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__105__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__105__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__105__b)));
    __Vfunc_aes_mul_gf2p2__105__Vfuncout = __Vfunc_aes_mul_gf2p2__105__f;
    __Vfunc_aes_mul_gf2p4__104__a = __Vfunc_aes_mul_gf2p2__105__Vfuncout;
    __Vfunc_aes_mul_gf2p2__106__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__104__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__104__delta)));
    __Vfunc_aes_mul_gf2p2__106__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__104__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__104__gamma)));
    __Vfunc_aes_mul_gf2p2__106__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__106__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__106__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__106__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__106__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__106__d)));
    __Vfunc_aes_mul_gf2p2__106__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__106__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__106__d)));
    __Vfunc_aes_mul_gf2p2__106__f = ((((IData)(__Vfunc_aes_mul_gf2p2__106__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__106__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__106__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__106__b)));
    __Vfunc_aes_mul_gf2p2__106__Vfuncout = __Vfunc_aes_mul_gf2p2__106__f;
    __Vfunc_aes_mul_gf2p4__104__b = __Vfunc_aes_mul_gf2p2__106__Vfuncout;
    __Vfunc_aes_mul_gf2p2__107__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__104__delta));
    __Vfunc_aes_mul_gf2p2__107__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__104__gamma));
    __Vfunc_aes_mul_gf2p2__107__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__107__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__107__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__107__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__107__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__107__d)));
    __Vfunc_aes_mul_gf2p2__107__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__107__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__107__d)));
    __Vfunc_aes_mul_gf2p2__107__f = ((((IData)(__Vfunc_aes_mul_gf2p2__107__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__107__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__107__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__107__b)));
    __Vfunc_aes_mul_gf2p2__107__Vfuncout = __Vfunc_aes_mul_gf2p2__107__f;
    __Vfunc_aes_mul_gf2p4__104__c = __Vfunc_aes_mul_gf2p2__107__Vfuncout;
    VL_ASSIGNSEL_II(4, 2, 2U, vlSelfRef.__Vfunc_aes_mul_gf2p4__104__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__104__a) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__108__g 
                        = __Vfunc_aes_mul_gf2p4__104__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__108__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__108__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__108__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__108__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__108__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__108__Vfuncout))));
    VL_ASSIGNSEL_II(4, 2, 0U, vlSelfRef.__Vfunc_aes_mul_gf2p4__104__theta, 
                    ((IData)(__Vfunc_aes_mul_gf2p4__104__c) 
                     ^ ([&]() {
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__109__g 
                        = __Vfunc_aes_mul_gf2p4__104__b;
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__109__d 
                        = ((2U & ((IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__109__g) 
                                  << 1U)) | (1U & VL_REDXOR_2(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__109__g)));
                    vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__109__Vfuncout 
                        = vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__109__d;
                }(), (IData)(vlSelfRef.__Vfunc_aes_scale_omega2_gf2p2__109__Vfuncout))));
    __Vfunc_aes_mul_gf2p4__104__Vfuncout = vlSelfRef.__Vfunc_aes_mul_gf2p4__104__theta;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx 
        = __Vfunc_aes_mul_gf2p4__104__Vfuncout;
    __Vfunc_aes_mul_gf2p2__52__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_b;
    __Vfunc_aes_mul_gf2p2__52__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                          >> 6U));
    __Vfunc_aes_mul_gf2p2__52__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__52__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__52__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__52__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__52__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__52__d)));
    __Vfunc_aes_mul_gf2p2__52__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__52__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__52__d)));
    __Vfunc_aes_mul_gf2p2__52__f = ((((IData)(__Vfunc_aes_mul_gf2p2__52__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__52__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__52__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__52__b)));
    __Vfunc_aes_mul_gf2p2__52__Vfuncout = __Vfunc_aes_mul_gf2p2__52__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__52__Vfuncout;
    __Vfunc_aes_mul_gf2p2__53__d = vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_b;
    __Vfunc_aes_mul_gf2p2__53__g = (3U & ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__53__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__53__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__53__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__53__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__53__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__53__d)));
    __Vfunc_aes_mul_gf2p2__53__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__53__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__53__d)));
    __Vfunc_aes_mul_gf2p2__53__f = ((((IData)(__Vfunc_aes_mul_gf2p2__53__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__53__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__53__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__53__b)));
    __Vfunc_aes_mul_gf2p2__53__Vfuncout = __Vfunc_aes_mul_gf2p2__53__f;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__53__Vfuncout;
    __Vfunc_aes_square_gf2p2__48__g = (3U & ((((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                               >> 2U) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b)) 
                                             ^ ((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o) 
                                                >> 2U)));
    __Vfunc_aes_square_gf2p2__48__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__48__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__48__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__48__Vfuncout = __Vfunc_aes_square_gf2p2__48__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega 
        = __Vfunc_aes_square_gf2p2__48__Vfuncout;
    __Vfunc_aes_square_gf2p2__49__g = (3U & (((IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                              ^ (IData)(vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b)) 
                                             ^ (IData)(vlSelfRef.gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o)));
    __Vfunc_aes_square_gf2p2__49__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__49__g) 
                                              << 1U)) 
                                       | (1U & ((IData)(__Vfunc_aes_square_gf2p2__49__g) 
                                                >> 1U)));
    __Vfunc_aes_square_gf2p2__49__Vfuncout = __Vfunc_aes_square_gf2p2__49__d;
    vlSelfRef.__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega 
        = __Vfunc_aes_square_gf2p2__49__Vfuncout;
}
